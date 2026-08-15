#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamGameServerUtils_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EFloatingGamepadTextInputMode_def.hpp"
#include "Steamworks/zzzz__EGamepadTextInputLineMode_def.hpp"
#include "Steamworks/zzzz__EGamepadTextInputMode_def.hpp"
#include "Steamworks/zzzz__ENotificationPosition_def.hpp"
#include "Steamworks/zzzz__ESteamAPICallFailure_def.hpp"
#include "Steamworks/zzzz__ESteamIPv6ConnectivityProtocol_def.hpp"
#include "Steamworks/zzzz__ESteamIPv6ConnectivityState_def.hpp"
#include "Steamworks/zzzz__ETextFilteringContext_def.hpp"
#include "Steamworks/zzzz__EUniverse_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
#include "Steamworks/zzzz__SteamAPIWarningMessageHook_t_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetSecondsSinceAppActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamGameServerUtils::GetSecondsSinceAppActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetSecondsSinceAppActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetSecondsSinceComputerActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamGameServerUtils::GetSecondsSinceComputerActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetSecondsSinceComputerActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetConnectedUniverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EUniverse (*)()>(&::Steamworks::SteamGameServerUtils::GetConnectedUniverse)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetConnectedUniverse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetServerRealTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamGameServerUtils::GetServerRealTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetServerRealTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetIPCountry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Steamworks::SteamGameServerUtils::GetIPCountry)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ac380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetIPCountry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetImageSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::Steamworks::SteamGameServerUtils::GetImageSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805ac450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetImageSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetImageRGBA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Steamworks::SteamGameServerUtils::GetImageRGBA)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805ac3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetImageRGBA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetCurrentBatteryPower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)()>(&::Steamworks::SteamGameServerUtils::GetCurrentBatteryPower)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetCurrentBatteryPower", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetAppID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::AppId_t (*)()>(&::Steamworks::SteamGameServerUtils::GetAppID)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetAppID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.SetOverlayNotificationPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::ENotificationPosition)>(&::Steamworks::SteamGameServerUtils::SetOverlayNotificationPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"SetOverlayNotificationPosition", {}, {::i2c::type_of<::Steamworks::ENotificationPosition>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.IsAPICallCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamAPICall_t, ::by_ref<bool>)>(&::Steamworks::SteamGameServerUtils::IsAPICallCompleted)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ac5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"IsAPICallCompleted", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetAPICallFailureReason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamAPICallFailure (*)(::Steamworks::SteamAPICall_t)>(&::Steamworks::SteamGameServerUtils::GetAPICallFailureReason)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ac140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetAPICallFailureReason", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetAPICallResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamAPICall_t, ::System::IntPtr, int32_t, int32_t, ::by_ref<bool>)>(&::Steamworks::SteamGameServerUtils::GetAPICallResult)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805ac180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetAPICallResult", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetIPCCallCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamGameServerUtils::GetIPCCallCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetIPCCallCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.SetWarningMessageHook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::SteamAPIWarningMessageHook_t*)>(&::Steamworks::SteamGameServerUtils::SetWarningMessageHook)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ac810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"SetWarningMessageHook", {}, {::i2c::type_of<::Steamworks::SteamAPIWarningMessageHook_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.IsOverlayEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamGameServerUtils::IsOverlayEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"IsOverlayEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.BOverlayNeedsPresent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamGameServerUtils::BOverlayNeedsPresent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805abeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"BOverlayNeedsPresent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.CheckFileSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::StringW)>(&::Steamworks::SteamGameServerUtils::CheckFileSignature)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805abee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"CheckFileSignature", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.ShowGamepadTextInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::EGamepadTextInputMode, ::Steamworks::EGamepadTextInputLineMode, ::StringW, uint32_t, ::StringW)>(&::Steamworks::SteamGameServerUtils::ShowGamepadTextInput)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805ac8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"ShowGamepadTextInput", {}, {::i2c::type_of<::Steamworks::EGamepadTextInputMode>(), ::i2c::type_of<::Steamworks::EGamepadTextInputLineMode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetEnteredGamepadTextLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamGameServerUtils::GetEnteredGamepadTextLength)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetEnteredGamepadTextLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetEnteredGamepadTextInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamGameServerUtils::GetEnteredGamepadTextInput)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805ac290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetEnteredGamepadTextInput", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetSteamUILanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Steamworks::SteamGameServerUtils::GetSteamUILanguage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ac540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetSteamUILanguage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.IsSteamRunningInVR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamGameServerUtils::IsSteamRunningInVR)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"IsSteamRunningInVR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.SetOverlayNotificationInset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::Steamworks::SteamGameServerUtils::SetOverlayNotificationInset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ac760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"SetOverlayNotificationInset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.IsSteamInBigPictureMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamGameServerUtils::IsSteamInBigPictureMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"IsSteamInBigPictureMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.StartVRDashboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamGameServerUtils::StartVRDashboard)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805aca50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"StartVRDashboard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.IsVRHeadsetStreamingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamGameServerUtils::IsVRHeadsetStreamingEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"IsVRHeadsetStreamingEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.SetVRHeadsetStreamingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Steamworks::SteamGameServerUtils::SetVRHeadsetStreamingEnabled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ac7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"SetVRHeadsetStreamingEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.IsSteamChinaLauncher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamGameServerUtils::IsSteamChinaLauncher)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"IsSteamChinaLauncher", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.InitFilterText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::Steamworks::SteamGameServerUtils::InitFilterText)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"InitFilterText", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.FilterText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::ETextFilteringContext, ::Steamworks::CSteamID, ::StringW, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamGameServerUtils::FilterText)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805abff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"FilterText", {}, {::i2c::type_of<::Steamworks::ETextFilteringContext>(), ::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.GetIPv6ConnectivityState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamIPv6ConnectivityState (*)(::Steamworks::ESteamIPv6ConnectivityProtocol)>(&::Steamworks::SteamGameServerUtils::GetIPv6ConnectivityState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetIPv6ConnectivityState", {}, {::i2c::type_of<::Steamworks::ESteamIPv6ConnectivityProtocol>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.IsSteamRunningOnSteamDeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamGameServerUtils::IsSteamRunningOnSteamDeck)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ac6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"IsSteamRunningOnSteamDeck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.ShowFloatingGamepadTextInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::EFloatingGamepadTextInputMode, int32_t, int32_t, int32_t, int32_t)>(&::Steamworks::SteamGameServerUtils::ShowFloatingGamepadTextInput)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805ac850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"ShowFloatingGamepadTextInput", {}, {::i2c::type_of<::Steamworks::EFloatingGamepadTextInputMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.SetGameLauncherMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Steamworks::SteamGameServerUtils::SetGameLauncherMode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ac720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"SetGameLauncherMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerUtils.DismissFloatingGamepadTextInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamGameServerUtils::DismissFloatingGamepadTextInput)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805abfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"DismissFloatingGamepadTextInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Steamworks::SteamGameServerUtils::GetSecondsSinceAppActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetSecondsSinceAppActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline uint32_t Steamworks::SteamGameServerUtils::GetSecondsSinceComputerActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetSecondsSinceComputerActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline ::Steamworks::EUniverse Steamworks::SteamGameServerUtils::GetConnectedUniverse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetConnectedUniverse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EUniverse>(nullptr, ___internal_method);
}
inline uint32_t Steamworks::SteamGameServerUtils::GetServerRealTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetServerRealTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline ::StringW Steamworks::SteamGameServerUtils::GetIPCountry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetIPCountry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServerUtils::GetImageSize(int32_t  iImage, ::by_ref<uint32_t>  pnWidth, ::by_ref<uint32_t>  pnHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetImageSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, iImage, pnWidth, pnHeight);
}
inline bool Steamworks::SteamGameServerUtils::GetImageRGBA(int32_t  iImage, ::ArrayW<uint8_t>  pubDest, int32_t  nDestBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetImageRGBA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, iImage, pubDest, nDestBufferSize);
}
inline uint8_t Steamworks::SteamGameServerUtils::GetCurrentBatteryPower()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetCurrentBatteryPower", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method);
}
inline ::Steamworks::AppId_t Steamworks::SteamGameServerUtils::GetAppID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetAppID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::AppId_t>(nullptr, ___internal_method);
}
inline void Steamworks::SteamGameServerUtils::SetOverlayNotificationPosition(::Steamworks::ENotificationPosition  eNotificationPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"SetOverlayNotificationPosition", {}, {::i2c::type_of<::Steamworks::ENotificationPosition>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eNotificationPosition);
}
inline bool Steamworks::SteamGameServerUtils::IsAPICallCompleted(::Steamworks::SteamAPICall_t  hSteamAPICall, ::by_ref<bool>  pbFailed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"IsAPICallCompleted", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSteamAPICall, pbFailed);
}
inline ::Steamworks::ESteamAPICallFailure Steamworks::SteamGameServerUtils::GetAPICallFailureReason(::Steamworks::SteamAPICall_t  hSteamAPICall)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetAPICallFailureReason", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamAPICallFailure>(nullptr, ___internal_method, hSteamAPICall);
}
inline bool Steamworks::SteamGameServerUtils::GetAPICallResult(::Steamworks::SteamAPICall_t  hSteamAPICall, ::System::IntPtr  pCallback, int32_t  cubCallback, int32_t  iCallbackExpected, ::by_ref<bool>  pbFailed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetAPICallResult", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
}
inline uint32_t Steamworks::SteamGameServerUtils::GetIPCCallCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetIPCCallCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline void Steamworks::SteamGameServerUtils::SetWarningMessageHook(::Steamworks::SteamAPIWarningMessageHook_t*  pFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"SetWarningMessageHook", {}, {::i2c::type_of<::Steamworks::SteamAPIWarningMessageHook_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pFunction);
}
inline bool Steamworks::SteamGameServerUtils::IsOverlayEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"IsOverlayEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServerUtils::BOverlayNeedsPresent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"BOverlayNeedsPresent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamGameServerUtils::CheckFileSignature(::StringW  szFileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"CheckFileSignature", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, szFileName);
}
inline bool Steamworks::SteamGameServerUtils::ShowGamepadTextInput(::Steamworks::EGamepadTextInputMode  eInputMode, ::Steamworks::EGamepadTextInputLineMode  eLineInputMode, ::StringW  pchDescription, uint32_t  unCharMax, ::StringW  pchExistingText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"ShowGamepadTextInput", {}, {::i2c::type_of<::Steamworks::EGamepadTextInputMode>(), ::i2c::type_of<::Steamworks::EGamepadTextInputLineMode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText);
}
inline uint32_t Steamworks::SteamGameServerUtils::GetEnteredGamepadTextLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetEnteredGamepadTextLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServerUtils::GetEnteredGamepadTextInput(::by_ref<::StringW>  pchText, uint32_t  cchText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetEnteredGamepadTextInput", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchText, cchText);
}
inline ::StringW Steamworks::SteamGameServerUtils::GetSteamUILanguage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetSteamUILanguage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServerUtils::IsSteamRunningInVR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"IsSteamRunningInVR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Steamworks::SteamGameServerUtils::SetOverlayNotificationInset(int32_t  nHorizontalInset, int32_t  nVerticalInset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"SetOverlayNotificationInset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nHorizontalInset, nVerticalInset);
}
inline bool Steamworks::SteamGameServerUtils::IsSteamInBigPictureMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"IsSteamInBigPictureMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Steamworks::SteamGameServerUtils::StartVRDashboard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"StartVRDashboard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServerUtils::IsVRHeadsetStreamingEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"IsVRHeadsetStreamingEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Steamworks::SteamGameServerUtils::SetVRHeadsetStreamingEnabled(bool  bEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"SetVRHeadsetStreamingEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bEnabled);
}
inline bool Steamworks::SteamGameServerUtils::IsSteamChinaLauncher()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"IsSteamChinaLauncher", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServerUtils::InitFilterText(uint32_t  unFilterOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"InitFilterText", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unFilterOptions);
}
inline int32_t Steamworks::SteamGameServerUtils::FilterText(::Steamworks::ETextFilteringContext  eContext, ::Steamworks::CSteamID  sourceSteamID, ::StringW  pchInputMessage, ::by_ref<::StringW>  pchOutFilteredText, uint32_t  nByteSizeOutFilteredText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"FilterText", {}, {::i2c::type_of<::Steamworks::ETextFilteringContext>(), ::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, eContext, sourceSteamID, pchInputMessage, pchOutFilteredText, nByteSizeOutFilteredText);
}
inline ::Steamworks::ESteamIPv6ConnectivityState Steamworks::SteamGameServerUtils::GetIPv6ConnectivityState(::Steamworks::ESteamIPv6ConnectivityProtocol  eProtocol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"GetIPv6ConnectivityState", {}, {::i2c::type_of<::Steamworks::ESteamIPv6ConnectivityProtocol>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamIPv6ConnectivityState>(nullptr, ___internal_method, eProtocol);
}
inline bool Steamworks::SteamGameServerUtils::IsSteamRunningOnSteamDeck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"IsSteamRunningOnSteamDeck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServerUtils::ShowFloatingGamepadTextInput(::Steamworks::EFloatingGamepadTextInputMode  eKeyboardMode, int32_t  nTextFieldXPosition, int32_t  nTextFieldYPosition, int32_t  nTextFieldWidth, int32_t  nTextFieldHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"ShowFloatingGamepadTextInput", {}, {::i2c::type_of<::Steamworks::EFloatingGamepadTextInputMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eKeyboardMode, nTextFieldXPosition, nTextFieldYPosition, nTextFieldWidth, nTextFieldHeight);
}
inline void Steamworks::SteamGameServerUtils::SetGameLauncherMode(bool  bLauncherMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"SetGameLauncherMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bLauncherMode);
}
inline bool Steamworks::SteamGameServerUtils::DismissFloatingGamepadTextInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerUtils*>(),
                        {"DismissFloatingGamepadTextInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamGameServerUtils::SteamGameServerUtils()   {
}
