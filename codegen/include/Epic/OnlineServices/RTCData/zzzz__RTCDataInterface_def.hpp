#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/RTCDataInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RTCDataInterface)
namespace Epic::OnlineServices::RTCData {
struct AddNotifyDataReceivedOptions;
}
namespace Epic::OnlineServices::RTCData {
struct AddNotifyParticipantUpdatedOptions;
}
namespace Epic::OnlineServices::RTCData {
class OnDataReceivedCallback;
}
namespace Epic::OnlineServices::RTCData {
class OnParticipantUpdatedCallback;
}
namespace Epic::OnlineServices::RTCData {
class OnUpdateReceivingCallback;
}
namespace Epic::OnlineServices::RTCData {
class OnUpdateSendingCallback;
}
namespace Epic::OnlineServices::RTCData {
struct SendDataOptions;
}
namespace Epic::OnlineServices::RTCData {
struct UpdateReceivingOptions;
}
namespace Epic::OnlineServices::RTCData {
struct UpdateSendingOptions;
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
namespace Epic::OnlineServices::RTCData {
class RTCDataInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCData::RTCDataInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCData::RTCDataInterface*, "Epic.OnlineServices.RTCData", "RTCDataInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::RTCData {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCData.RTCDataInterface
class CORDL_TYPE RTCDataInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method AddNotifyDataReceived, addr 0x1804f0520, size 0x250, virtual false, abstract: false, final false
inline uint64_t AddNotifyDataReceived(::by_ref<::Epic::OnlineServices::RTCData::AddNotifyDataReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCData::OnDataReceivedCallback*  completionDelegate) ;

/// @brief Method AddNotifyParticipantUpdated, addr 0x1804f0770, size 0x250, virtual false, abstract: false, final false
inline uint64_t AddNotifyParticipantUpdated(::by_ref<::Epic::OnlineServices::RTCData::AddNotifyParticipantUpdatedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallback*  completionDelegate) ;

static inline ::Epic::OnlineServices::RTCData::RTCDataInterface* New_ctor() ;

static inline ::Epic::OnlineServices::RTCData::RTCDataInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method RemoveNotifyDataReceived, addr 0x1804f09c0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyDataReceived(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyParticipantUpdated, addr 0x1804f09f0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyParticipantUpdated(uint64_t  notificationId) ;

/// @brief Method SendData, addr 0x1804f0a20, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SendData(::by_ref<::Epic::OnlineServices::RTCData::SendDataOptions>  options) ;

/// @brief Method UpdateReceiving, addr 0x1804f0ae0, size 0x270, virtual false, abstract: false, final false
inline void UpdateReceiving(::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*  completionDelegate) ;

/// @brief Method UpdateSending, addr 0x1804f0d50, size 0x240, virtual false, abstract: false, final false
inline void UpdateSending(::by_ref<::Epic::OnlineServices::RTCData::UpdateSendingOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCData::OnUpdateSendingCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RTCDataInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RTCDataInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RTCDataInterface(RTCDataInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RTCDataInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RTCDataInterface(RTCDataInterface const& ) = delete;

/// @brief Field ADDNOTIFYDATARECEIVED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYDATARECEIVED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYPARTICIPANTUPDATED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYPARTICIPANTUPDATED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field MAX_PACKET_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  MAX_PACKET_SIZE{static_cast<int32_t>(0x492)};

/// @brief Field SENDDATA_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SENDDATA_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UPDATERECEIVING_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UPDATERECEIVING_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UPDATESENDING_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UPDATESENDING_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7923};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCData::RTCDataInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCData
