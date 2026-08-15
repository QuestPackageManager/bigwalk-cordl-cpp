#pragma once
// IWYU pragma private; include "Rewired/Utils/ExternalTools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__ExternalTools_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IExternalTools_def.hpp"
#include "Rewired/zzzz__IControllerTemplate_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Touch_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.get_getPlatformInitializerDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::System::Object*>* (*)()>(&::Rewired::Utils::ExternalTools::get_getPlatformInitializerDelegate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803938f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"get_getPlatformInitializerDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.set_getPlatformInitializerDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Func_1<::System::Object*>*)>(&::Rewired::Utils::ExternalTools::set_getPlatformInitializerDelegate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180393a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"set_getPlatformInitializerDelegate", {}, {::i2c::type_of<::System::Func_1<::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::ExternalTools::*)()>(&::Rewired::Utils::ExternalTools::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::ExternalTools::*)()>(&::Rewired::Utils::ExternalTools::Destroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.get_isEditorPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::ExternalTools::*)()>(&::Rewired::Utils::ExternalTools::get_isEditorPaused)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"get_isEditorPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.add_EditorPausedStateChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::ExternalTools::*)(::System::Action_1<bool>*)>(&::Rewired::Utils::ExternalTools::add_EditorPausedStateChangedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803937c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"add_EditorPausedStateChangedEvent", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.remove_EditorPausedStateChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::ExternalTools::*)(::System::Action_1<bool>*)>(&::Rewired::Utils::ExternalTools::remove_EditorPausedStateChangedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180393910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"remove_EditorPausedStateChangedEvent", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.GetPlatformInitializer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Utils::ExternalTools::*)()>(&::Rewired::Utils::ExternalTools::GetPlatformInitializer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"GetPlatformInitializer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.GetFocusedEditorWindowTitle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::ExternalTools::*)()>(&::Rewired::Utils::ExternalTools::GetFocusedEditorWindowTitle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"GetFocusedEditorWindowTitle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.IsEditorSceneViewFocused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::ExternalTools::*)()>(&::Rewired::Utils::ExternalTools::IsEditorSceneViewFocused)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"IsEditorSceneViewFocused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.LinuxInput_IsJoystickPreconfigured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::ExternalTools::*)(::StringW)>(&::Rewired::Utils::ExternalTools::LinuxInput_IsJoystickPreconfigured)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"LinuxInput_IsJoystickPreconfigured", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.add_XboxOneInput_OnGamepadStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::ExternalTools::*)(::System::Action_2<uint32_t,bool>*)>(&::Rewired::Utils::ExternalTools::add_XboxOneInput_OnGamepadStateChange)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180393850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"add_XboxOneInput_OnGamepadStateChange", {}, {::i2c::type_of<::System::Action_2<uint32_t,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.remove_XboxOneInput_OnGamepadStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::ExternalTools::*)(::System::Action_2<uint32_t,bool>*)>(&::Rewired::Utils::ExternalTools::remove_XboxOneInput_OnGamepadStateChange)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803939a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"remove_XboxOneInput_OnGamepadStateChange", {}, {::i2c::type_of<::System::Action_2<uint32_t,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.XboxOneInput_GetUserIdForGamepad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::ExternalTools::*)(uint32_t)>(&::Rewired::Utils::ExternalTools::XboxOneInput_GetUserIdForGamepad)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOneInput_GetUserIdForGamepad", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.XboxOneInput_GetControllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Rewired::Utils::ExternalTools::*)(uint32_t)>(&::Rewired::Utils::ExternalTools::XboxOneInput_GetControllerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOneInput_GetControllerId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.XboxOneInput_IsGamepadActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::ExternalTools::*)(uint32_t)>(&::Rewired::Utils::ExternalTools::XboxOneInput_IsGamepadActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOneInput_IsGamepadActive", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.XboxOneInput_GetControllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::ExternalTools::*)(uint64_t)>(&::Rewired::Utils::ExternalTools::XboxOneInput_GetControllerType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOneInput_GetControllerType", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.XboxOneInput_GetJoystickId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Rewired::Utils::ExternalTools::*)(uint64_t)>(&::Rewired::Utils::ExternalTools::XboxOneInput_GetJoystickId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOneInput_GetJoystickId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.XboxOne_Gamepad_UpdatePlugin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::ExternalTools::*)()>(&::Rewired::Utils::ExternalTools::XboxOne_Gamepad_UpdatePlugin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOne_Gamepad_UpdatePlugin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.XboxOne_Gamepad_SetGamepadVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::ExternalTools::*)(uint64_t, float_t, float_t, float_t, float_t)>(&::Rewired::Utils::ExternalTools::XboxOne_Gamepad_SetGamepadVibration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOne_Gamepad_SetGamepadVibration", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.XboxOne_Gamepad_PulseVibrateMotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::ExternalTools::*)(uint64_t, int32_t, float_t, float_t, uint64_t)>(&::Rewired::Utils::ExternalTools::XboxOne_Gamepad_PulseVibrateMotor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOne_Gamepad_PulseVibrateMotor", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.GetDeviceVIDPIDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::ExternalTools::*)(::by_ref<::System::Collections::Generic::List_1<int32_t>*>, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>)>(&::Rewired::Utils::ExternalTools::GetDeviceVIDPIDs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803934a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"GetDeviceVIDPIDs", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.GetAndroidAPILevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::ExternalTools::*)()>(&::Rewired::Utils::ExternalTools::GetAndroidAPILevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"GetAndroidAPILevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.WindowsStandalone_ForwardRawInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::ExternalTools::*)(::System::IntPtr, ::System::IntPtr, uint32_t, ::System::IntPtr, uint32_t)>(&::Rewired::Utils::ExternalTools::WindowsStandalone_ForwardRawInput)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180393790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"WindowsStandalone_ForwardRawInput", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.UnityUI_Graphic_GetRaycastTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::ExternalTools::*)(::System::Object*)>(&::Rewired::Utils::ExternalTools::UnityUI_Graphic_GetRaycastTarget)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180393570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"UnityUI_Graphic_GetRaycastTarget", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.UnityUI_Graphic_SetRaycastTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::ExternalTools::*)(::System::Object*, bool)>(&::Rewired::Utils::ExternalTools::UnityUI_Graphic_SetRaycastTarget)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180393680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"UnityUI_Graphic_SetRaycastTarget", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.get_UnityInput_IsTouchPressureSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::ExternalTools::*)()>(&::Rewired::Utils::ExternalTools::get_UnityInput_IsTouchPressureSupported)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803938e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"get_UnityInput_IsTouchPressureSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.UnityInput_GetTouchPressure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Utils::ExternalTools::*)(::by_ref<::UnityEngine::Touch>)>(&::Rewired::Utils::ExternalTools::UnityInput_GetTouchPressure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"UnityInput_GetTouchPressure", {}, {::i2c::type_of<::by_ref<::UnityEngine::Touch>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.UnityInput_GetTouchMaximumPossiblePressure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Utils::ExternalTools::*)(::by_ref<::UnityEngine::Touch>)>(&::Rewired::Utils::ExternalTools::UnityInput_GetTouchMaximumPossiblePressure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"UnityInput_GetTouchMaximumPossiblePressure", {}, {::i2c::type_of<::by_ref<::UnityEngine::Touch>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.CreateControllerTemplate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplate* (::Rewired::Utils::ExternalTools::*)(::System::Guid, ::System::Object*)>(&::Rewired::Utils::ExternalTools::CreateControllerTemplate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180393420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"CreateControllerTemplate", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.GetControllerTemplateTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::Rewired::Utils::ExternalTools::*)()>(&::Rewired::Utils::ExternalTools::GetControllerTemplateTypes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"GetControllerTemplateTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::ExternalTools.GetControllerTemplateInterfaceTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::Rewired::Utils::ExternalTools::*)()>(&::Rewired::Utils::ExternalTools::GetControllerTemplateInterfaceTypes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"GetControllerTemplateInterfaceTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Utils::ExternalTools::__cordl_internal_get__isEditorPaused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEditorPaused;
}
constexpr bool const& Rewired::Utils::ExternalTools::__cordl_internal_get__isEditorPaused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEditorPaused;
}
constexpr void Rewired::Utils::ExternalTools::__cordl_internal_set__isEditorPaused(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isEditorPaused = value;
}
constexpr ::System::Action_1<bool>*& Rewired::Utils::ExternalTools::__cordl_internal_get__EditorPausedStateChangedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EditorPausedStateChangedEvent;
}
constexpr ::System::Action_1<bool>* const& Rewired::Utils::ExternalTools::__cordl_internal_get__EditorPausedStateChangedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EditorPausedStateChangedEvent;
}
constexpr void Rewired::Utils::ExternalTools::__cordl_internal_set__EditorPausedStateChangedEvent(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EditorPausedStateChangedEvent = value;
}
constexpr ::System::Action_2<uint32_t,bool>*& Rewired::Utils::ExternalTools::__cordl_internal_get_XboxOneInput_OnGamepadStateChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XboxOneInput_OnGamepadStateChange;
}
constexpr ::System::Action_2<uint32_t,bool>* const& Rewired::Utils::ExternalTools::__cordl_internal_get_XboxOneInput_OnGamepadStateChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XboxOneInput_OnGamepadStateChange;
}
constexpr void Rewired::Utils::ExternalTools::__cordl_internal_set_XboxOneInput_OnGamepadStateChange(::System::Action_2<uint32_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XboxOneInput_OnGamepadStateChange = value;
}
inline void Rewired::Utils::ExternalTools::setStaticF__getPlatformInitializerDelegate(::System::Func_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Object*>*, "_getPlatformInitializerDelegate", ::Rewired::Utils::ExternalTools*>(std::forward<::System::Func_1<::System::Object*>*>(value));
}
inline ::System::Func_1<::System::Object*>* Rewired::Utils::ExternalTools::getStaticF__getPlatformInitializerDelegate()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Object*>*, "_getPlatformInitializerDelegate", ::Rewired::Utils::ExternalTools*>();
}
inline ::System::Func_1<::System::Object*>* Rewired::Utils::ExternalTools::get_getPlatformInitializerDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"get_getPlatformInitializerDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<::System::Object*>*>(nullptr, ___internal_method);
}
inline void Rewired::Utils::ExternalTools::set_getPlatformInitializerDelegate(::System::Func_1<::System::Object*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"set_getPlatformInitializerDelegate", {}, {::i2c::type_of<::System::Func_1<::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Rewired::Utils::ExternalTools::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::ExternalTools::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Utils::ExternalTools::get_isEditorPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"get_isEditorPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Utils::ExternalTools::add_EditorPausedStateChangedEvent(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"add_EditorPausedStateChangedEvent", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Utils::ExternalTools::remove_EditorPausedStateChangedEvent(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"remove_EditorPausedStateChangedEvent", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* Rewired::Utils::ExternalTools::GetPlatformInitializer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"GetPlatformInitializer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW Rewired::Utils::ExternalTools::GetFocusedEditorWindowTitle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"GetFocusedEditorWindowTitle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Rewired::Utils::ExternalTools::IsEditorSceneViewFocused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"IsEditorSceneViewFocused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Utils::ExternalTools::LinuxInput_IsJoystickPreconfigured(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"LinuxInput_IsJoystickPreconfigured", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline void Rewired::Utils::ExternalTools::add_XboxOneInput_OnGamepadStateChange(::System::Action_2<uint32_t,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"add_XboxOneInput_OnGamepadStateChange", {}, {::i2c::type_of<::System::Action_2<uint32_t,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Utils::ExternalTools::remove_XboxOneInput_OnGamepadStateChange(::System::Action_2<uint32_t,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"remove_XboxOneInput_OnGamepadStateChange", {}, {::i2c::type_of<::System::Action_2<uint32_t,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Utils::ExternalTools::XboxOneInput_GetUserIdForGamepad(uint32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOneInput_GetUserIdForGamepad", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
inline uint64_t Rewired::Utils::ExternalTools::XboxOneInput_GetControllerId(uint32_t  unityJoystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOneInput_GetControllerId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, unityJoystickId);
}
inline bool Rewired::Utils::ExternalTools::XboxOneInput_IsGamepadActive(uint32_t  unityJoystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOneInput_IsGamepadActive", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unityJoystickId);
}
inline ::StringW Rewired::Utils::ExternalTools::XboxOneInput_GetControllerType(uint64_t  xboxControllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOneInput_GetControllerType", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, xboxControllerId);
}
inline uint32_t Rewired::Utils::ExternalTools::XboxOneInput_GetJoystickId(uint64_t  xboxControllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOneInput_GetJoystickId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, xboxControllerId);
}
inline void Rewired::Utils::ExternalTools::XboxOne_Gamepad_UpdatePlugin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOne_Gamepad_UpdatePlugin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Utils::ExternalTools::XboxOne_Gamepad_SetGamepadVibration(uint64_t  xboxOneJoystickId, float_t  leftMotor, float_t  rightMotor, float_t  leftTriggerLevel, float_t  rightTriggerLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOne_Gamepad_SetGamepadVibration", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xboxOneJoystickId, leftMotor, rightMotor, leftTriggerLevel, rightTriggerLevel);
}
inline void Rewired::Utils::ExternalTools::XboxOne_Gamepad_PulseVibrateMotor(uint64_t  xboxOneJoystickId, int32_t  motorInt, float_t  startLevel, float_t  endLevel, uint64_t  durationMS)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"XboxOne_Gamepad_PulseVibrateMotor", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xboxOneJoystickId, motorInt, startLevel, endLevel, durationMS);
}
inline void Rewired::Utils::ExternalTools::GetDeviceVIDPIDs(::by_ref<::System::Collections::Generic::List_1<int32_t>*>  vids, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>  pids)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"GetDeviceVIDPIDs", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vids, pids);
}
inline int32_t Rewired::Utils::ExternalTools::GetAndroidAPILevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"GetAndroidAPILevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Utils::ExternalTools::WindowsStandalone_ForwardRawInput(::System::IntPtr  rawInputHeaderIndices, ::System::IntPtr  rawInputDataIndices, uint32_t  indicesCount, ::System::IntPtr  rawInputData, uint32_t  rawInputDataSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"WindowsStandalone_ForwardRawInput", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawInputHeaderIndices, rawInputDataIndices, indicesCount, rawInputData, rawInputDataSize);
}
inline bool Rewired::Utils::ExternalTools::UnityUI_Graphic_GetRaycastTarget(::System::Object*  graphic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"UnityUI_Graphic_GetRaycastTarget", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, graphic);
}
inline void Rewired::Utils::ExternalTools::UnityUI_Graphic_SetRaycastTarget(::System::Object*  graphic, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"UnityUI_Graphic_SetRaycastTarget", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graphic, value);
}
inline bool Rewired::Utils::ExternalTools::get_UnityInput_IsTouchPressureSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"get_UnityInput_IsTouchPressureSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Rewired::Utils::ExternalTools::UnityInput_GetTouchPressure(::by_ref<::UnityEngine::Touch>  touch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"UnityInput_GetTouchPressure", {}, {::i2c::type_of<::by_ref<::UnityEngine::Touch>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, touch);
}
inline float_t Rewired::Utils::ExternalTools::UnityInput_GetTouchMaximumPossiblePressure(::by_ref<::UnityEngine::Touch>  touch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"UnityInput_GetTouchMaximumPossiblePressure", {}, {::i2c::type_of<::by_ref<::UnityEngine::Touch>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, touch);
}
inline ::Rewired::IControllerTemplate* Rewired::Utils::ExternalTools::CreateControllerTemplate(::System::Guid  typeGuid, ::System::Object*  payload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"CreateControllerTemplate", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplate*>(this, ___internal_method, typeGuid, payload);
}
inline ::ArrayW<::System::Type*> Rewired::Utils::ExternalTools::GetControllerTemplateTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"GetControllerTemplateTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*> Rewired::Utils::ExternalTools::GetControllerTemplateInterfaceTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExternalTools*>(),
                        {"GetControllerTemplateInterfaceTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::Rewired::Utils::ExternalTools* Rewired::Utils::ExternalTools::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::ExternalTools*>());
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IExternalTools"
constexpr  Rewired::Utils::ExternalTools::operator ::Rewired::Utils::Interfaces::IExternalTools*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IExternalTools*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IExternalTools"
constexpr ::Rewired::Utils::Interfaces::IExternalTools* Rewired::Utils::ExternalTools::i___Rewired__Utils__Interfaces__IExternalTools() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IExternalTools*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::ExternalTools::ExternalTools()   {
}
