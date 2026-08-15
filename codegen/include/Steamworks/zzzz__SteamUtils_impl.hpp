#pragma once
// IWYU pragma private; include "Steamworks/SteamUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamUtils_def.hpp"
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
//  Writing Method size for method: ::Steamworks::SteamUtils.GetSecondsSinceAppActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamUtils::GetSecondsSinceAppActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c0490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetSecondsSinceAppActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.GetSecondsSinceComputerActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamUtils::GetSecondsSinceComputerActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c04c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetSecondsSinceComputerActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.GetConnectedUniverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EUniverse (*)()>(&::Steamworks::SteamUtils::GetConnectedUniverse)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c0210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetConnectedUniverse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.GetServerRealTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamUtils::GetServerRealTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c04f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetServerRealTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.GetIPCountry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Steamworks::SteamUtils::GetIPCountry)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c0360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetIPCountry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.GetImageSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::Steamworks::SteamUtils::GetImageSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805c0430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetImageSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.GetImageRGBA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Steamworks::SteamUtils::GetImageRGBA)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805c03d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetImageRGBA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.GetCurrentBatteryPower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)()>(&::Steamworks::SteamUtils::GetCurrentBatteryPower)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c0240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetCurrentBatteryPower", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.GetAppID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::AppId_t (*)()>(&::Steamworks::SteamUtils::GetAppID)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c01e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetAppID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.SetOverlayNotificationPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::ENotificationPosition)>(&::Steamworks::SteamUtils::SetOverlayNotificationPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c0780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"SetOverlayNotificationPosition", {}, {::i2c::type_of<::Steamworks::ENotificationPosition>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.IsAPICallCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamAPICall_t, ::by_ref<bool>)>(&::Steamworks::SteamUtils::IsAPICallCompleted)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805c0590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"IsAPICallCompleted", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.GetAPICallFailureReason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamAPICallFailure (*)(::Steamworks::SteamAPICall_t)>(&::Steamworks::SteamUtils::GetAPICallFailureReason)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c0120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetAPICallFailureReason", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.GetAPICallResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SteamAPICall_t, ::System::IntPtr, int32_t, int32_t, ::by_ref<bool>)>(&::Steamworks::SteamUtils::GetAPICallResult)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c0160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetAPICallResult", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.GetIPCCallCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamUtils::GetIPCCallCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c0330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetIPCCallCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.SetWarningMessageHook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::SteamAPIWarningMessageHook_t*)>(&::Steamworks::SteamUtils::SetWarningMessageHook)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c07f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"SetWarningMessageHook", {}, {::i2c::type_of<::Steamworks::SteamAPIWarningMessageHook_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.IsOverlayEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUtils::IsOverlayEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c05e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"IsOverlayEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.BOverlayNeedsPresent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUtils::BOverlayNeedsPresent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bfe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"BOverlayNeedsPresent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.CheckFileSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamAPICall_t (*)(::StringW)>(&::Steamworks::SteamUtils::CheckFileSignature)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805bfec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"CheckFileSignature", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.ShowGamepadTextInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::EGamepadTextInputMode, ::Steamworks::EGamepadTextInputLineMode, ::StringW, uint32_t, ::StringW)>(&::Steamworks::SteamUtils::ShowGamepadTextInput)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805c08a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"ShowGamepadTextInput", {}, {::i2c::type_of<::Steamworks::EGamepadTextInputMode>(), ::i2c::type_of<::Steamworks::EGamepadTextInputLineMode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.GetEnteredGamepadTextLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamUtils::GetEnteredGamepadTextLength)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c0300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetEnteredGamepadTextLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.GetEnteredGamepadTextInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamUtils::GetEnteredGamepadTextInput)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805c0270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetEnteredGamepadTextInput", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.GetSteamUILanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Steamworks::SteamUtils::GetSteamUILanguage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c0520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetSteamUILanguage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.IsSteamRunningInVR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUtils::IsSteamRunningInVR)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c0670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"IsSteamRunningInVR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.SetOverlayNotificationInset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::Steamworks::SteamUtils::SetOverlayNotificationInset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c0740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"SetOverlayNotificationInset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.IsSteamInBigPictureMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUtils::IsSteamInBigPictureMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c0640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"IsSteamInBigPictureMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.StartVRDashboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamUtils::StartVRDashboard)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c0a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"StartVRDashboard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.IsVRHeadsetStreamingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUtils::IsVRHeadsetStreamingEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c06d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"IsVRHeadsetStreamingEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.SetVRHeadsetStreamingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Steamworks::SteamUtils::SetVRHeadsetStreamingEnabled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c07b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"SetVRHeadsetStreamingEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.IsSteamChinaLauncher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUtils::IsSteamChinaLauncher)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c0610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"IsSteamChinaLauncher", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.InitFilterText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::Steamworks::SteamUtils::InitFilterText)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c0560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"InitFilterText", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.FilterText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::ETextFilteringContext, ::Steamworks::CSteamID, ::StringW, ::by_ref<::StringW>, uint32_t)>(&::Steamworks::SteamUtils::FilterText)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805bffd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"FilterText", {}, {::i2c::type_of<::Steamworks::ETextFilteringContext>(), ::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.GetIPv6ConnectivityState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamIPv6ConnectivityState (*)(::Steamworks::ESteamIPv6ConnectivityProtocol)>(&::Steamworks::SteamUtils::GetIPv6ConnectivityState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c03a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetIPv6ConnectivityState", {}, {::i2c::type_of<::Steamworks::ESteamIPv6ConnectivityProtocol>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.IsSteamRunningOnSteamDeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUtils::IsSteamRunningOnSteamDeck)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c06a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"IsSteamRunningOnSteamDeck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.ShowFloatingGamepadTextInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::EFloatingGamepadTextInputMode, int32_t, int32_t, int32_t, int32_t)>(&::Steamworks::SteamUtils::ShowFloatingGamepadTextInput)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805c0830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"ShowFloatingGamepadTextInput", {}, {::i2c::type_of<::Steamworks::EFloatingGamepadTextInputMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.SetGameLauncherMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Steamworks::SteamUtils::SetGameLauncherMode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c0700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"SetGameLauncherMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUtils.DismissFloatingGamepadTextInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamUtils::DismissFloatingGamepadTextInput)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805bffa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"DismissFloatingGamepadTextInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Steamworks::SteamUtils::GetSecondsSinceAppActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetSecondsSinceAppActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline uint32_t Steamworks::SteamUtils::GetSecondsSinceComputerActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetSecondsSinceComputerActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline ::Steamworks::EUniverse Steamworks::SteamUtils::GetConnectedUniverse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetConnectedUniverse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EUniverse>(nullptr, ___internal_method);
}
inline uint32_t Steamworks::SteamUtils::GetServerRealTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetServerRealTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline ::StringW Steamworks::SteamUtils::GetIPCountry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetIPCountry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamUtils::GetImageSize(int32_t  iImage, ::by_ref<uint32_t>  pnWidth, ::by_ref<uint32_t>  pnHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetImageSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, iImage, pnWidth, pnHeight);
}
inline bool Steamworks::SteamUtils::GetImageRGBA(int32_t  iImage, ::ArrayW<uint8_t>  pubDest, int32_t  nDestBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetImageRGBA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, iImage, pubDest, nDestBufferSize);
}
inline uint8_t Steamworks::SteamUtils::GetCurrentBatteryPower()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetCurrentBatteryPower", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method);
}
inline ::Steamworks::AppId_t Steamworks::SteamUtils::GetAppID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetAppID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::AppId_t>(nullptr, ___internal_method);
}
inline void Steamworks::SteamUtils::SetOverlayNotificationPosition(::Steamworks::ENotificationPosition  eNotificationPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"SetOverlayNotificationPosition", {}, {::i2c::type_of<::Steamworks::ENotificationPosition>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eNotificationPosition);
}
inline bool Steamworks::SteamUtils::IsAPICallCompleted(::Steamworks::SteamAPICall_t  hSteamAPICall, ::by_ref<bool>  pbFailed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"IsAPICallCompleted", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSteamAPICall, pbFailed);
}
inline ::Steamworks::ESteamAPICallFailure Steamworks::SteamUtils::GetAPICallFailureReason(::Steamworks::SteamAPICall_t  hSteamAPICall)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetAPICallFailureReason", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamAPICallFailure>(nullptr, ___internal_method, hSteamAPICall);
}
inline bool Steamworks::SteamUtils::GetAPICallResult(::Steamworks::SteamAPICall_t  hSteamAPICall, ::System::IntPtr  pCallback, int32_t  cubCallback, int32_t  iCallbackExpected, ::by_ref<bool>  pbFailed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetAPICallResult", {}, {::i2c::type_of<::Steamworks::SteamAPICall_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
}
inline uint32_t Steamworks::SteamUtils::GetIPCCallCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetIPCCallCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline void Steamworks::SteamUtils::SetWarningMessageHook(::Steamworks::SteamAPIWarningMessageHook_t*  pFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"SetWarningMessageHook", {}, {::i2c::type_of<::Steamworks::SteamAPIWarningMessageHook_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pFunction);
}
inline bool Steamworks::SteamUtils::IsOverlayEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"IsOverlayEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamUtils::BOverlayNeedsPresent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"BOverlayNeedsPresent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Steamworks::SteamAPICall_t Steamworks::SteamUtils::CheckFileSignature(::StringW  szFileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"CheckFileSignature", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamAPICall_t>(nullptr, ___internal_method, szFileName);
}
inline bool Steamworks::SteamUtils::ShowGamepadTextInput(::Steamworks::EGamepadTextInputMode  eInputMode, ::Steamworks::EGamepadTextInputLineMode  eLineInputMode, ::StringW  pchDescription, uint32_t  unCharMax, ::StringW  pchExistingText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"ShowGamepadTextInput", {}, {::i2c::type_of<::Steamworks::EGamepadTextInputMode>(), ::i2c::type_of<::Steamworks::EGamepadTextInputLineMode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText);
}
inline uint32_t Steamworks::SteamUtils::GetEnteredGamepadTextLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetEnteredGamepadTextLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamUtils::GetEnteredGamepadTextInput(::by_ref<::StringW>  pchText, uint32_t  cchText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetEnteredGamepadTextInput", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchText, cchText);
}
inline ::StringW Steamworks::SteamUtils::GetSteamUILanguage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetSteamUILanguage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamUtils::IsSteamRunningInVR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"IsSteamRunningInVR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Steamworks::SteamUtils::SetOverlayNotificationInset(int32_t  nHorizontalInset, int32_t  nVerticalInset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"SetOverlayNotificationInset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nHorizontalInset, nVerticalInset);
}
inline bool Steamworks::SteamUtils::IsSteamInBigPictureMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"IsSteamInBigPictureMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Steamworks::SteamUtils::StartVRDashboard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"StartVRDashboard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamUtils::IsVRHeadsetStreamingEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"IsVRHeadsetStreamingEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Steamworks::SteamUtils::SetVRHeadsetStreamingEnabled(bool  bEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"SetVRHeadsetStreamingEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bEnabled);
}
inline bool Steamworks::SteamUtils::IsSteamChinaLauncher()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"IsSteamChinaLauncher", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamUtils::InitFilterText(uint32_t  unFilterOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"InitFilterText", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unFilterOptions);
}
inline int32_t Steamworks::SteamUtils::FilterText(::Steamworks::ETextFilteringContext  eContext, ::Steamworks::CSteamID  sourceSteamID, ::StringW  pchInputMessage, ::by_ref<::StringW>  pchOutFilteredText, uint32_t  nByteSizeOutFilteredText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"FilterText", {}, {::i2c::type_of<::Steamworks::ETextFilteringContext>(), ::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, eContext, sourceSteamID, pchInputMessage, pchOutFilteredText, nByteSizeOutFilteredText);
}
inline ::Steamworks::ESteamIPv6ConnectivityState Steamworks::SteamUtils::GetIPv6ConnectivityState(::Steamworks::ESteamIPv6ConnectivityProtocol  eProtocol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"GetIPv6ConnectivityState", {}, {::i2c::type_of<::Steamworks::ESteamIPv6ConnectivityProtocol>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamIPv6ConnectivityState>(nullptr, ___internal_method, eProtocol);
}
inline bool Steamworks::SteamUtils::IsSteamRunningOnSteamDeck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"IsSteamRunningOnSteamDeck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamUtils::ShowFloatingGamepadTextInput(::Steamworks::EFloatingGamepadTextInputMode  eKeyboardMode, int32_t  nTextFieldXPosition, int32_t  nTextFieldYPosition, int32_t  nTextFieldWidth, int32_t  nTextFieldHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"ShowFloatingGamepadTextInput", {}, {::i2c::type_of<::Steamworks::EFloatingGamepadTextInputMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eKeyboardMode, nTextFieldXPosition, nTextFieldYPosition, nTextFieldWidth, nTextFieldHeight);
}
inline void Steamworks::SteamUtils::SetGameLauncherMode(bool  bLauncherMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"SetGameLauncherMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bLauncherMode);
}
inline bool Steamworks::SteamUtils::DismissFloatingGamepadTextInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUtils*>(),
                        {"DismissFloatingGamepadTextInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamUtils::SteamUtils()   {
}
