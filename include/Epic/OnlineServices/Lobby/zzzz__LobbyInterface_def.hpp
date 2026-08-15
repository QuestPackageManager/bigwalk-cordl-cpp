#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyInterface)
namespace Epic::OnlineServices::Lobby {
struct AddNotifyJoinLobbyAcceptedOptions;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyLeaveLobbyRequestedOptions;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyLobbyInviteAcceptedOptions;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyLobbyInviteReceivedOptions;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyLobbyInviteRejectedOptions;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyLobbyMemberStatusReceivedOptions;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyLobbyMemberUpdateReceivedOptions;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyLobbyUpdateReceivedOptions;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifyRTCRoomConnectionChangedOptions;
}
namespace Epic::OnlineServices::Lobby {
struct AddNotifySendLobbyNativeInviteRequestedOptions;
}
namespace Epic::OnlineServices::Lobby {
struct CopyLobbyDetailsHandleByInviteIdOptions;
}
namespace Epic::OnlineServices::Lobby {
struct CopyLobbyDetailsHandleByUiEventIdOptions;
}
namespace Epic::OnlineServices::Lobby {
struct CopyLobbyDetailsHandleOptions;
}
namespace Epic::OnlineServices::Lobby {
struct CreateLobbyOptions;
}
namespace Epic::OnlineServices::Lobby {
struct CreateLobbySearchOptions;
}
namespace Epic::OnlineServices::Lobby {
struct DestroyLobbyOptions;
}
namespace Epic::OnlineServices::Lobby {
struct GetConnectStringOptions;
}
namespace Epic::OnlineServices::Lobby {
struct GetInviteCountOptions;
}
namespace Epic::OnlineServices::Lobby {
struct GetInviteIdByIndexOptions;
}
namespace Epic::OnlineServices::Lobby {
struct GetRTCRoomNameOptions;
}
namespace Epic::OnlineServices::Lobby {
struct HardMuteMemberOptions;
}
namespace Epic::OnlineServices::Lobby {
struct IsRTCRoomConnectedOptions;
}
namespace Epic::OnlineServices::Lobby {
struct JoinLobbyByIdOptions;
}
namespace Epic::OnlineServices::Lobby {
struct JoinLobbyOptions;
}
namespace Epic::OnlineServices::Lobby {
struct JoinRTCRoomOptions;
}
namespace Epic::OnlineServices::Lobby {
struct KickMemberOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LeaveLobbyOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LeaveRTCRoomOptions;
}
namespace Epic::OnlineServices::Lobby {
class LobbyDetails;
}
namespace Epic::OnlineServices::Lobby {
class LobbyModification;
}
namespace Epic::OnlineServices::Lobby {
class LobbySearch;
}
namespace Epic::OnlineServices::Lobby {
class OnCreateLobbyCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnDestroyLobbyCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnHardMuteMemberCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnJoinLobbyAcceptedCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnJoinLobbyByIdCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnJoinLobbyCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnJoinRTCRoomCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnKickMemberCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnLeaveLobbyCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnLeaveLobbyRequestedCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnLeaveRTCRoomCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyInviteAcceptedCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyInviteReceivedCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyInviteRejectedCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyMemberStatusReceivedCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyMemberUpdateReceivedCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyUpdateReceivedCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnPromoteMemberCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnQueryInvitesCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnRTCRoomConnectionChangedCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnRejectInviteCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnSendInviteCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnSendLobbyNativeInviteRequestedCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnUpdateLobbyCallback;
}
namespace Epic::OnlineServices::Lobby {
struct ParseConnectStringOptions;
}
namespace Epic::OnlineServices::Lobby {
struct PromoteMemberOptions;
}
namespace Epic::OnlineServices::Lobby {
struct QueryInvitesOptions;
}
namespace Epic::OnlineServices::Lobby {
struct RejectInviteOptions;
}
namespace Epic::OnlineServices::Lobby {
struct SendInviteOptions;
}
namespace Epic::OnlineServices::Lobby {
struct UpdateLobbyModificationOptions;
}
namespace Epic::OnlineServices::Lobby {
struct UpdateLobbyOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class LobbyInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::LobbyInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyInterface*, "Epic.OnlineServices.Lobby", "LobbyInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.LobbyInterface
class CORDL_TYPE LobbyInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Field SEARCH_BUCKET_ID, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SEARCH_BUCKET_ID, put=setStaticF_SEARCH_BUCKET_ID)) ::Epic::OnlineServices::Utf8String*  SEARCH_BUCKET_ID;

/// @brief Field SEARCH_MINCURRENTMEMBERS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SEARCH_MINCURRENTMEMBERS, put=setStaticF_SEARCH_MINCURRENTMEMBERS)) ::Epic::OnlineServices::Utf8String*  SEARCH_MINCURRENTMEMBERS;

/// @brief Field SEARCH_MINSLOTSAVAILABLE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SEARCH_MINSLOTSAVAILABLE, put=setStaticF_SEARCH_MINSLOTSAVAILABLE)) ::Epic::OnlineServices::Utf8String*  SEARCH_MINSLOTSAVAILABLE;

/// @brief Method AddNotifyJoinLobbyAccepted, addr 0x180506d50, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyJoinLobbyAccepted(::by_ref<::Epic::OnlineServices::Lobby::AddNotifyJoinLobbyAcceptedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallback*  notificationFn) ;

/// @brief Method AddNotifyLeaveLobbyRequested, addr 0x180506f40, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyLeaveLobbyRequested(::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallback*  notificationFn) ;

/// @brief Method AddNotifyLobbyInviteAccepted, addr 0x180507130, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyLobbyInviteAccepted(::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteAcceptedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback*  notificationFn) ;

/// @brief Method AddNotifyLobbyInviteReceived, addr 0x180507320, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyLobbyInviteReceived(::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnLobbyInviteReceivedCallback*  notificationFn) ;

/// @brief Method AddNotifyLobbyInviteRejected, addr 0x180507510, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyLobbyInviteRejected(::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteRejectedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallback*  notificationFn) ;

/// @brief Method AddNotifyLobbyMemberStatusReceived, addr 0x180507700, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyLobbyMemberStatusReceived(::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLobbyMemberStatusReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallback*  notificationFn) ;

/// @brief Method AddNotifyLobbyMemberUpdateReceived, addr 0x1805078f0, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyLobbyMemberUpdateReceived(::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLobbyMemberUpdateReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback*  notificationFn) ;

/// @brief Method AddNotifyLobbyUpdateReceived, addr 0x180507ae0, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyLobbyUpdateReceived(::by_ref<::Epic::OnlineServices::Lobby::AddNotifyLobbyUpdateReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnLobbyUpdateReceivedCallback*  notificationFn) ;

/// @brief Method AddNotifyRTCRoomConnectionChanged, addr 0x180507cd0, size 0x250, virtual false, abstract: false, final false
inline uint64_t AddNotifyRTCRoomConnectionChanged(::by_ref<::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallback*  notificationFn) ;

/// @brief Method AddNotifySendLobbyNativeInviteRequested, addr 0x180507f20, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifySendLobbyNativeInviteRequested(::by_ref<::Epic::OnlineServices::Lobby::AddNotifySendLobbyNativeInviteRequestedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallback*  notificationFn) ;

/// @brief Method CopyLobbyDetailsHandle, addr 0x180508220, size 0xd0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyLobbyDetailsHandle(::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleOptions>  options, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetails*>  outLobbyDetailsHandle) ;

/// @brief Method CopyLobbyDetailsHandleByInviteId, addr 0x180508110, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyLobbyDetailsHandleByInviteId(::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>  options, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetails*>  outLobbyDetailsHandle) ;

/// @brief Method CopyLobbyDetailsHandleByUiEventId, addr 0x1805081b0, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyLobbyDetailsHandleByUiEventId(::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions>  options, ::by_ref<::Epic::OnlineServices::Lobby::LobbyDetails*>  outLobbyDetailsHandle) ;

/// @brief Method CreateLobby, addr 0x180508360, size 0x210, virtual false, abstract: false, final false
inline void CreateLobby(::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnCreateLobbyCallback*  completionDelegate) ;

/// @brief Method CreateLobbySearch, addr 0x1805082f0, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CreateLobbySearch(::by_ref<::Epic::OnlineServices::Lobby::CreateLobbySearchOptions>  options, ::by_ref<::Epic::OnlineServices::Lobby::LobbySearch*>  outLobbySearchHandle) ;

/// @brief Method DestroyLobby, addr 0x180508570, size 0x230, virtual false, abstract: false, final false
inline void DestroyLobby(::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnDestroyLobbyCallback*  completionDelegate) ;

/// @brief Method GetConnectString, addr 0x1805087a0, size 0xf0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetConnectString(::by_ref<::Epic::OnlineServices::Lobby::GetConnectStringOptions>  options, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

/// @brief Method GetInviteCount, addr 0x180508890, size 0x70, virtual false, abstract: false, final false
inline uint32_t GetInviteCount(::by_ref<::Epic::OnlineServices::Lobby::GetInviteCountOptions>  options) ;

/// @brief Method GetInviteIdByIndex, addr 0x180508900, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetInviteIdByIndex(::by_ref<::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptions>  options, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

/// @brief Method GetRTCRoomName, addr 0x1805089e0, size 0xf0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetRTCRoomName(::by_ref<::Epic::OnlineServices::Lobby::GetRTCRoomNameOptions>  options, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

/// @brief Method HardMuteMember, addr 0x180508ad0, size 0x270, virtual false, abstract: false, final false
inline void HardMuteMember(::by_ref<::Epic::OnlineServices::Lobby::HardMuteMemberOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnHardMuteMemberCallback*  completionDelegate) ;

/// @brief Method IsRTCRoomConnected, addr 0x180508d40, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result IsRTCRoomConnected(::by_ref<::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions>  options, ::by_ref<bool>  outIsConnected) ;

/// @brief Method JoinLobby, addr 0x180509000, size 0x200, virtual false, abstract: false, final false
inline void JoinLobby(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnJoinLobbyCallback*  completionDelegate) ;

/// @brief Method JoinLobbyById, addr 0x180508e00, size 0x200, virtual false, abstract: false, final false
inline void JoinLobbyById(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallback*  completionDelegate) ;

/// @brief Method JoinRTCRoom, addr 0x180509200, size 0x270, virtual false, abstract: false, final false
inline void JoinRTCRoom(::by_ref<::Epic::OnlineServices::Lobby::JoinRTCRoomOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallback*  completionDelegate) ;

/// @brief Method KickMember, addr 0x180509470, size 0x250, virtual false, abstract: false, final false
inline void KickMember(::by_ref<::Epic::OnlineServices::Lobby::KickMemberOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnKickMemberCallback*  completionDelegate) ;

/// @brief Method LeaveLobby, addr 0x1805096c0, size 0x230, virtual false, abstract: false, final false
inline void LeaveLobby(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallback*  completionDelegate) ;

/// @brief Method LeaveRTCRoom, addr 0x1805098f0, size 0x230, virtual false, abstract: false, final false
inline void LeaveRTCRoom(::by_ref<::Epic::OnlineServices::Lobby::LeaveRTCRoomOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallback*  completionDelegate) ;

static inline ::Epic::OnlineServices::Lobby::LobbyInterface* New_ctor() ;

static inline ::Epic::OnlineServices::Lobby::LobbyInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method ParseConnectString, addr 0x180509b20, size 0xd0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result ParseConnectString(::by_ref<::Epic::OnlineServices::Lobby::ParseConnectStringOptions>  options, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

/// @brief Method PromoteMember, addr 0x180509bf0, size 0x250, virtual false, abstract: false, final false
inline void PromoteMember(::by_ref<::Epic::OnlineServices::Lobby::PromoteMemberOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnPromoteMemberCallback*  completionDelegate) ;

/// @brief Method QueryInvites, addr 0x180509e40, size 0x200, virtual false, abstract: false, final false
inline void QueryInvites(::by_ref<::Epic::OnlineServices::Lobby::QueryInvitesOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnQueryInvitesCallback*  completionDelegate) ;

/// @brief Method RejectInvite, addr 0x18050a040, size 0x230, virtual false, abstract: false, final false
inline void RejectInvite(::by_ref<::Epic::OnlineServices::Lobby::RejectInviteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnRejectInviteCallback*  completionDelegate) ;

/// @brief Method RemoveNotifyJoinLobbyAccepted, addr 0x18050a270, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyJoinLobbyAccepted(uint64_t  inId) ;

/// @brief Method RemoveNotifyLeaveLobbyRequested, addr 0x18050a2a0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyLeaveLobbyRequested(uint64_t  inId) ;

/// @brief Method RemoveNotifyLobbyInviteAccepted, addr 0x18050a2d0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyLobbyInviteAccepted(uint64_t  inId) ;

/// @brief Method RemoveNotifyLobbyInviteReceived, addr 0x18050a300, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyLobbyInviteReceived(uint64_t  inId) ;

/// @brief Method RemoveNotifyLobbyInviteRejected, addr 0x18050a330, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyLobbyInviteRejected(uint64_t  inId) ;

/// @brief Method RemoveNotifyLobbyMemberStatusReceived, addr 0x18050a360, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyLobbyMemberStatusReceived(uint64_t  inId) ;

/// @brief Method RemoveNotifyLobbyMemberUpdateReceived, addr 0x18050a390, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyLobbyMemberUpdateReceived(uint64_t  inId) ;

/// @brief Method RemoveNotifyLobbyUpdateReceived, addr 0x18050a3c0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyLobbyUpdateReceived(uint64_t  inId) ;

/// @brief Method RemoveNotifyRTCRoomConnectionChanged, addr 0x18050a3f0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyRTCRoomConnectionChanged(uint64_t  inId) ;

/// @brief Method RemoveNotifySendLobbyNativeInviteRequested, addr 0x18050a420, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifySendLobbyNativeInviteRequested(uint64_t  inId) ;

/// @brief Method SendInvite, addr 0x18050a450, size 0x250, virtual false, abstract: false, final false
inline void SendInvite(::by_ref<::Epic::OnlineServices::Lobby::SendInviteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnSendInviteCallback*  completionDelegate) ;

/// @brief Method UpdateLobby, addr 0x18050a770, size 0x200, virtual false, abstract: false, final false
inline void UpdateLobby(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallback*  completionDelegate) ;

/// @brief Method UpdateLobbyModification, addr 0x18050a6a0, size 0xd0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result UpdateLobbyModification(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyModificationOptions>  options, ::by_ref<::Epic::OnlineServices::Lobby::LobbyModification*>  outLobbyModificationHandle) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_SEARCH_BUCKET_ID() ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_SEARCH_MINCURRENTMEMBERS() ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_SEARCH_MINSLOTSAVAILABLE() ;

static inline void setStaticF_SEARCH_BUCKET_ID(::Epic::OnlineServices::Utf8String*  value) ;

static inline void setStaticF_SEARCH_MINCURRENTMEMBERS(::Epic::OnlineServices::Utf8String*  value) ;

static inline void setStaticF_SEARCH_MINSLOTSAVAILABLE(::Epic::OnlineServices::Utf8String*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbyInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbyInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyInterface(LobbyInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyInterface(LobbyInterface const& ) = delete;

/// @brief Field ADDNOTIFYJOINLOBBYACCEPTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYJOINLOBBYACCEPTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYLEAVELOBBYREQUESTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYLEAVELOBBYREQUESTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYLOBBYINVITEACCEPTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYLOBBYINVITEACCEPTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYLOBBYINVITERECEIVED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYLOBBYINVITERECEIVED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYLOBBYINVITEREJECTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYLOBBYINVITEREJECTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYLOBBYMEMBERSTATUSRECEIVED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYLOBBYMEMBERSTATUSRECEIVED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYLOBBYMEMBERUPDATERECEIVED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYLOBBYMEMBERUPDATERECEIVED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYLOBBYUPDATERECEIVED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYLOBBYUPDATERECEIVED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYRTCROOMCONNECTIONCHANGED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYRTCROOMCONNECTIONCHANGED_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field ADDNOTIFYSENDLOBBYNATIVEINVITEREQUESTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYSENDLOBBYNATIVEINVITEREQUESTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ATTRIBUTEDATA_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ATTRIBUTEDATA_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ATTRIBUTE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ATTRIBUTE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYLOBBYDETAILSHANDLEBYINVITEID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYLOBBYDETAILSHANDLEBYINVITEID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYLOBBYDETAILSHANDLEBYUIEVENTID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYLOBBYDETAILSHANDLEBYUIEVENTID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYLOBBYDETAILSHANDLE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYLOBBYDETAILSHANDLE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CREATELOBBYSEARCH_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CREATELOBBYSEARCH_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CREATELOBBY_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CREATELOBBY_API_LATEST{static_cast<int32_t>(0xa)};

/// @brief Field DESTROYLOBBY_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DESTROYLOBBY_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETCONNECTSTRING_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETCONNECTSTRING_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETCONNECTSTRING_BUFFER_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  GETCONNECTSTRING_BUFFER_SIZE{static_cast<int32_t>(0x100)};

/// @brief Field GETINVITECOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETINVITECOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETINVITEIDBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETINVITEIDBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETRTCROOMNAME_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETRTCROOMNAME_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field HARDMUTEMEMBER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  HARDMUTEMEMBER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field INVITEID_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  INVITEID_MAX_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field ISRTCROOMCONNECTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ISRTCROOMCONNECTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field JOINLOBBYBYID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  JOINLOBBYBYID_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field JOINLOBBY_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  JOINLOBBY_API_LATEST{static_cast<int32_t>(0x5)};

/// @brief Field JOINRTCROOM_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  JOINRTCROOM_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field KICKMEMBER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  KICKMEMBER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LEAVELOBBY_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LEAVELOBBY_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LEAVERTCROOM_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LEAVERTCROOM_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYDETAILS_COPYATTRIBUTEBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYDETAILS_COPYATTRIBUTEBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYDETAILS_COPYATTRIBUTEBYKEY_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYDETAILS_COPYATTRIBUTEBYKEY_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYDETAILS_COPYINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYDETAILS_COPYINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYDETAILS_COPYMEMBERATTRIBUTEBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYDETAILS_COPYMEMBERATTRIBUTEBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYDETAILS_COPYMEMBERATTRIBUTEBYKEY_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYDETAILS_COPYMEMBERATTRIBUTEBYKEY_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYDETAILS_COPYMEMBERINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYDETAILS_COPYMEMBERINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYDETAILS_GETATTRIBUTECOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYDETAILS_GETATTRIBUTECOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYDETAILS_GETLOBBYOWNER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYDETAILS_GETLOBBYOWNER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYDETAILS_GETMEMBERATTRIBUTECOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYDETAILS_GETMEMBERATTRIBUTECOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYDETAILS_GETMEMBERBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYDETAILS_GETMEMBERBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYDETAILS_GETMEMBERCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYDETAILS_GETMEMBERCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYDETAILS_INFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYDETAILS_INFO_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field LOBBYDETAILS_MEMBERINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYDETAILS_MEMBERINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYMODIFICATION_ADDATTRIBUTE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYMODIFICATION_ADDATTRIBUTE_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field LOBBYMODIFICATION_ADDMEMBERATTRIBUTE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYMODIFICATION_ADDMEMBERATTRIBUTE_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field LOBBYMODIFICATION_MAX_ATTRIBUTES offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYMODIFICATION_MAX_ATTRIBUTES{static_cast<int32_t>(0x40)};

/// @brief Field LOBBYMODIFICATION_MAX_ATTRIBUTE_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYMODIFICATION_MAX_ATTRIBUTE_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field LOBBYMODIFICATION_REMOVEATTRIBUTE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYMODIFICATION_REMOVEATTRIBUTE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYMODIFICATION_REMOVEMEMBERATTRIBUTE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYMODIFICATION_REMOVEMEMBERATTRIBUTE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYMODIFICATION_SETALLOWEDPLATFORMIDS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYMODIFICATION_SETALLOWEDPLATFORMIDS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYMODIFICATION_SETBUCKETID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYMODIFICATION_SETBUCKETID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYMODIFICATION_SETINVITESALLOWED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYMODIFICATION_SETINVITESALLOWED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYMODIFICATION_SETMAXMEMBERS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYMODIFICATION_SETMAXMEMBERS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYMODIFICATION_SETPERMISSIONLEVEL_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYMODIFICATION_SETPERMISSIONLEVEL_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYSEARCH_COPYSEARCHRESULTBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYSEARCH_COPYSEARCHRESULTBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYSEARCH_FIND_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYSEARCH_FIND_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYSEARCH_GETSEARCHRESULTCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYSEARCH_GETSEARCHRESULTCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYSEARCH_REMOVEPARAMETER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYSEARCH_REMOVEPARAMETER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYSEARCH_SETLOBBYID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYSEARCH_SETLOBBYID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYSEARCH_SETMAXRESULTS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYSEARCH_SETMAXRESULTS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYSEARCH_SETPARAMETER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYSEARCH_SETPARAMETER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOBBYSEARCH_SETTARGETUSERID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOBBYSEARCH_SETTARGETUSERID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOCALRTCOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOCALRTCOPTIONS_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field MAX_LOBBIES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_LOBBIES{static_cast<int32_t>(0x10)};

/// @brief Field MAX_LOBBYIDOVERRIDE_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  MAX_LOBBYIDOVERRIDE_LENGTH{static_cast<int32_t>(0x3c)};

/// @brief Field MAX_LOBBY_MEMBERS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_LOBBY_MEMBERS{static_cast<int32_t>(0x40)};

/// @brief Field MAX_SEARCH_RESULTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_SEARCH_RESULTS{static_cast<int32_t>(0xc8)};

/// @brief Field MIN_LOBBYIDOVERRIDE_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  MIN_LOBBYIDOVERRIDE_LENGTH{static_cast<int32_t>(0x4)};

/// @brief Field PARSECONNECTSTRING_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PARSECONNECTSTRING_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field PARSECONNECTSTRING_BUFFER_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  PARSECONNECTSTRING_BUFFER_SIZE{static_cast<int32_t>(0x100)};

/// @brief Field PROMOTEMEMBER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PROMOTEMEMBER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYINVITES_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYINVITES_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field REJECTINVITE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  REJECTINVITE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SENDINVITE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SENDINVITE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UPDATELOBBYMODIFICATION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UPDATELOBBYMODIFICATION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UPDATELOBBY_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UPDATELOBBY_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8537};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
