#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/RTCAudioInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RTCAudioInterface)
namespace Epic::OnlineServices::RTCAudio {
struct AddNotifyAudioBeforeRenderOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct AddNotifyAudioBeforeSendOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct AddNotifyAudioDevicesChangedOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct AddNotifyAudioInputStateOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct AddNotifyAudioOutputStateOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct AddNotifyParticipantUpdatedOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct AudioInputDeviceInfo;
}
namespace Epic::OnlineServices::RTCAudio {
struct AudioOutputDeviceInfo;
}
namespace Epic::OnlineServices::RTCAudio {
struct CopyInputDeviceInformationByIndexOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct CopyOutputDeviceInformationByIndexOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct GetAudioInputDeviceByIndexOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct GetAudioInputDevicesCountOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct GetAudioOutputDeviceByIndexOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct GetAudioOutputDevicesCountOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct GetInputDevicesCountOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct GetOutputDevicesCountOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct InputDeviceInformation;
}
namespace Epic::OnlineServices::RTCAudio {
class OnAudioBeforeRenderCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnAudioBeforeSendCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnAudioDevicesChangedCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnAudioInputStateCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnAudioOutputStateCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnParticipantUpdatedCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnQueryInputDevicesInformationCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnQueryOutputDevicesInformationCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnRegisterPlatformUserCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnSetInputDeviceSettingsCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnSetOutputDeviceSettingsCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnUnregisterPlatformUserCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnUpdateParticipantVolumeCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnUpdateReceivingCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnUpdateReceivingVolumeCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnUpdateSendingCallback;
}
namespace Epic::OnlineServices::RTCAudio {
class OnUpdateSendingVolumeCallback;
}
namespace Epic::OnlineServices::RTCAudio {
struct OutputDeviceInformation;
}
namespace Epic::OnlineServices::RTCAudio {
struct QueryInputDevicesInformationOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct QueryOutputDevicesInformationOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct RegisterPlatformAudioUserOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct RegisterPlatformUserOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct SendAudioOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct SetAudioInputSettingsOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct SetAudioOutputSettingsOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct SetInputDeviceSettingsOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct SetOutputDeviceSettingsOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct UnregisterPlatformAudioUserOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct UnregisterPlatformUserOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct UpdateParticipantVolumeOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct UpdateReceivingOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct UpdateReceivingVolumeOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct UpdateSendingOptions;
}
namespace Epic::OnlineServices::RTCAudio {
struct UpdateSendingVolumeOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
class RTCAudioInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCAudio::RTCAudioInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::RTCAudioInterface*, "Epic.OnlineServices.RTCAudio", "RTCAudioInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::RTCAudio {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCAudio.RTCAudioInterface
class CORDL_TYPE RTCAudioInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method AddNotifyAudioBeforeRender, addr 0x1804edc60, size 0x260, virtual false, abstract: false, final false
inline uint64_t AddNotifyAudioBeforeRender(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeRenderOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallback*  completionDelegate) ;

/// @brief Method AddNotifyAudioBeforeSend, addr 0x1804edec0, size 0x250, virtual false, abstract: false, final false
inline uint64_t AddNotifyAudioBeforeSend(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioBeforeSendOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallback*  completionDelegate) ;

/// @brief Method AddNotifyAudioDevicesChanged, addr 0x1804ee110, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyAudioDevicesChanged(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioDevicesChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallback*  completionDelegate) ;

/// @brief Method AddNotifyAudioInputState, addr 0x1804ee300, size 0x250, virtual false, abstract: false, final false
inline uint64_t AddNotifyAudioInputState(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioInputStateOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallback*  completionDelegate) ;

/// @brief Method AddNotifyAudioOutputState, addr 0x1804ee550, size 0x250, virtual false, abstract: false, final false
inline uint64_t AddNotifyAudioOutputState(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyAudioOutputStateOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallback*  completionDelegate) ;

/// @brief Method AddNotifyParticipantUpdated, addr 0x1804ee7a0, size 0x250, virtual false, abstract: false, final false
inline uint64_t AddNotifyParticipantUpdated(::by_ref<::Epic::OnlineServices::RTCAudio::AddNotifyParticipantUpdatedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnParticipantUpdatedCallback*  completionDelegate) ;

/// @brief Method CopyInputDeviceInformationByIndex, addr 0x1804ee9f0, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyInputDeviceInformationByIndex(::by_ref<::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAudio::InputDeviceInformation>>  outInputDeviceInformation) ;

/// @brief Method CopyOutputDeviceInformationByIndex, addr 0x1804eea70, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyOutputDeviceInformationByIndex(::by_ref<::Epic::OnlineServices::RTCAudio::CopyOutputDeviceInformationByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAudio::OutputDeviceInformation>>  outOutputDeviceInformation) ;

/// @brief Method GetAudioInputDeviceByIndex, addr 0x1804eeaf0, size 0x70, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfo> GetAudioInputDeviceByIndex(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions>  options) ;

/// @brief Method GetAudioInputDevicesCount, addr 0x1804eeb60, size 0x40, virtual false, abstract: false, final false
inline uint32_t GetAudioInputDevicesCount(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioInputDevicesCountOptions>  options) ;

/// @brief Method GetAudioOutputDeviceByIndex, addr 0x1804eeba0, size 0x70, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo> GetAudioOutputDeviceByIndex(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions>  options) ;

/// @brief Method GetAudioOutputDevicesCount, addr 0x1804eec10, size 0x40, virtual false, abstract: false, final false
inline uint32_t GetAudioOutputDevicesCount(::by_ref<::Epic::OnlineServices::RTCAudio::GetAudioOutputDevicesCountOptions>  options) ;

/// @brief Method GetInputDevicesCount, addr 0x1804eec50, size 0x40, virtual false, abstract: false, final false
inline uint32_t GetInputDevicesCount(::by_ref<::Epic::OnlineServices::RTCAudio::GetInputDevicesCountOptions>  options) ;

/// @brief Method GetOutputDevicesCount, addr 0x1804eec90, size 0x40, virtual false, abstract: false, final false
inline uint32_t GetOutputDevicesCount(::by_ref<::Epic::OnlineServices::RTCAudio::GetOutputDevicesCountOptions>  options) ;

static inline ::Epic::OnlineServices::RTCAudio::RTCAudioInterface* New_ctor() ;

static inline ::Epic::OnlineServices::RTCAudio::RTCAudioInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryInputDevicesInformation, addr 0x1804eecd0, size 0x1d0, virtual false, abstract: false, final false
inline void QueryInputDevicesInformation(::by_ref<::Epic::OnlineServices::RTCAudio::QueryInputDevicesInformationOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallback*  completionDelegate) ;

/// @brief Method QueryOutputDevicesInformation, addr 0x1804eeea0, size 0x1d0, virtual false, abstract: false, final false
inline void QueryOutputDevicesInformation(::by_ref<::Epic::OnlineServices::RTCAudio::QueryOutputDevicesInformationOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallback*  completionDelegate) ;

/// @brief Method RegisterPlatformAudioUser, addr 0x1804ef070, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result RegisterPlatformAudioUser(::by_ref<::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptions>  options) ;

/// @brief Method RegisterPlatformUser, addr 0x1804ef0e0, size 0x200, virtual false, abstract: false, final false
inline void RegisterPlatformUser(::by_ref<::Epic::OnlineServices::RTCAudio::RegisterPlatformUserOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallback*  completionDelegate) ;

/// @brief Method RemoveNotifyAudioBeforeRender, addr 0x1804ef2e0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyAudioBeforeRender(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyAudioBeforeSend, addr 0x1804ef310, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyAudioBeforeSend(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyAudioDevicesChanged, addr 0x1804ef340, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyAudioDevicesChanged(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyAudioInputState, addr 0x1804ef370, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyAudioInputState(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyAudioOutputState, addr 0x1804ef3a0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyAudioOutputState(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyParticipantUpdated, addr 0x1804ef3d0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyParticipantUpdated(uint64_t  notificationId) ;

/// @brief Method SendAudio, addr 0x1804ef400, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SendAudio(::by_ref<::Epic::OnlineServices::RTCAudio::SendAudioOptions>  options) ;

/// @brief Method SetAudioInputSettings, addr 0x1804ef450, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetAudioInputSettings(::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioInputSettingsOptions>  options) ;

/// @brief Method SetAudioOutputSettings, addr 0x1804ef4a0, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetAudioOutputSettings(::by_ref<::Epic::OnlineServices::RTCAudio::SetAudioOutputSettingsOptions>  options) ;

/// @brief Method SetInputDeviceSettings, addr 0x1804ef4f0, size 0x1f0, virtual false, abstract: false, final false
inline void SetInputDeviceSettings(::by_ref<::Epic::OnlineServices::RTCAudio::SetInputDeviceSettingsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*  completionDelegate) ;

/// @brief Method SetOutputDeviceSettings, addr 0x1804ef6e0, size 0x200, virtual false, abstract: false, final false
inline void SetOutputDeviceSettings(::by_ref<::Epic::OnlineServices::RTCAudio::SetOutputDeviceSettingsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallback*  completionDelegate) ;

/// @brief Method UnregisterPlatformAudioUser, addr 0x1804ef8e0, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result UnregisterPlatformAudioUser(::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions>  options) ;

/// @brief Method UnregisterPlatformUser, addr 0x1804ef930, size 0x1f0, virtual false, abstract: false, final false
inline void UnregisterPlatformUser(::by_ref<::Epic::OnlineServices::RTCAudio::UnregisterPlatformUserOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallback*  completionDelegate) ;

/// @brief Method UpdateParticipantVolume, addr 0x1804efb20, size 0x210, virtual false, abstract: false, final false
inline void UpdateParticipantVolume(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*  completionDelegate) ;

/// @brief Method UpdateReceiving, addr 0x1804eff20, size 0x210, virtual false, abstract: false, final false
inline void UpdateReceiving(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingCallback*  completionDelegate) ;

/// @brief Method UpdateReceivingVolume, addr 0x1804efd30, size 0x1f0, virtual false, abstract: false, final false
inline void UpdateReceivingVolume(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingVolumeOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallback*  completionDelegate) ;

/// @brief Method UpdateSending, addr 0x1804f0320, size 0x1f0, virtual false, abstract: false, final false
inline void UpdateSending(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallback*  completionDelegate) ;

/// @brief Method UpdateSendingVolume, addr 0x1804f0130, size 0x1f0, virtual false, abstract: false, final false
inline void UpdateSendingVolume(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingVolumeOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RTCAudioInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RTCAudioInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RTCAudioInterface(RTCAudioInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RTCAudioInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RTCAudioInterface(RTCAudioInterface const& ) = delete;

/// @brief Field ADDNOTIFYAUDIOBEFORERENDER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYAUDIOBEFORERENDER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYAUDIOBEFORESEND_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYAUDIOBEFORESEND_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYAUDIODEVICESCHANGED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYAUDIODEVICESCHANGED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYAUDIOINPUTSTATE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYAUDIOINPUTSTATE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYAUDIOOUTPUTSTATE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYAUDIOOUTPUTSTATE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYPARTICIPANTUPDATED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYPARTICIPANTUPDATED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field AUDIOBUFFER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  AUDIOBUFFER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field AUDIOINPUTDEVICEINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  AUDIOINPUTDEVICEINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field AUDIOOUTPUTDEVICEINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  AUDIOOUTPUTDEVICEINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYINPUTDEVICEINFORMATIONBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYINPUTDEVICEINFORMATIONBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYOUTPUTDEVICEINFORMATIONBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYOUTPUTDEVICEINFORMATIONBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETAUDIOINPUTDEVICEBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETAUDIOINPUTDEVICEBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETAUDIOINPUTDEVICESCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETAUDIOINPUTDEVICESCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETAUDIOOUTPUTDEVICEBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETAUDIOOUTPUTDEVICEBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETAUDIOOUTPUTDEVICESCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETAUDIOOUTPUTDEVICESCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETINPUTDEVICESCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETINPUTDEVICESCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETOUTPUTDEVICESCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETOUTPUTDEVICESCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field INPUTDEVICEINFORMATION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  INPUTDEVICEINFORMATION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field OUTPUTDEVICEINFORMATION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  OUTPUTDEVICEINFORMATION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYINPUTDEVICESINFORMATION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYINPUTDEVICESINFORMATION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYOUTPUTDEVICESINFORMATION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYOUTPUTDEVICESINFORMATION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field REGISTERPLATFORMAUDIOUSER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  REGISTERPLATFORMAUDIOUSER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field REGISTERPLATFORMUSER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  REGISTERPLATFORMUSER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SENDAUDIO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SENDAUDIO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETAUDIOINPUTSETTINGS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETAUDIOINPUTSETTINGS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETAUDIOOUTPUTSETTINGS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETAUDIOOUTPUTSETTINGS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETINPUTDEVICESETTINGS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETINPUTDEVICESETTINGS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETOUTPUTDEVICESETTINGS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETOUTPUTDEVICESETTINGS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UNREGISTERPLATFORMAUDIOUSER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UNREGISTERPLATFORMAUDIOUSER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UNREGISTERPLATFORMUSER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UNREGISTERPLATFORMUSER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UPDATEPARTICIPANTVOLUME_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UPDATEPARTICIPANTVOLUME_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UPDATERECEIVINGVOLUME_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UPDATERECEIVINGVOLUME_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UPDATERECEIVING_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UPDATERECEIVING_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UPDATESENDINGVOLUME_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UPDATESENDINGVOLUME_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UPDATESENDING_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UPDATESENDING_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8053};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCAudio::RTCAudioInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
