#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/RTCAudioInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__RTCAudioInterface_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AddNotifyAudioBeforeRenderOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AddNotifyAudioBeforeSendOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AddNotifyAudioDevicesChangedOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AddNotifyAudioInputStateOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AddNotifyAudioOutputStateOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AddNotifyParticipantUpdatedOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AudioInputDeviceInfo_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AudioOutputDeviceInfo_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__CopyInputDeviceInformationByIndexOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__CopyOutputDeviceInformationByIndexOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__GetAudioInputDeviceByIndexOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__GetAudioInputDevicesCountOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__GetAudioOutputDeviceByIndexOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__GetAudioOutputDevicesCountOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__GetInputDevicesCountOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__GetOutputDevicesCountOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__InputDeviceInformation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnAudioBeforeRenderCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnAudioBeforeSendCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnAudioDevicesChangedCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnAudioInputStateCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnAudioOutputStateCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnParticipantUpdatedCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnQueryInputDevicesInformationCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnQueryOutputDevicesInformationCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnRegisterPlatformUserCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnSetInputDeviceSettingsCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnSetOutputDeviceSettingsCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUnregisterPlatformUserCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUpdateParticipantVolumeCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUpdateReceivingCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUpdateReceivingVolumeCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUpdateSendingCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUpdateSendingVolumeCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OutputDeviceInformation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__QueryInputDevicesInformationOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__QueryOutputDevicesInformationOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__RegisterPlatformAudioUserOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__RegisterPlatformUserOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__SendAudioOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__SetAudioInputSettingsOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__SetAudioOutputSettingsOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__SetInputDeviceSettingsOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__SetOutputDeviceSettingsOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UnregisterPlatformAudioUserOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UnregisterPlatformUserOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UpdateParticipantVolumeOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UpdateReceivingOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UpdateReceivingVolumeOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UpdateSendingOptions_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UpdateSendingVolumeOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)()>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.AddNotifyAudioBeforeRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::AddNotifyAudioBeforeRender)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1804edc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"AddNotifyAudioBeforeRender", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.AddNotifyAudioBeforeSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeSendOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::AddNotifyAudioBeforeSend)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1804edec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"AddNotifyAudioBeforeSend", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeSendOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.AddNotifyAudioDevicesChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::AddNotifyAudioDevicesChanged)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804ee110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"AddNotifyAudioDevicesChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.AddNotifyAudioInputState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioInputStateOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::AddNotifyAudioInputState)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1804ee300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"AddNotifyAudioInputState", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioInputStateOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.AddNotifyAudioOutputState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioOutputStateOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::AddNotifyAudioOutputState)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1804ee550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"AddNotifyAudioOutputState", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioOutputStateOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.AddNotifyParticipantUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyParticipantUpdatedOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::AddNotifyParticipantUpdated)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1804ee7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"AddNotifyParticipantUpdated", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyParticipantUpdatedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.CopyInputDeviceInformationByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAudio::InputDeviceInformation>>)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::CopyInputDeviceInformationByIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804ee9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"CopyInputDeviceInformationByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAudio::InputDeviceInformation>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.CopyOutputDeviceInformationByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAudio::OutputDeviceInformation>>)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::CopyOutputDeviceInformationByIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804eea70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"CopyOutputDeviceInformationByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAudio::OutputDeviceInformation>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.GetAudioInputDeviceByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfo> (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions>)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::GetAudioInputDeviceByIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804eeaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"GetAudioInputDeviceByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.GetAudioInputDevicesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions>)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::GetAudioInputDevicesCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804eeb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"GetAudioInputDevicesCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.GetAudioOutputDeviceByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo> (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions>)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::GetAudioOutputDeviceByIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804eeba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"GetAudioOutputDeviceByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.GetAudioOutputDevicesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioOutputDevicesCountOptions>)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::GetAudioOutputDevicesCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804eec10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"GetAudioOutputDevicesCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioOutputDevicesCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.GetInputDevicesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::GetInputDevicesCountOptions>)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::GetInputDevicesCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804eec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"GetInputDevicesCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::GetInputDevicesCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.GetOutputDevicesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::GetOutputDevicesCountOptions>)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::GetOutputDevicesCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804eec90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"GetOutputDevicesCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::GetOutputDevicesCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.QueryInputDevicesInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::QueryInputDevicesInformationOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::QueryInputDevicesInformation)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1804eecd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"QueryInputDevicesInformation", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::QueryInputDevicesInformationOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.QueryOutputDevicesInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::QueryOutputDevicesInformationOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::QueryOutputDevicesInformation)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1804eeea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"QueryOutputDevicesInformation", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::QueryOutputDevicesInformationOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.RegisterPlatformAudioUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptions>)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::RegisterPlatformAudioUser)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804ef070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RegisterPlatformAudioUser", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.RegisterPlatformUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::RegisterPlatformUserOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::RegisterPlatformUser)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804ef0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RegisterPlatformUser", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::RegisterPlatformUserOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.RemoveNotifyAudioBeforeRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(uint64_t)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::RemoveNotifyAudioBeforeRender)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804ef2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RemoveNotifyAudioBeforeRender", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.RemoveNotifyAudioBeforeSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(uint64_t)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::RemoveNotifyAudioBeforeSend)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804ef310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RemoveNotifyAudioBeforeSend", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.RemoveNotifyAudioDevicesChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(uint64_t)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::RemoveNotifyAudioDevicesChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804ef340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RemoveNotifyAudioDevicesChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.RemoveNotifyAudioInputState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(uint64_t)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::RemoveNotifyAudioInputState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804ef370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RemoveNotifyAudioInputState", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.RemoveNotifyAudioOutputState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(uint64_t)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::RemoveNotifyAudioOutputState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804ef3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RemoveNotifyAudioOutputState", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.RemoveNotifyParticipantUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(uint64_t)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::RemoveNotifyParticipantUpdated)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804ef3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RemoveNotifyParticipantUpdated", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.SendAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::SendAudioOptions>)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::SendAudio)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804ef400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"SendAudio", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::SendAudioOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.SetAudioInputSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions>)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::SetAudioInputSettings)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804ef450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"SetAudioInputSettings", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.SetAudioOutputSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioOutputSettingsOptions>)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::SetAudioOutputSettings)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804ef4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"SetAudioOutputSettings", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioOutputSettingsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.SetInputDeviceSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::SetInputDeviceSettings)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804ef4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"SetInputDeviceSettings", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.SetOutputDeviceSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::SetOutputDeviceSettingsOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::SetOutputDeviceSettings)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804ef6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"SetOutputDeviceSettings", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::SetOutputDeviceSettingsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.UnregisterPlatformAudioUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions>)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::UnregisterPlatformAudioUser)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804ef8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"UnregisterPlatformAudioUser", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.UnregisterPlatformUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformUserOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::UnregisterPlatformUser)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804ef930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"UnregisterPlatformUser", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformUserOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.UpdateParticipantVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::UpdateParticipantVolume)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1804efb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"UpdateParticipantVolume", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.UpdateReceiving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::UpdateReceiving)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1804eff20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"UpdateReceiving", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnUpdateReceivingCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.UpdateReceivingVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingVolumeOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::UpdateReceivingVolume)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804efd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"UpdateReceivingVolume", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingVolumeOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.UpdateSending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::UpdateSending)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804f0320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"UpdateSending", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::RTCAudioInterface.UpdateSendingVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::RTCAudioInterface::*)(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingVolumeOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallback*)>(&::Epic::OnlineServices::RTCAudio::RTCAudioInterface::UpdateSendingVolume)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804f0130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"UpdateSendingVolume", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingVolumeOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline uint64_t Epic::OnlineServices::RTCAudio::RTCAudioInterface::AddNotifyAudioBeforeRender(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"AddNotifyAudioBeforeRender", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, completionDelegate);
}
inline uint64_t Epic::OnlineServices::RTCAudio::RTCAudioInterface::AddNotifyAudioBeforeSend(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeSendOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"AddNotifyAudioBeforeSend", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeSendOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, completionDelegate);
}
inline uint64_t Epic::OnlineServices::RTCAudio::RTCAudioInterface::AddNotifyAudioDevicesChanged(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"AddNotifyAudioDevicesChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, completionDelegate);
}
inline uint64_t Epic::OnlineServices::RTCAudio::RTCAudioInterface::AddNotifyAudioInputState(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioInputStateOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"AddNotifyAudioInputState", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioInputStateOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, completionDelegate);
}
inline uint64_t Epic::OnlineServices::RTCAudio::RTCAudioInterface::AddNotifyAudioOutputState(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioOutputStateOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"AddNotifyAudioOutputState", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioOutputStateOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, completionDelegate);
}
inline uint64_t Epic::OnlineServices::RTCAudio::RTCAudioInterface::AddNotifyParticipantUpdated(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyParticipantUpdatedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"AddNotifyParticipantUpdated", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyParticipantUpdatedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::RTCAudio::RTCAudioInterface::CopyInputDeviceInformationByIndex(::by_ref<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAudio::InputDeviceInformation>>  outInputDeviceInformation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"CopyInputDeviceInformationByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAudio::InputDeviceInformation>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outInputDeviceInformation);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::RTCAudio::RTCAudioInterface::CopyOutputDeviceInformationByIndex(::by_ref<::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAudio::OutputDeviceInformation>>  outOutputDeviceInformation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"CopyOutputDeviceInformationByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAudio::OutputDeviceInformation>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outOutputDeviceInformation);
}
inline ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfo> Epic::OnlineServices::RTCAudio::RTCAudioInterface::GetAudioInputDeviceByIndex(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"GetAudioInputDeviceByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfo>>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::RTCAudio::RTCAudioInterface::GetAudioInputDevicesCount(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"GetAudioInputDevicesCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo> Epic::OnlineServices::RTCAudio::RTCAudioInterface::GetAudioOutputDeviceByIndex(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"GetAudioOutputDeviceByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo>>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::RTCAudio::RTCAudioInterface::GetAudioOutputDevicesCount(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioOutputDevicesCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"GetAudioOutputDevicesCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioOutputDevicesCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::RTCAudio::RTCAudioInterface::GetInputDevicesCount(::by_ref<::Epic::OnlineServices::RTCAudio::GetInputDevicesCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"GetInputDevicesCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::GetInputDevicesCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::RTCAudio::RTCAudioInterface::GetOutputDevicesCount(::by_ref<::Epic::OnlineServices::RTCAudio::GetOutputDevicesCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"GetOutputDevicesCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::GetOutputDevicesCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::QueryInputDevicesInformation(::by_ref<::Epic::OnlineServices::RTCAudio::QueryInputDevicesInformationOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"QueryInputDevicesInformation", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::QueryInputDevicesInformationOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::QueryOutputDevicesInformation(::by_ref<::Epic::OnlineServices::RTCAudio::QueryOutputDevicesInformationOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"QueryOutputDevicesInformation", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::QueryOutputDevicesInformationOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::RTCAudio::RTCAudioInterface::RegisterPlatformAudioUser(::by_ref<::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RegisterPlatformAudioUser", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::RegisterPlatformUser(::by_ref<::Epic::OnlineServices::RTCAudio::RegisterPlatformUserOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RegisterPlatformUser", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::RegisterPlatformUserOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::RemoveNotifyAudioBeforeRender(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RemoveNotifyAudioBeforeRender", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::RemoveNotifyAudioBeforeSend(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RemoveNotifyAudioBeforeSend", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::RemoveNotifyAudioDevicesChanged(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RemoveNotifyAudioDevicesChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::RemoveNotifyAudioInputState(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RemoveNotifyAudioInputState", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::RemoveNotifyAudioOutputState(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RemoveNotifyAudioOutputState", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::RemoveNotifyParticipantUpdated(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"RemoveNotifyParticipantUpdated", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::RTCAudio::RTCAudioInterface::SendAudio(::by_ref<::Epic::OnlineServices::RTCAudio::SendAudioOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"SendAudio", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::SendAudioOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::RTCAudio::RTCAudioInterface::SetAudioInputSettings(::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"SetAudioInputSettings", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::RTCAudio::RTCAudioInterface::SetAudioOutputSettings(::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioOutputSettingsOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"SetAudioOutputSettings", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioOutputSettingsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::SetInputDeviceSettings(::by_ref<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"SetInputDeviceSettings", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::SetOutputDeviceSettings(::by_ref<::Epic::OnlineServices::RTCAudio::SetOutputDeviceSettingsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"SetOutputDeviceSettings", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::SetOutputDeviceSettingsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::RTCAudio::RTCAudioInterface::UnregisterPlatformAudioUser(::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"UnregisterPlatformAudioUser", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::UnregisterPlatformUser(::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformUserOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"UnregisterPlatformUser", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformUserOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::UpdateParticipantVolume(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"UpdateParticipantVolume", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::UpdateReceiving(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"UpdateReceiving", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnUpdateReceivingCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::UpdateReceivingVolume(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingVolumeOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"UpdateReceivingVolume", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingVolumeOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::UpdateSending(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"UpdateSending", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::RTCAudio::RTCAudioInterface::UpdateSendingVolume(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingVolumeOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(),
                        {"UpdateSendingVolume", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingVolumeOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::RTCAudio::RTCAudioInterface* Epic::OnlineServices::RTCAudio::RTCAudioInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>());
}
inline ::Epic::OnlineServices::RTCAudio::RTCAudioInterface* Epic::OnlineServices::RTCAudio::RTCAudioInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTCAudio::RTCAudioInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::RTCAudioInterface::RTCAudioInterface()   {
}
