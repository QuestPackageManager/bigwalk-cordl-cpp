#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionsInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SessionsInterface)
namespace Epic::OnlineServices::Sessions {
class ActiveSession;
}
namespace Epic::OnlineServices::Sessions {
struct AddNotifyJoinSessionAcceptedOptions;
}
namespace Epic::OnlineServices::Sessions {
struct AddNotifyLeaveSessionRequestedOptions;
}
namespace Epic::OnlineServices::Sessions {
struct AddNotifySendSessionNativeInviteRequestedOptions;
}
namespace Epic::OnlineServices::Sessions {
struct AddNotifySessionInviteAcceptedOptions;
}
namespace Epic::OnlineServices::Sessions {
struct AddNotifySessionInviteReceivedOptions;
}
namespace Epic::OnlineServices::Sessions {
struct AddNotifySessionInviteRejectedOptions;
}
namespace Epic::OnlineServices::Sessions {
struct CopyActiveSessionHandleOptions;
}
namespace Epic::OnlineServices::Sessions {
struct CopySessionHandleByInviteIdOptions;
}
namespace Epic::OnlineServices::Sessions {
struct CopySessionHandleByUiEventIdOptions;
}
namespace Epic::OnlineServices::Sessions {
struct CopySessionHandleForPresenceOptions;
}
namespace Epic::OnlineServices::Sessions {
struct CreateSessionModificationOptions;
}
namespace Epic::OnlineServices::Sessions {
struct CreateSessionSearchOptions;
}
namespace Epic::OnlineServices::Sessions {
struct DestroySessionOptions;
}
namespace Epic::OnlineServices::Sessions {
struct DumpSessionStateOptions;
}
namespace Epic::OnlineServices::Sessions {
struct EndSessionOptions;
}
namespace Epic::OnlineServices::Sessions {
struct GetInviteCountOptions;
}
namespace Epic::OnlineServices::Sessions {
struct GetInviteIdByIndexOptions;
}
namespace Epic::OnlineServices::Sessions {
struct IsUserInSessionOptions;
}
namespace Epic::OnlineServices::Sessions {
struct JoinSessionOptions;
}
namespace Epic::OnlineServices::Sessions {
class OnDestroySessionCallback;
}
namespace Epic::OnlineServices::Sessions {
class OnEndSessionCallback;
}
namespace Epic::OnlineServices::Sessions {
class OnJoinSessionAcceptedCallback;
}
namespace Epic::OnlineServices::Sessions {
class OnJoinSessionCallback;
}
namespace Epic::OnlineServices::Sessions {
class OnLeaveSessionRequestedCallback;
}
namespace Epic::OnlineServices::Sessions {
class OnQueryInvitesCallback;
}
namespace Epic::OnlineServices::Sessions {
class OnRegisterPlayersCallback;
}
namespace Epic::OnlineServices::Sessions {
class OnRejectInviteCallback;
}
namespace Epic::OnlineServices::Sessions {
class OnSendInviteCallback;
}
namespace Epic::OnlineServices::Sessions {
class OnSendSessionNativeInviteRequestedCallback;
}
namespace Epic::OnlineServices::Sessions {
class OnSessionInviteAcceptedCallback;
}
namespace Epic::OnlineServices::Sessions {
class OnSessionInviteReceivedCallback;
}
namespace Epic::OnlineServices::Sessions {
class OnSessionInviteRejectedCallback;
}
namespace Epic::OnlineServices::Sessions {
class OnStartSessionCallback;
}
namespace Epic::OnlineServices::Sessions {
class OnUnregisterPlayersCallback;
}
namespace Epic::OnlineServices::Sessions {
class OnUpdateSessionCallback;
}
namespace Epic::OnlineServices::Sessions {
struct QueryInvitesOptions;
}
namespace Epic::OnlineServices::Sessions {
struct RegisterPlayersOptions;
}
namespace Epic::OnlineServices::Sessions {
struct RejectInviteOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SendInviteOptions;
}
namespace Epic::OnlineServices::Sessions {
class SessionDetails;
}
namespace Epic::OnlineServices::Sessions {
class SessionModification;
}
namespace Epic::OnlineServices::Sessions {
class SessionSearch;
}
namespace Epic::OnlineServices::Sessions {
struct StartSessionOptions;
}
namespace Epic::OnlineServices::Sessions {
struct UnregisterPlayersOptions;
}
namespace Epic::OnlineServices::Sessions {
struct UpdateSessionModificationOptions;
}
namespace Epic::OnlineServices::Sessions {
struct UpdateSessionOptions;
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
namespace Epic::OnlineServices::Sessions {
class SessionsInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::SessionsInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionsInterface*, "Epic.OnlineServices.Sessions", "SessionsInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.SessionsInterface
class CORDL_TYPE SessionsInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Field SEARCH_BUCKET_ID, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SEARCH_BUCKET_ID, put=setStaticF_SEARCH_BUCKET_ID)) ::Epic::OnlineServices::Utf8String*  SEARCH_BUCKET_ID;

/// @brief Field SEARCH_EMPTY_SERVERS_ONLY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SEARCH_EMPTY_SERVERS_ONLY, put=setStaticF_SEARCH_EMPTY_SERVERS_ONLY)) ::Epic::OnlineServices::Utf8String*  SEARCH_EMPTY_SERVERS_ONLY;

/// @brief Field SEARCH_MINSLOTSAVAILABLE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SEARCH_MINSLOTSAVAILABLE, put=setStaticF_SEARCH_MINSLOTSAVAILABLE)) ::Epic::OnlineServices::Utf8String*  SEARCH_MINSLOTSAVAILABLE;

/// @brief Field SEARCH_NONEMPTY_SERVERS_ONLY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SEARCH_NONEMPTY_SERVERS_ONLY, put=setStaticF_SEARCH_NONEMPTY_SERVERS_ONLY)) ::Epic::OnlineServices::Utf8String*  SEARCH_NONEMPTY_SERVERS_ONLY;

/// @brief Method AddNotifyJoinSessionAccepted, addr 0x1804f3810, size 0x200, virtual false, abstract: false, final false
inline uint64_t AddNotifyJoinSessionAccepted(::by_ref<::Epic::OnlineServices::Sessions::AddNotifyJoinSessionAcceptedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallback*  notificationFn) ;

/// @brief Method AddNotifyLeaveSessionRequested, addr 0x1804f3a10, size 0x200, virtual false, abstract: false, final false
inline uint64_t AddNotifyLeaveSessionRequested(::by_ref<::Epic::OnlineServices::Sessions::AddNotifyLeaveSessionRequestedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallback*  notificationFn) ;

/// @brief Method AddNotifySendSessionNativeInviteRequested, addr 0x1804f3c10, size 0x200, virtual false, abstract: false, final false
inline uint64_t AddNotifySendSessionNativeInviteRequested(::by_ref<::Epic::OnlineServices::Sessions::AddNotifySendSessionNativeInviteRequestedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallback*  notificationFn) ;

/// @brief Method AddNotifySessionInviteAccepted, addr 0x1804f3e10, size 0x200, virtual false, abstract: false, final false
inline uint64_t AddNotifySessionInviteAccepted(::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteAcceptedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*  notificationFn) ;

/// @brief Method AddNotifySessionInviteReceived, addr 0x1804f4010, size 0x200, virtual false, abstract: false, final false
inline uint64_t AddNotifySessionInviteReceived(::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallback*  notificationFn) ;

/// @brief Method AddNotifySessionInviteRejected, addr 0x1804f4210, size 0x200, virtual false, abstract: false, final false
inline uint64_t AddNotifySessionInviteRejected(::by_ref<::Epic::OnlineServices::Sessions::AddNotifySessionInviteRejectedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallback*  notificationFn) ;

/// @brief Method CopyActiveSessionHandle, addr 0x1804f4410, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyActiveSessionHandle(::by_ref<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::ActiveSession*>  outSessionHandle) ;

/// @brief Method CopySessionHandleByInviteId, addr 0x1804f4490, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopySessionHandleByInviteId(::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>  outSessionHandle) ;

/// @brief Method CopySessionHandleByUiEventId, addr 0x1804f4510, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopySessionHandleByUiEventId(::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>  outSessionHandle) ;

/// @brief Method CopySessionHandleForPresence, addr 0x1804f4590, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopySessionHandleForPresence(::by_ref<::Epic::OnlineServices::Sessions::CopySessionHandleForPresenceOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>  outSessionHandle) ;

/// @brief Method CreateSessionModification, addr 0x1804f4610, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CreateSessionModification(::by_ref<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::SessionModification*>  outSessionModificationHandle) ;

/// @brief Method CreateSessionSearch, addr 0x1804f46b0, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CreateSessionSearch(::by_ref<::Epic::OnlineServices::Sessions::CreateSessionSearchOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::SessionSearch*>  outSessionSearchHandle) ;

/// @brief Method DestroySession, addr 0x1804f4730, size 0x1f0, virtual false, abstract: false, final false
inline void DestroySession(::by_ref<::Epic::OnlineServices::Sessions::DestroySessionOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnDestroySessionCallback*  completionDelegate) ;

/// @brief Method DumpSessionState, addr 0x1804f4920, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result DumpSessionState(::by_ref<::Epic::OnlineServices::Sessions::DumpSessionStateOptions>  options) ;

/// @brief Method EndSession, addr 0x1804f4970, size 0x1f0, virtual false, abstract: false, final false
inline void EndSession(::by_ref<::Epic::OnlineServices::Sessions::EndSessionOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnEndSessionCallback*  completionDelegate) ;

/// @brief Method GetInviteCount, addr 0x1804f4b60, size 0x50, virtual false, abstract: false, final false
inline uint32_t GetInviteCount(::by_ref<::Epic::OnlineServices::Sessions::GetInviteCountOptions>  options) ;

/// @brief Method GetInviteIdByIndex, addr 0x1804f4bb0, size 0xb0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetInviteIdByIndex(::by_ref<::Epic::OnlineServices::Sessions::GetInviteIdByIndexOptions>  options, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

/// @brief Method IsUserInSession, addr 0x1804f4c60, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result IsUserInSession(::by_ref<::Epic::OnlineServices::Sessions::IsUserInSessionOptions>  options) ;

/// @brief Method JoinSession, addr 0x1804f4cb0, size 0x210, virtual false, abstract: false, final false
inline void JoinSession(::by_ref<::Epic::OnlineServices::Sessions::JoinSessionOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnJoinSessionCallback*  completionDelegate) ;

static inline ::Epic::OnlineServices::Sessions::SessionsInterface* New_ctor() ;

static inline ::Epic::OnlineServices::Sessions::SessionsInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryInvites, addr 0x1804f4ec0, size 0x200, virtual false, abstract: false, final false
inline void QueryInvites(::by_ref<::Epic::OnlineServices::Sessions::QueryInvitesOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnQueryInvitesCallback*  completionDelegate) ;

/// @brief Method RegisterPlayers, addr 0x1804f50c0, size 0x240, virtual false, abstract: false, final false
inline void RegisterPlayers(::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallback*  completionDelegate) ;

/// @brief Method RejectInvite, addr 0x1804f5300, size 0x230, virtual false, abstract: false, final false
inline void RejectInvite(::by_ref<::Epic::OnlineServices::Sessions::RejectInviteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnRejectInviteCallback*  completionDelegate) ;

/// @brief Method RemoveNotifyJoinSessionAccepted, addr 0x1804f5530, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyJoinSessionAccepted(uint64_t  inId) ;

/// @brief Method RemoveNotifyLeaveSessionRequested, addr 0x1804f5560, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyLeaveSessionRequested(uint64_t  inId) ;

/// @brief Method RemoveNotifySendSessionNativeInviteRequested, addr 0x1804f5590, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifySendSessionNativeInviteRequested(uint64_t  inId) ;

/// @brief Method RemoveNotifySessionInviteAccepted, addr 0x1804f55c0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifySessionInviteAccepted(uint64_t  inId) ;

/// @brief Method RemoveNotifySessionInviteReceived, addr 0x1804f55f0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifySessionInviteReceived(uint64_t  inId) ;

/// @brief Method RemoveNotifySessionInviteRejected, addr 0x1804f5620, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifySessionInviteRejected(uint64_t  inId) ;

/// @brief Method SendInvite, addr 0x1804f5650, size 0x250, virtual false, abstract: false, final false
inline void SendInvite(::by_ref<::Epic::OnlineServices::Sessions::SendInviteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnSendInviteCallback*  completionDelegate) ;

/// @brief Method StartSession, addr 0x1804f58a0, size 0x200, virtual false, abstract: false, final false
inline void StartSession(::by_ref<::Epic::OnlineServices::Sessions::StartSessionOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnStartSessionCallback*  completionDelegate) ;

/// @brief Method UnregisterPlayers, addr 0x1804f5aa0, size 0x240, virtual false, abstract: false, final false
inline void UnregisterPlayers(::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*  completionDelegate) ;

/// @brief Method UpdateSession, addr 0x1804f5d80, size 0x200, virtual false, abstract: false, final false
inline void UpdateSession(::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::OnUpdateSessionCallback*  completionDelegate) ;

/// @brief Method UpdateSessionModification, addr 0x1804f5ce0, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result UpdateSessionModification(::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionModificationOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::SessionModification*>  outSessionModificationHandle) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_SEARCH_BUCKET_ID() ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_SEARCH_EMPTY_SERVERS_ONLY() ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_SEARCH_MINSLOTSAVAILABLE() ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_SEARCH_NONEMPTY_SERVERS_ONLY() ;

static inline void setStaticF_SEARCH_BUCKET_ID(::Epic::OnlineServices::Utf8String*  value) ;

static inline void setStaticF_SEARCH_EMPTY_SERVERS_ONLY(::Epic::OnlineServices::Utf8String*  value) ;

static inline void setStaticF_SEARCH_MINSLOTSAVAILABLE(::Epic::OnlineServices::Utf8String*  value) ;

static inline void setStaticF_SEARCH_NONEMPTY_SERVERS_ONLY(::Epic::OnlineServices::Utf8String*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsInterface(SessionsInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsInterface(SessionsInterface const& ) = delete;

/// @brief Field ACTIVESESSION_COPYINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ACTIVESESSION_COPYINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ACTIVESESSION_GETREGISTEREDPLAYERBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ACTIVESESSION_GETREGISTEREDPLAYERBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ACTIVESESSION_GETREGISTEREDPLAYERCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ACTIVESESSION_GETREGISTEREDPLAYERCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ACTIVESESSION_INFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ACTIVESESSION_INFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYJOINSESSIONACCEPTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYJOINSESSIONACCEPTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYLEAVESESSIONREQUESTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYLEAVESESSIONREQUESTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYSENDSESSIONNATIVEINVITEREQUESTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYSENDSESSIONNATIVEINVITEREQUESTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYSESSIONINVITEACCEPTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYSESSIONINVITEACCEPTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYSESSIONINVITERECEIVED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYSESSIONINVITERECEIVED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYSESSIONINVITEREJECTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYSESSIONINVITEREJECTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ATTRIBUTEDATA_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ATTRIBUTEDATA_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYACTIVESESSIONHANDLE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYACTIVESESSIONHANDLE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYSESSIONHANDLEBYINVITEID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYSESSIONHANDLEBYINVITEID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYSESSIONHANDLEBYUIEVENTID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYSESSIONHANDLEBYUIEVENTID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYSESSIONHANDLEFORPRESENCE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYSESSIONHANDLEFORPRESENCE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CREATESESSIONMODIFICATION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CREATESESSIONMODIFICATION_API_LATEST{static_cast<int32_t>(0x5)};

/// @brief Field CREATESESSIONSEARCH_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CREATESESSIONSEARCH_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field DESTROYSESSION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DESTROYSESSION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field DUMPSESSIONSTATE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DUMPSESSIONSTATE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ENDSESSION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ENDSESSION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETINVITECOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETINVITECOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETINVITEIDBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETINVITEIDBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field INVITEID_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  INVITEID_MAX_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field ISUSERINSESSION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ISUSERINSESSION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field JOINSESSION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  JOINSESSION_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field MAXREGISTEREDPLAYERS offset 0xffffffff size 0x4
static constexpr int32_t  MAXREGISTEREDPLAYERS{static_cast<int32_t>(0x3e8)};

/// @brief Field MAX_SEARCH_RESULTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_SEARCH_RESULTS{static_cast<int32_t>(0xc8)};

/// @brief Field QUERYINVITES_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYINVITES_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field REGISTERPLAYERS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  REGISTERPLAYERS_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field REJECTINVITE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  REJECTINVITE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SENDINVITE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SENDINVITE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONATTRIBUTEDATA_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONATTRIBUTEDATA_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONATTRIBUTE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONATTRIBUTE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONDETAILS_ATTRIBUTE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONDETAILS_ATTRIBUTE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONDETAILS_COPYINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONDETAILS_COPYINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONDETAILS_COPYSESSIONATTRIBUTEBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONDETAILS_COPYSESSIONATTRIBUTEBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONDETAILS_COPYSESSIONATTRIBUTEBYKEY_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONDETAILS_COPYSESSIONATTRIBUTEBYKEY_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONDETAILS_GETSESSIONATTRIBUTECOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONDETAILS_GETSESSIONATTRIBUTECOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONDETAILS_INFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONDETAILS_INFO_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field SESSIONDETAILS_SETTINGS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONDETAILS_SETTINGS_API_LATEST{static_cast<int32_t>(0x4)};

/// @brief Field SESSIONMODIFICATION_ADDATTRIBUTE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONMODIFICATION_ADDATTRIBUTE_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field SESSIONMODIFICATION_MAX_SESSIONIDOVERRIDE_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONMODIFICATION_MAX_SESSIONIDOVERRIDE_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field SESSIONMODIFICATION_MAX_SESSION_ATTRIBUTES offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONMODIFICATION_MAX_SESSION_ATTRIBUTES{static_cast<int32_t>(0x40)};

/// @brief Field SESSIONMODIFICATION_MAX_SESSION_ATTRIBUTE_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONMODIFICATION_MAX_SESSION_ATTRIBUTE_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field SESSIONMODIFICATION_MIN_SESSIONIDOVERRIDE_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONMODIFICATION_MIN_SESSIONIDOVERRIDE_LENGTH{static_cast<int32_t>(0x10)};

/// @brief Field SESSIONMODIFICATION_REMOVEATTRIBUTE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONMODIFICATION_REMOVEATTRIBUTE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONMODIFICATION_SETALLOWEDPLATFORMIDS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONMODIFICATION_SETALLOWEDPLATFORMIDS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONMODIFICATION_SETBUCKETID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONMODIFICATION_SETBUCKETID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONMODIFICATION_SETHOSTADDRESS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONMODIFICATION_SETHOSTADDRESS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONMODIFICATION_SETINVITESALLOWED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONMODIFICATION_SETINVITESALLOWED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONMODIFICATION_SETJOININPROGRESSALLOWED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONMODIFICATION_SETJOININPROGRESSALLOWED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONMODIFICATION_SETMAXPLAYERS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONMODIFICATION_SETMAXPLAYERS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONMODIFICATION_SETPERMISSIONLEVEL_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONMODIFICATION_SETPERMISSIONLEVEL_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONSEARCH_COPYSEARCHRESULTBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONSEARCH_COPYSEARCHRESULTBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONSEARCH_FIND_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONSEARCH_FIND_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field SESSIONSEARCH_GETSEARCHRESULTCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONSEARCH_GETSEARCHRESULTCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONSEARCH_REMOVEPARAMETER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONSEARCH_REMOVEPARAMETER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONSEARCH_SETMAXSEARCHRESULTS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONSEARCH_SETMAXSEARCHRESULTS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONSEARCH_SETPARAMETER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONSEARCH_SETPARAMETER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONSEARCH_SETSESSIONID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONSEARCH_SETSESSIONID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SESSIONSEARCH_SETTARGETUSERID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SESSIONSEARCH_SETTARGETUSERID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field STARTSESSION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  STARTSESSION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UNREGISTERPLAYERS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UNREGISTERPLAYERS_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field UPDATESESSIONMODIFICATION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UPDATESESSIONMODIFICATION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UPDATESESSION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UPDATESESSION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7857};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionsInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
