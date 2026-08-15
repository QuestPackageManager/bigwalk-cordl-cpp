#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/UIInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__UIInterface_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__AcknowledgeEventIdOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__AddNotifyDisplaySettingsUpdatedOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__AddNotifyMemoryMonitorOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__AddNotifyOnScreenKeyboardRequestedOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__ConfigureOnScreenKeyboardOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__GetFriendsExclusiveInputOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__GetFriendsVisibleOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__GetToggleFriendsButtonOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__GetToggleFriendsKeyOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__HideFriendsOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__IsSocialOverlayPausedOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__KeyCombination_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__NotificationLocation_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnDisplaySettingsUpdatedCallback_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnHideFriendsCallback_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnMemoryMonitorCallback_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardRequestedCallback_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnShowBlockPlayerCallback_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnShowFriendsCallback_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnShowNativeProfileCallback_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnShowReportPlayerCallback_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__PauseSocialOverlayOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__PrePresentOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__ReportInputStateOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__SetDisplayPreferenceOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__SetToggleFriendsButtonOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__SetToggleFriendsKeyOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__ShowBlockPlayerOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__ShowFriendsOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__ShowNativeProfileOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__ShowReportPlayerOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::UIInterface::*)()>(&::Epic::OnlineServices::UI::UIInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::UIInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::UI::UIInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.AcknowledgeEventId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>)>(&::Epic::OnlineServices::UI::UIInterface::AcknowledgeEventId)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804e28b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"AcknowledgeEventId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.AddNotifyDisplaySettingsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::AddNotifyDisplaySettingsUpdatedOptions>, ::System::Object*, ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback*)>(&::Epic::OnlineServices::UI::UIInterface::AddNotifyDisplaySettingsUpdated)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1804e2960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"AddNotifyDisplaySettingsUpdated", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::AddNotifyDisplaySettingsUpdatedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.AddNotifyMemoryMonitor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::AddNotifyMemoryMonitorOptions>, ::System::Object*, ::Epic::OnlineServices::UI::OnMemoryMonitorCallback*)>(&::Epic::OnlineServices::UI::UIInterface::AddNotifyMemoryMonitor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1804e2bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"AddNotifyMemoryMonitor", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::AddNotifyMemoryMonitorOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.AddNotifyOnScreenKeyboardRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::AddNotifyOnScreenKeyboardRequestedOptions>, ::System::Object*, ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*)>(&::Epic::OnlineServices::UI::UIInterface::AddNotifyOnScreenKeyboardRequested)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1804e2e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"AddNotifyOnScreenKeyboardRequested", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::AddNotifyOnScreenKeyboardRequestedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.ConfigureOnScreenKeyboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>)>(&::Epic::OnlineServices::UI::UIInterface::ConfigureOnScreenKeyboard)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804e3080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"ConfigureOnScreenKeyboard", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.GetFriendsExclusiveInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::GetFriendsExclusiveInputOptions>)>(&::Epic::OnlineServices::UI::UIInterface::GetFriendsExclusiveInput)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804e3130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"GetFriendsExclusiveInput", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::GetFriendsExclusiveInputOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.GetFriendsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::GetFriendsVisibleOptions>)>(&::Epic::OnlineServices::UI::UIInterface::GetFriendsVisible)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804e3220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"GetFriendsVisible", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::GetFriendsVisibleOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.GetNotificationLocationPreference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::NotificationLocation (::Epic::OnlineServices::UI::UIInterface::*)()>(&::Epic::OnlineServices::UI::UIInterface::GetNotificationLocationPreference)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804e3310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"GetNotificationLocationPreference", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.GetToggleFriendsButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::InputStateButtonFlags (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::GetToggleFriendsButtonOptions>)>(&::Epic::OnlineServices::UI::UIInterface::GetToggleFriendsButton)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804e3390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"GetToggleFriendsButton", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::GetToggleFriendsButtonOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.GetToggleFriendsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::KeyCombination (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::GetToggleFriendsKeyOptions>)>(&::Epic::OnlineServices::UI::UIInterface::GetToggleFriendsKey)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804e3430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"GetToggleFriendsKey", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::GetToggleFriendsKeyOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.HideFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::HideFriendsOptions>, ::System::Object*, ::Epic::OnlineServices::UI::OnHideFriendsCallback*)>(&::Epic::OnlineServices::UI::UIInterface::HideFriends)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1804e34d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"HideFriends", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::HideFriendsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnHideFriendsCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.IsSocialOverlayPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::IsSocialOverlayPausedOptions>)>(&::Epic::OnlineServices::UI::UIInterface::IsSocialOverlayPaused)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804e3760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"IsSocialOverlayPaused", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::IsSocialOverlayPausedOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.IsValidButtonCombination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::UI::UIInterface::*)(::Epic::OnlineServices::UI::InputStateButtonFlags)>(&::Epic::OnlineServices::UI::UIInterface::IsValidButtonCombination)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804e3800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"IsValidButtonCombination", {}, {::i2c::type_of<::Epic::OnlineServices::UI::InputStateButtonFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.IsValidKeyCombination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::UI::UIInterface::*)(::Epic::OnlineServices::UI::KeyCombination)>(&::Epic::OnlineServices::UI::UIInterface::IsValidKeyCombination)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804e3890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"IsValidKeyCombination", {}, {::i2c::type_of<::Epic::OnlineServices::UI::KeyCombination>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.PauseSocialOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::PauseSocialOverlayOptions>)>(&::Epic::OnlineServices::UI::UIInterface::PauseSocialOverlay)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804e3920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"PauseSocialOverlay", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::PauseSocialOverlayOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.PrePresent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::PrePresentOptions>)>(&::Epic::OnlineServices::UI::UIInterface::PrePresent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804e39d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"PrePresent", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::PrePresentOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.RemoveNotifyDisplaySettingsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::UIInterface::*)(uint64_t)>(&::Epic::OnlineServices::UI::UIInterface::RemoveNotifyDisplaySettingsUpdated)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804e3aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"RemoveNotifyDisplaySettingsUpdated", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.RemoveNotifyMemoryMonitor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::UIInterface::*)(uint64_t)>(&::Epic::OnlineServices::UI::UIInterface::RemoveNotifyMemoryMonitor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804e3b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"RemoveNotifyMemoryMonitor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.RemoveNotifyOnScreenKeyboardRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::UIInterface::*)(uint64_t)>(&::Epic::OnlineServices::UI::UIInterface::RemoveNotifyOnScreenKeyboardRequested)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804e3be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"RemoveNotifyOnScreenKeyboardRequested", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.ReportInputState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::ReportInputStateOptions>)>(&::Epic::OnlineServices::UI::UIInterface::ReportInputState)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804e3c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"ReportInputState", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ReportInputStateOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.SetDisplayPreference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::SetDisplayPreferenceOptions>)>(&::Epic::OnlineServices::UI::UIInterface::SetDisplayPreference)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804e3d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"SetDisplayPreference", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::SetDisplayPreferenceOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.SetToggleFriendsButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>)>(&::Epic::OnlineServices::UI::UIInterface::SetToggleFriendsButton)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804e3e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"SetToggleFriendsButton", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.SetToggleFriendsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>)>(&::Epic::OnlineServices::UI::UIInterface::SetToggleFriendsKey)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804e3eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"SetToggleFriendsKey", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.ShowBlockPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::ShowBlockPlayerOptions>, ::System::Object*, ::Epic::OnlineServices::UI::OnShowBlockPlayerCallback*)>(&::Epic::OnlineServices::UI::UIInterface::ShowBlockPlayer)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1804e3f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"ShowBlockPlayer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ShowBlockPlayerOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnShowBlockPlayerCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.ShowFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::ShowFriendsOptions>, ::System::Object*, ::Epic::OnlineServices::UI::OnShowFriendsCallback*)>(&::Epic::OnlineServices::UI::UIInterface::ShowFriends)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1804e4200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"ShowFriends", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ShowFriendsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnShowFriendsCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.ShowNativeProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::ShowNativeProfileOptions>, ::System::Object*, ::Epic::OnlineServices::UI::OnShowNativeProfileCallback*)>(&::Epic::OnlineServices::UI::UIInterface::ShowNativeProfile)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1804e4490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"ShowNativeProfile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ShowNativeProfileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnShowNativeProfileCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::UIInterface.ShowReportPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::UIInterface::*)(::by_ref<::Epic::OnlineServices::UI::ShowReportPlayerOptions>, ::System::Object*, ::Epic::OnlineServices::UI::OnShowReportPlayerCallback*)>(&::Epic::OnlineServices::UI::UIInterface::ShowReportPlayer)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1804e4730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"ShowReportPlayer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ShowReportPlayerOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::UIInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::UI::UIInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UI::UIInterface::AcknowledgeEventId(::by_ref<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"AcknowledgeEventId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline uint64_t Epic::OnlineServices::UI::UIInterface::AddNotifyDisplaySettingsUpdated(::by_ref<::Epic::OnlineServices::UI::AddNotifyDisplaySettingsUpdatedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"AddNotifyDisplaySettingsUpdated", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::AddNotifyDisplaySettingsUpdatedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::UI::UIInterface::AddNotifyMemoryMonitor(::by_ref<::Epic::OnlineServices::UI::AddNotifyMemoryMonitorOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnMemoryMonitorCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"AddNotifyMemoryMonitor", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::AddNotifyMemoryMonitorOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::UI::UIInterface::AddNotifyOnScreenKeyboardRequested(::by_ref<::Epic::OnlineServices::UI::AddNotifyOnScreenKeyboardRequestedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"AddNotifyOnScreenKeyboardRequested", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::AddNotifyOnScreenKeyboardRequestedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UI::UIInterface::ConfigureOnScreenKeyboard(::by_ref<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"ConfigureOnScreenKeyboard", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline bool Epic::OnlineServices::UI::UIInterface::GetFriendsExclusiveInput(::by_ref<::Epic::OnlineServices::UI::GetFriendsExclusiveInputOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"GetFriendsExclusiveInput", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::GetFriendsExclusiveInputOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, options);
}
inline bool Epic::OnlineServices::UI::UIInterface::GetFriendsVisible(::by_ref<::Epic::OnlineServices::UI::GetFriendsVisibleOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"GetFriendsVisible", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::GetFriendsVisibleOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::UI::NotificationLocation Epic::OnlineServices::UI::UIInterface::GetNotificationLocationPreference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"GetNotificationLocationPreference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::NotificationLocation>(this, ___internal_method);
}
inline ::Epic::OnlineServices::UI::InputStateButtonFlags Epic::OnlineServices::UI::UIInterface::GetToggleFriendsButton(::by_ref<::Epic::OnlineServices::UI::GetToggleFriendsButtonOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"GetToggleFriendsButton", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::GetToggleFriendsButtonOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::InputStateButtonFlags>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::UI::KeyCombination Epic::OnlineServices::UI::UIInterface::GetToggleFriendsKey(::by_ref<::Epic::OnlineServices::UI::GetToggleFriendsKeyOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"GetToggleFriendsKey", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::GetToggleFriendsKeyOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::KeyCombination>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::UI::UIInterface::HideFriends(::by_ref<::Epic::OnlineServices::UI::HideFriendsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnHideFriendsCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"HideFriends", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::HideFriendsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnHideFriendsCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline bool Epic::OnlineServices::UI::UIInterface::IsSocialOverlayPaused(::by_ref<::Epic::OnlineServices::UI::IsSocialOverlayPausedOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"IsSocialOverlayPaused", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::IsSocialOverlayPausedOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, options);
}
inline bool Epic::OnlineServices::UI::UIInterface::IsValidButtonCombination(::Epic::OnlineServices::UI::InputStateButtonFlags  buttonCombination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"IsValidButtonCombination", {}, {::i2c::type_of<::Epic::OnlineServices::UI::InputStateButtonFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buttonCombination);
}
inline bool Epic::OnlineServices::UI::UIInterface::IsValidKeyCombination(::Epic::OnlineServices::UI::KeyCombination  keyCombination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"IsValidKeyCombination", {}, {::i2c::type_of<::Epic::OnlineServices::UI::KeyCombination>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyCombination);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UI::UIInterface::PauseSocialOverlay(::by_ref<::Epic::OnlineServices::UI::PauseSocialOverlayOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"PauseSocialOverlay", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::PauseSocialOverlayOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UI::UIInterface::PrePresent(::by_ref<::Epic::OnlineServices::UI::PrePresentOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"PrePresent", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::PrePresentOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::UI::UIInterface::RemoveNotifyDisplaySettingsUpdated(uint64_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"RemoveNotifyDisplaySettingsUpdated", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Epic::OnlineServices::UI::UIInterface::RemoveNotifyMemoryMonitor(uint64_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"RemoveNotifyMemoryMonitor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Epic::OnlineServices::UI::UIInterface::RemoveNotifyOnScreenKeyboardRequested(uint64_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"RemoveNotifyOnScreenKeyboardRequested", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UI::UIInterface::ReportInputState(::by_ref<::Epic::OnlineServices::UI::ReportInputStateOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"ReportInputState", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ReportInputStateOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UI::UIInterface::SetDisplayPreference(::by_ref<::Epic::OnlineServices::UI::SetDisplayPreferenceOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"SetDisplayPreference", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::SetDisplayPreferenceOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UI::UIInterface::SetToggleFriendsButton(::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"SetToggleFriendsButton", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UI::UIInterface::SetToggleFriendsKey(::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"SetToggleFriendsKey", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::UI::UIInterface::ShowBlockPlayer(::by_ref<::Epic::OnlineServices::UI::ShowBlockPlayerOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnShowBlockPlayerCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"ShowBlockPlayer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ShowBlockPlayerOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnShowBlockPlayerCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::UI::UIInterface::ShowFriends(::by_ref<::Epic::OnlineServices::UI::ShowFriendsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnShowFriendsCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"ShowFriends", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ShowFriendsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnShowFriendsCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::UI::UIInterface::ShowNativeProfile(::by_ref<::Epic::OnlineServices::UI::ShowNativeProfileOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnShowNativeProfileCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"ShowNativeProfile", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ShowNativeProfileOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnShowNativeProfileCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::UI::UIInterface::ShowReportPlayer(::by_ref<::Epic::OnlineServices::UI::ShowReportPlayerOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UI::OnShowReportPlayerCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::UIInterface*>(),
                        {"ShowReportPlayer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ShowReportPlayerOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::UI::UIInterface* Epic::OnlineServices::UI::UIInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::UI::UIInterface*>());
}
inline ::Epic::OnlineServices::UI::UIInterface* Epic::OnlineServices::UI::UIInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::UI::UIInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::UIInterface::UIInterface()   {
}
