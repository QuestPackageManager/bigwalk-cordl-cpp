#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/RTCInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RTCInterface)
namespace Epic::OnlineServices::RTCAudio {
class RTCAudioInterface;
}
namespace Epic::OnlineServices::RTCData {
class RTCDataInterface;
}
namespace Epic::OnlineServices::RTC {
struct AddNotifyDisconnectedOptions;
}
namespace Epic::OnlineServices::RTC {
struct AddNotifyParticipantStatusChangedOptions;
}
namespace Epic::OnlineServices::RTC {
struct AddNotifyRoomBeforeJoinOptions;
}
namespace Epic::OnlineServices::RTC {
struct AddNotifyRoomStatisticsUpdatedOptions;
}
namespace Epic::OnlineServices::RTC {
struct BlockParticipantOptions;
}
namespace Epic::OnlineServices::RTC {
struct JoinRoomOptions;
}
namespace Epic::OnlineServices::RTC {
struct LeaveRoomOptions;
}
namespace Epic::OnlineServices::RTC {
class OnBlockParticipantCallback;
}
namespace Epic::OnlineServices::RTC {
class OnDisconnectedCallback;
}
namespace Epic::OnlineServices::RTC {
class OnJoinRoomCallback;
}
namespace Epic::OnlineServices::RTC {
class OnLeaveRoomCallback;
}
namespace Epic::OnlineServices::RTC {
class OnParticipantStatusChangedCallback;
}
namespace Epic::OnlineServices::RTC {
class OnRoomBeforeJoinCallback;
}
namespace Epic::OnlineServices::RTC {
class OnRoomStatisticsUpdatedCallback;
}
namespace Epic::OnlineServices::RTC {
struct SetRoomSettingOptions;
}
namespace Epic::OnlineServices::RTC {
struct SetSettingOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::RTC {
class RTCInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTC::RTCInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::RTCInterface*, "Epic.OnlineServices.RTC", "RTCInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::RTC {
// Is value type: false
// CS Name: Epic.OnlineServices.RTC.RTCInterface
class CORDL_TYPE RTCInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method AddNotifyDisconnected, addr 0x180500b80, size 0x250, virtual false, abstract: false, final false
inline uint64_t AddNotifyDisconnected(::by_ref<::Epic::OnlineServices::RTC::AddNotifyDisconnectedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTC::OnDisconnectedCallback*  completionDelegate) ;

/// @brief Method AddNotifyParticipantStatusChanged, addr 0x180500dd0, size 0x250, virtual false, abstract: false, final false
inline uint64_t AddNotifyParticipantStatusChanged(::by_ref<::Epic::OnlineServices::RTC::AddNotifyParticipantStatusChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallback*  completionDelegate) ;

/// @brief Method AddNotifyRoomBeforeJoin, addr 0x180501020, size 0x220, virtual false, abstract: false, final false
inline uint64_t AddNotifyRoomBeforeJoin(::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomBeforeJoinOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallback*  completionDelegate) ;

/// @brief Method AddNotifyRoomStatisticsUpdated, addr 0x180501240, size 0x250, virtual false, abstract: false, final false
inline uint64_t AddNotifyRoomStatisticsUpdated(::by_ref<::Epic::OnlineServices::RTC::AddNotifyRoomStatisticsUpdatedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallback*  completionDelegate) ;

/// @brief Method BlockParticipant, addr 0x180501490, size 0x270, virtual false, abstract: false, final false
inline void BlockParticipant(::by_ref<::Epic::OnlineServices::RTC::BlockParticipantOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTC::OnBlockParticipantCallback*  completionDelegate) ;

/// @brief Method GetAudioInterface, addr 0x180501700, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::RTCAudio::RTCAudioInterface* GetAudioInterface() ;

/// @brief Method GetDataInterface, addr 0x180501740, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::RTCData::RTCDataInterface* GetDataInterface() ;

/// @brief Method JoinRoom, addr 0x180501780, size 0x210, virtual false, abstract: false, final false
inline void JoinRoom(::by_ref<::Epic::OnlineServices::RTC::JoinRoomOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTC::OnJoinRoomCallback*  completionDelegate) ;

/// @brief Method LeaveRoom, addr 0x180501990, size 0x230, virtual false, abstract: false, final false
inline void LeaveRoom(::by_ref<::Epic::OnlineServices::RTC::LeaveRoomOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTC::OnLeaveRoomCallback*  completionDelegate) ;

static inline ::Epic::OnlineServices::RTC::RTCInterface* New_ctor() ;

static inline ::Epic::OnlineServices::RTC::RTCInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method RemoveNotifyDisconnected, addr 0x180501bc0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyDisconnected(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyParticipantStatusChanged, addr 0x180501bf0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyParticipantStatusChanged(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyRoomBeforeJoin, addr 0x180501c20, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyRoomBeforeJoin(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyRoomStatisticsUpdated, addr 0x180501c50, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyRoomStatisticsUpdated(uint64_t  notificationId) ;

/// @brief Method SetRoomSetting, addr 0x180501c80, size 0xd0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetRoomSetting(::by_ref<::Epic::OnlineServices::RTC::SetRoomSettingOptions>  options) ;

/// @brief Method SetSetting, addr 0x180501d50, size 0x90, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetSetting(::by_ref<::Epic::OnlineServices::RTC::SetSettingOptions>  options) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RTCInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RTCInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RTCInterface(RTCInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RTCInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RTCInterface(RTCInterface const& ) = delete;

/// @brief Field ADDNOTIFYDISCONNECTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYDISCONNECTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYPARTICIPANTSTATUSCHANGED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYPARTICIPANTSTATUSCHANGED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYROOMBEFOREJOIN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYROOMBEFOREJOIN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYROOMSTATISTICSUPDATED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYROOMSTATISTICSUPDATED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field BLOCKPARTICIPANT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  BLOCKPARTICIPANT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field JOINROOM_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  JOINROOM_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LEAVEROOM_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LEAVEROOM_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field OPTION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  OPTION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field OPTION_KEY_MAXCHARCOUNT offset 0xffffffff size 0x4
static constexpr int32_t  OPTION_KEY_MAXCHARCOUNT{static_cast<int32_t>(0x100)};

/// @brief Field OPTION_VALUE_MAXCHARCOUNT offset 0xffffffff size 0x4
static constexpr int32_t  OPTION_VALUE_MAXCHARCOUNT{static_cast<int32_t>(0x100)};

/// @brief Field PARTICIPANTMETADATA_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PARTICIPANTMETADATA_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field PARTICIPANTMETADATA_KEY_MAXCHARCOUNT offset 0xffffffff size 0x4
static constexpr int32_t  PARTICIPANTMETADATA_KEY_MAXCHARCOUNT{static_cast<int32_t>(0x100)};

/// @brief Field PARTICIPANTMETADATA_VALUE_MAXCHARCOUNT offset 0xffffffff size 0x4
static constexpr int32_t  PARTICIPANTMETADATA_VALUE_MAXCHARCOUNT{static_cast<int32_t>(0x100)};

/// @brief Field SETROOMSETTING_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETROOMSETTING_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETSETTING_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETSETTING_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8172};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTC::RTCInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
