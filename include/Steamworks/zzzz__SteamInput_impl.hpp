#pragma once
// IWYU pragma private; include "Steamworks/SteamInput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamInput_def.hpp"
#include "Steamworks/zzzz__EControllerHapticLocation_def.hpp"
#include "Steamworks/zzzz__EInputActionOrigin_def.hpp"
#include "Steamworks/zzzz__ESteamControllerPad_def.hpp"
#include "Steamworks/zzzz__ESteamInputGlyphSize_def.hpp"
#include "Steamworks/zzzz__ESteamInputType_def.hpp"
#include "Steamworks/zzzz__EXboxOrigin_def.hpp"
#include "Steamworks/zzzz__InputActionSetHandle_t_def.hpp"
#include "Steamworks/zzzz__InputAnalogActionData_t_def.hpp"
#include "Steamworks/zzzz__InputAnalogActionHandle_t_def.hpp"
#include "Steamworks/zzzz__InputDigitalActionData_t_def.hpp"
#include "Steamworks/zzzz__InputDigitalActionHandle_t_def.hpp"
#include "Steamworks/zzzz__InputHandle_t_def.hpp"
#include "Steamworks/zzzz__InputMotionData_t_def.hpp"
#include "Steamworks/zzzz__SteamInputActionEventCallbackPointer_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamInput.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamInput::Init)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805afb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"Init", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamInput::Shutdown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805afe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.SetInputActionManifestFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Steamworks::SteamInput::SetInputActionManifestFilePath)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805afca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"SetInputActionManifestFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.RunFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Steamworks::SteamInput::RunFrame)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805afc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"RunFrame", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.BWaitForData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, uint32_t)>(&::Steamworks::SteamInput::BWaitForData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805aeff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"BWaitForData", {}, {::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.BNewDataAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamInput::BNewDataAvailable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805aefc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"BNewDataAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetConnectedControllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::Steamworks::InputHandle_t>)>(&::Steamworks::SteamInput::GetConnectedControllers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805af4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetConnectedControllers", {}, {::i2c::type_of<::ArrayW<::Steamworks::InputHandle_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.EnableDeviceCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamInput::EnableDeviceCallbacks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805af110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"EnableDeviceCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.EnableActionEventCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::SteamInputActionEventCallbackPointer*)>(&::Steamworks::SteamInput::EnableActionEventCallbacks)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805af0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"EnableActionEventCallbacks", {}, {::i2c::type_of<::Steamworks::SteamInputActionEventCallbackPointer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetActionSetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::InputActionSetHandle_t (*)(::StringW)>(&::Steamworks::SteamInput::GetActionSetHandle)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805af190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetActionSetHandle", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.ActivateActionSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::InputHandle_t, ::Steamworks::InputActionSetHandle_t)>(&::Steamworks::SteamInput::ActivateActionSet)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805aef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"ActivateActionSet", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputActionSetHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetCurrentActionSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::InputActionSetHandle_t (*)(::Steamworks::InputHandle_t)>(&::Steamworks::SteamInput::GetCurrentActionSet)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805af550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetCurrentActionSet", {}, {::i2c::type_of<::Steamworks::InputHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.ActivateActionSetLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::InputHandle_t, ::Steamworks::InputActionSetHandle_t)>(&::Steamworks::SteamInput::ActivateActionSetLayer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805aef20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"ActivateActionSetLayer", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputActionSetHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.DeactivateActionSetLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::InputHandle_t, ::Steamworks::InputActionSetHandle_t)>(&::Steamworks::SteamInput::DeactivateActionSetLayer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805af040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"DeactivateActionSetLayer", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputActionSetHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.DeactivateAllActionSetLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::InputHandle_t)>(&::Steamworks::SteamInput::DeactivateAllActionSetLayers)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805af090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"DeactivateAllActionSetLayers", {}, {::i2c::type_of<::Steamworks::InputHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetActiveActionSetLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::InputHandle_t, ::ArrayW<::Steamworks::InputActionSetHandle_t>)>(&::Steamworks::SteamInput::GetActiveActionSetLayers)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805af270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetActiveActionSetLayers", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::ArrayW<::Steamworks::InputActionSetHandle_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetDigitalActionHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::InputDigitalActionHandle_t (*)(::StringW)>(&::Steamworks::SteamInput::GetDigitalActionHandle)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805af640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetDigitalActionHandle", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetDigitalActionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::InputDigitalActionData_t (*)(::Steamworks::InputHandle_t, ::Steamworks::InputDigitalActionHandle_t)>(&::Steamworks::SteamInput::GetDigitalActionData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805af5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetDigitalActionData", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputDigitalActionHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetDigitalActionOrigins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::InputHandle_t, ::Steamworks::InputActionSetHandle_t, ::Steamworks::InputDigitalActionHandle_t, ::ArrayW<::Steamworks::EInputActionOrigin>)>(&::Steamworks::SteamInput::GetDigitalActionOrigins)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805af720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetDigitalActionOrigins", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputActionSetHandle_t>(), ::i2c::type_of<::Steamworks::InputDigitalActionHandle_t>(), ::i2c::type_of<::ArrayW<::Steamworks::EInputActionOrigin>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetStringForDigitalActionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::InputDigitalActionHandle_t)>(&::Steamworks::SteamInput::GetStringForDigitalActionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805afab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetStringForDigitalActionName", {}, {::i2c::type_of<::Steamworks::InputDigitalActionHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetAnalogActionHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::InputAnalogActionHandle_t (*)(::StringW)>(&::Steamworks::SteamInput::GetAnalogActionHandle)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805af340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetAnalogActionHandle", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetAnalogActionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::InputAnalogActionData_t (*)(::Steamworks::InputHandle_t, ::Steamworks::InputAnalogActionHandle_t)>(&::Steamworks::SteamInput::GetAnalogActionData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805af2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetAnalogActionData", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputAnalogActionHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetAnalogActionOrigins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::InputHandle_t, ::Steamworks::InputActionSetHandle_t, ::Steamworks::InputAnalogActionHandle_t, ::ArrayW<::Steamworks::EInputActionOrigin>)>(&::Steamworks::SteamInput::GetAnalogActionOrigins)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805af420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetAnalogActionOrigins", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputActionSetHandle_t>(), ::i2c::type_of<::Steamworks::InputAnalogActionHandle_t>(), ::i2c::type_of<::ArrayW<::Steamworks::EInputActionOrigin>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetGlyphPNGForActionOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::EInputActionOrigin, ::Steamworks::ESteamInputGlyphSize, uint32_t)>(&::Steamworks::SteamInput::GetGlyphPNGForActionOrigin)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805af870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetGlyphPNGForActionOrigin", {}, {::i2c::type_of<::Steamworks::EInputActionOrigin>(), ::i2c::type_of<::Steamworks::ESteamInputGlyphSize>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetGlyphSVGForActionOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::EInputActionOrigin, uint32_t)>(&::Steamworks::SteamInput::GetGlyphSVGForActionOrigin)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805af8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetGlyphSVGForActionOrigin", {}, {::i2c::type_of<::Steamworks::EInputActionOrigin>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetGlyphForActionOrigin_Legacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::EInputActionOrigin)>(&::Steamworks::SteamInput::GetGlyphForActionOrigin_Legacy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805af7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetGlyphForActionOrigin_Legacy", {}, {::i2c::type_of<::Steamworks::EInputActionOrigin>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetStringForActionOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::EInputActionOrigin)>(&::Steamworks::SteamInput::GetStringForActionOrigin)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805afa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetStringForActionOrigin", {}, {::i2c::type_of<::Steamworks::EInputActionOrigin>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetStringForAnalogActionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::InputAnalogActionHandle_t)>(&::Steamworks::SteamInput::GetStringForAnalogActionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805afa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetStringForAnalogActionName", {}, {::i2c::type_of<::Steamworks::InputAnalogActionHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.StopAnalogActionMomentum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::InputHandle_t, ::Steamworks::InputAnalogActionHandle_t)>(&::Steamworks::SteamInput::StopAnalogActionMomentum)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805afe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"StopAnalogActionMomentum", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputAnalogActionHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetMotionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::InputMotionData_t (*)(::Steamworks::InputHandle_t)>(&::Steamworks::SteamInput::GetMotionData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805af970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetMotionData", {}, {::i2c::type_of<::Steamworks::InputHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.TriggerVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::InputHandle_t, uint16_t, uint16_t)>(&::Steamworks::SteamInput::TriggerVibration)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b0020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"TriggerVibration", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.TriggerVibrationExtended
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::InputHandle_t, uint16_t, uint16_t, uint16_t, uint16_t)>(&::Steamworks::SteamInput::TriggerVibrationExtended)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805affa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"TriggerVibrationExtended", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.TriggerSimpleHapticEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::InputHandle_t, ::Steamworks::EControllerHapticLocation, uint8_t, char16_t, uint8_t, char16_t)>(&::Steamworks::SteamInput::TriggerSimpleHapticEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805aff10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"TriggerSimpleHapticEvent", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::EControllerHapticLocation>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.SetLEDColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::InputHandle_t, uint8_t, uint8_t, uint8_t, uint32_t)>(&::Steamworks::SteamInput::SetLEDColor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805afd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"SetLEDColor", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.Legacy_TriggerHapticPulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::InputHandle_t, ::Steamworks::ESteamControllerPad, uint16_t)>(&::Steamworks::SteamInput::Legacy_TriggerHapticPulse)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805afb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"Legacy_TriggerHapticPulse", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::ESteamControllerPad>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.Legacy_TriggerRepeatedHapticPulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::InputHandle_t, ::Steamworks::ESteamControllerPad, uint16_t, uint16_t, uint16_t, uint32_t)>(&::Steamworks::SteamInput::Legacy_TriggerRepeatedHapticPulse)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805afbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"Legacy_TriggerRepeatedHapticPulse", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::ESteamControllerPad>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.ShowBindingPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::InputHandle_t)>(&::Steamworks::SteamInput::ShowBindingPanel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805afe00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"ShowBindingPanel", {}, {::i2c::type_of<::Steamworks::InputHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetInputTypeForHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamInputType (*)(::Steamworks::InputHandle_t)>(&::Steamworks::SteamInput::GetInputTypeForHandle)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805af930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetInputTypeForHandle", {}, {::i2c::type_of<::Steamworks::InputHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetControllerForGamepadIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::InputHandle_t (*)(int32_t)>(&::Steamworks::SteamInput::GetControllerForGamepadIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805af510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetControllerForGamepadIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetGamepadIndexForController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::InputHandle_t)>(&::Steamworks::SteamInput::GetGamepadIndexForController)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805af7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetGamepadIndexForController", {}, {::i2c::type_of<::Steamworks::InputHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetStringForXboxOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::EXboxOrigin)>(&::Steamworks::SteamInput::GetStringForXboxOrigin)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805afaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetStringForXboxOrigin", {}, {::i2c::type_of<::Steamworks::EXboxOrigin>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetGlyphForXboxOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Steamworks::EXboxOrigin)>(&::Steamworks::SteamInput::GetGlyphForXboxOrigin)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805af830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetGlyphForXboxOrigin", {}, {::i2c::type_of<::Steamworks::EXboxOrigin>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetActionOriginFromXboxOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EInputActionOrigin (*)(::Steamworks::InputHandle_t, ::Steamworks::EXboxOrigin)>(&::Steamworks::SteamInput::GetActionOriginFromXboxOrigin)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805af140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetActionOriginFromXboxOrigin", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::EXboxOrigin>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.TranslateActionOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EInputActionOrigin (*)(::Steamworks::ESteamInputType, ::Steamworks::EInputActionOrigin)>(&::Steamworks::SteamInput::TranslateActionOrigin)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805afec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"TranslateActionOrigin", {}, {::i2c::type_of<::Steamworks::ESteamInputType>(), ::i2c::type_of<::Steamworks::EInputActionOrigin>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetDeviceBindingRevision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::InputHandle_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Steamworks::SteamInput::GetDeviceBindingRevision)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805af590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetDeviceBindingRevision", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetRemotePlaySessionID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::InputHandle_t)>(&::Steamworks::SteamInput::GetRemotePlaySessionID)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805af9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetRemotePlaySessionID", {}, {::i2c::type_of<::Steamworks::InputHandle_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamInput.GetSessionInputConfigurationSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)()>(&::Steamworks::SteamInput::GetSessionInputConfigurationSettings)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805afa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetSessionInputConfigurationSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::SteamInput::Init(bool  bExplicitlyCallRunFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"Init", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bExplicitlyCallRunFrame);
}
inline bool Steamworks::SteamInput::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamInput::SetInputActionManifestFilePath(::StringW  pchInputActionManifestAbsolutePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"SetInputActionManifestFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchInputActionManifestAbsolutePath);
}
inline void Steamworks::SteamInput::RunFrame(bool  bReservedValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"RunFrame", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bReservedValue);
}
inline bool Steamworks::SteamInput::BWaitForData(bool  bWaitForever, uint32_t  unTimeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"BWaitForData", {}, {::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bWaitForever, unTimeout);
}
inline bool Steamworks::SteamInput::BNewDataAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"BNewDataAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t Steamworks::SteamInput::GetConnectedControllers(::ArrayW<::Steamworks::InputHandle_t>  handlesOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetConnectedControllers", {}, {::i2c::type_of<::ArrayW<::Steamworks::InputHandle_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handlesOut);
}
inline void Steamworks::SteamInput::EnableDeviceCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"EnableDeviceCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::SteamInput::EnableActionEventCallbacks(::Steamworks::SteamInputActionEventCallbackPointer*  pCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"EnableActionEventCallbacks", {}, {::i2c::type_of<::Steamworks::SteamInputActionEventCallbackPointer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pCallback);
}
inline ::Steamworks::InputActionSetHandle_t Steamworks::SteamInput::GetActionSetHandle(::StringW  pszActionSetName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetActionSetHandle", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::InputActionSetHandle_t>(nullptr, ___internal_method, pszActionSetName);
}
inline void Steamworks::SteamInput::ActivateActionSet(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputActionSetHandle_t  actionSetHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"ActivateActionSet", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputActionSetHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputHandle, actionSetHandle);
}
inline ::Steamworks::InputActionSetHandle_t Steamworks::SteamInput::GetCurrentActionSet(::Steamworks::InputHandle_t  inputHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetCurrentActionSet", {}, {::i2c::type_of<::Steamworks::InputHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::InputActionSetHandle_t>(nullptr, ___internal_method, inputHandle);
}
inline void Steamworks::SteamInput::ActivateActionSetLayer(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputActionSetHandle_t  actionSetLayerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"ActivateActionSetLayer", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputActionSetHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputHandle, actionSetLayerHandle);
}
inline void Steamworks::SteamInput::DeactivateActionSetLayer(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputActionSetHandle_t  actionSetLayerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"DeactivateActionSetLayer", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputActionSetHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputHandle, actionSetLayerHandle);
}
inline void Steamworks::SteamInput::DeactivateAllActionSetLayers(::Steamworks::InputHandle_t  inputHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"DeactivateAllActionSetLayers", {}, {::i2c::type_of<::Steamworks::InputHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputHandle);
}
inline int32_t Steamworks::SteamInput::GetActiveActionSetLayers(::Steamworks::InputHandle_t  inputHandle, ::ArrayW<::Steamworks::InputActionSetHandle_t>  handlesOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetActiveActionSetLayers", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::ArrayW<::Steamworks::InputActionSetHandle_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, inputHandle, handlesOut);
}
inline ::Steamworks::InputDigitalActionHandle_t Steamworks::SteamInput::GetDigitalActionHandle(::StringW  pszActionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetDigitalActionHandle", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::InputDigitalActionHandle_t>(nullptr, ___internal_method, pszActionName);
}
inline ::Steamworks::InputDigitalActionData_t Steamworks::SteamInput::GetDigitalActionData(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputDigitalActionHandle_t  digitalActionHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetDigitalActionData", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputDigitalActionHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::InputDigitalActionData_t>(nullptr, ___internal_method, inputHandle, digitalActionHandle);
}
inline int32_t Steamworks::SteamInput::GetDigitalActionOrigins(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputActionSetHandle_t  actionSetHandle, ::Steamworks::InputDigitalActionHandle_t  digitalActionHandle, ::ArrayW<::Steamworks::EInputActionOrigin>  originsOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetDigitalActionOrigins", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputActionSetHandle_t>(), ::i2c::type_of<::Steamworks::InputDigitalActionHandle_t>(), ::i2c::type_of<::ArrayW<::Steamworks::EInputActionOrigin>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, inputHandle, actionSetHandle, digitalActionHandle, originsOut);
}
inline ::StringW Steamworks::SteamInput::GetStringForDigitalActionName(::Steamworks::InputDigitalActionHandle_t  eActionHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetStringForDigitalActionName", {}, {::i2c::type_of<::Steamworks::InputDigitalActionHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, eActionHandle);
}
inline ::Steamworks::InputAnalogActionHandle_t Steamworks::SteamInput::GetAnalogActionHandle(::StringW  pszActionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetAnalogActionHandle", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::InputAnalogActionHandle_t>(nullptr, ___internal_method, pszActionName);
}
inline ::Steamworks::InputAnalogActionData_t Steamworks::SteamInput::GetAnalogActionData(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputAnalogActionHandle_t  analogActionHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetAnalogActionData", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputAnalogActionHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::InputAnalogActionData_t>(nullptr, ___internal_method, inputHandle, analogActionHandle);
}
inline int32_t Steamworks::SteamInput::GetAnalogActionOrigins(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputActionSetHandle_t  actionSetHandle, ::Steamworks::InputAnalogActionHandle_t  analogActionHandle, ::ArrayW<::Steamworks::EInputActionOrigin>  originsOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetAnalogActionOrigins", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputActionSetHandle_t>(), ::i2c::type_of<::Steamworks::InputAnalogActionHandle_t>(), ::i2c::type_of<::ArrayW<::Steamworks::EInputActionOrigin>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, inputHandle, actionSetHandle, analogActionHandle, originsOut);
}
inline ::StringW Steamworks::SteamInput::GetGlyphPNGForActionOrigin(::Steamworks::EInputActionOrigin  eOrigin, ::Steamworks::ESteamInputGlyphSize  eSize, uint32_t  unFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetGlyphPNGForActionOrigin", {}, {::i2c::type_of<::Steamworks::EInputActionOrigin>(), ::i2c::type_of<::Steamworks::ESteamInputGlyphSize>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, eOrigin, eSize, unFlags);
}
inline ::StringW Steamworks::SteamInput::GetGlyphSVGForActionOrigin(::Steamworks::EInputActionOrigin  eOrigin, uint32_t  unFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetGlyphSVGForActionOrigin", {}, {::i2c::type_of<::Steamworks::EInputActionOrigin>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, eOrigin, unFlags);
}
inline ::StringW Steamworks::SteamInput::GetGlyphForActionOrigin_Legacy(::Steamworks::EInputActionOrigin  eOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetGlyphForActionOrigin_Legacy", {}, {::i2c::type_of<::Steamworks::EInputActionOrigin>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, eOrigin);
}
inline ::StringW Steamworks::SteamInput::GetStringForActionOrigin(::Steamworks::EInputActionOrigin  eOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetStringForActionOrigin", {}, {::i2c::type_of<::Steamworks::EInputActionOrigin>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, eOrigin);
}
inline ::StringW Steamworks::SteamInput::GetStringForAnalogActionName(::Steamworks::InputAnalogActionHandle_t  eActionHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetStringForAnalogActionName", {}, {::i2c::type_of<::Steamworks::InputAnalogActionHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, eActionHandle);
}
inline void Steamworks::SteamInput::StopAnalogActionMomentum(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputAnalogActionHandle_t  eAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"StopAnalogActionMomentum", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::InputAnalogActionHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputHandle, eAction);
}
inline ::Steamworks::InputMotionData_t Steamworks::SteamInput::GetMotionData(::Steamworks::InputHandle_t  inputHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetMotionData", {}, {::i2c::type_of<::Steamworks::InputHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::InputMotionData_t>(nullptr, ___internal_method, inputHandle);
}
inline void Steamworks::SteamInput::TriggerVibration(::Steamworks::InputHandle_t  inputHandle, uint16_t  usLeftSpeed, uint16_t  usRightSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"TriggerVibration", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputHandle, usLeftSpeed, usRightSpeed);
}
inline void Steamworks::SteamInput::TriggerVibrationExtended(::Steamworks::InputHandle_t  inputHandle, uint16_t  usLeftSpeed, uint16_t  usRightSpeed, uint16_t  usLeftTriggerSpeed, uint16_t  usRightTriggerSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"TriggerVibrationExtended", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputHandle, usLeftSpeed, usRightSpeed, usLeftTriggerSpeed, usRightTriggerSpeed);
}
inline void Steamworks::SteamInput::TriggerSimpleHapticEvent(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::EControllerHapticLocation  eHapticLocation, uint8_t  nIntensity, char16_t  nGainDB, uint8_t  nOtherIntensity, char16_t  nOtherGainDB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"TriggerSimpleHapticEvent", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::EControllerHapticLocation>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputHandle, eHapticLocation, nIntensity, nGainDB, nOtherIntensity, nOtherGainDB);
}
inline void Steamworks::SteamInput::SetLEDColor(::Steamworks::InputHandle_t  inputHandle, uint8_t  nColorR, uint8_t  nColorG, uint8_t  nColorB, uint32_t  nFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"SetLEDColor", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputHandle, nColorR, nColorG, nColorB, nFlags);
}
inline void Steamworks::SteamInput::Legacy_TriggerHapticPulse(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::ESteamControllerPad  eTargetPad, uint16_t  usDurationMicroSec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"Legacy_TriggerHapticPulse", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::ESteamControllerPad>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputHandle, eTargetPad, usDurationMicroSec);
}
inline void Steamworks::SteamInput::Legacy_TriggerRepeatedHapticPulse(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::ESteamControllerPad  eTargetPad, uint16_t  usDurationMicroSec, uint16_t  usOffMicroSec, uint16_t  unRepeat, uint32_t  nFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"Legacy_TriggerRepeatedHapticPulse", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::ESteamControllerPad>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}
inline bool Steamworks::SteamInput::ShowBindingPanel(::Steamworks::InputHandle_t  inputHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"ShowBindingPanel", {}, {::i2c::type_of<::Steamworks::InputHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, inputHandle);
}
inline ::Steamworks::ESteamInputType Steamworks::SteamInput::GetInputTypeForHandle(::Steamworks::InputHandle_t  inputHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetInputTypeForHandle", {}, {::i2c::type_of<::Steamworks::InputHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamInputType>(nullptr, ___internal_method, inputHandle);
}
inline ::Steamworks::InputHandle_t Steamworks::SteamInput::GetControllerForGamepadIndex(int32_t  nIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetControllerForGamepadIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::InputHandle_t>(nullptr, ___internal_method, nIndex);
}
inline int32_t Steamworks::SteamInput::GetGamepadIndexForController(::Steamworks::InputHandle_t  ulinputHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetGamepadIndexForController", {}, {::i2c::type_of<::Steamworks::InputHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ulinputHandle);
}
inline ::StringW Steamworks::SteamInput::GetStringForXboxOrigin(::Steamworks::EXboxOrigin  eOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetStringForXboxOrigin", {}, {::i2c::type_of<::Steamworks::EXboxOrigin>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, eOrigin);
}
inline ::StringW Steamworks::SteamInput::GetGlyphForXboxOrigin(::Steamworks::EXboxOrigin  eOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetGlyphForXboxOrigin", {}, {::i2c::type_of<::Steamworks::EXboxOrigin>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, eOrigin);
}
inline ::Steamworks::EInputActionOrigin Steamworks::SteamInput::GetActionOriginFromXboxOrigin(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::EXboxOrigin  eOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetActionOriginFromXboxOrigin", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::Steamworks::EXboxOrigin>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EInputActionOrigin>(nullptr, ___internal_method, inputHandle, eOrigin);
}
inline ::Steamworks::EInputActionOrigin Steamworks::SteamInput::TranslateActionOrigin(::Steamworks::ESteamInputType  eDestinationInputType, ::Steamworks::EInputActionOrigin  eSourceOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"TranslateActionOrigin", {}, {::i2c::type_of<::Steamworks::ESteamInputType>(), ::i2c::type_of<::Steamworks::EInputActionOrigin>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EInputActionOrigin>(nullptr, ___internal_method, eDestinationInputType, eSourceOrigin);
}
inline bool Steamworks::SteamInput::GetDeviceBindingRevision(::Steamworks::InputHandle_t  inputHandle, ::by_ref<int32_t>  pMajor, ::by_ref<int32_t>  pMinor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetDeviceBindingRevision", {}, {::i2c::type_of<::Steamworks::InputHandle_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, inputHandle, pMajor, pMinor);
}
inline uint32_t Steamworks::SteamInput::GetRemotePlaySessionID(::Steamworks::InputHandle_t  inputHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetRemotePlaySessionID", {}, {::i2c::type_of<::Steamworks::InputHandle_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, inputHandle);
}
inline uint16_t Steamworks::SteamInput::GetSessionInputConfigurationSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamInput*>(),
                        {"GetSessionInputConfigurationSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamInput::SteamInput()   {
}
