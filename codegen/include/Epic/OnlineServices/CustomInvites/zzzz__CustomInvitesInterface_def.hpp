#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/CustomInvitesInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomInvitesInterface)
namespace Epic::OnlineServices::CustomInvites {
struct AcceptRequestToJoinOptions;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyCustomInviteAcceptedOptions;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyCustomInviteReceivedOptions;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyCustomInviteRejectedOptions;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyRequestToJoinAcceptedOptions;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyRequestToJoinReceivedOptions;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyRequestToJoinRejectedOptions;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifyRequestToJoinResponseReceivedOptions;
}
namespace Epic::OnlineServices::CustomInvites {
struct AddNotifySendCustomNativeInviteRequestedOptions;
}
namespace Epic::OnlineServices::CustomInvites {
struct FinalizeInviteOptions;
}
namespace Epic::OnlineServices::CustomInvites {
class OnAcceptRequestToJoinCallback;
}
namespace Epic::OnlineServices::CustomInvites {
class OnCustomInviteAcceptedCallback;
}
namespace Epic::OnlineServices::CustomInvites {
class OnCustomInviteReceivedCallback;
}
namespace Epic::OnlineServices::CustomInvites {
class OnCustomInviteRejectedCallback;
}
namespace Epic::OnlineServices::CustomInvites {
class OnRejectRequestToJoinCallback;
}
namespace Epic::OnlineServices::CustomInvites {
class OnRequestToJoinAcceptedCallback;
}
namespace Epic::OnlineServices::CustomInvites {
class OnRequestToJoinReceivedCallback;
}
namespace Epic::OnlineServices::CustomInvites {
class OnRequestToJoinRejectedCallback;
}
namespace Epic::OnlineServices::CustomInvites {
class OnRequestToJoinResponseReceivedCallback;
}
namespace Epic::OnlineServices::CustomInvites {
class OnSendCustomInviteCallback;
}
namespace Epic::OnlineServices::CustomInvites {
class OnSendCustomNativeInviteRequestedCallback;
}
namespace Epic::OnlineServices::CustomInvites {
class OnSendRequestToJoinCallback;
}
namespace Epic::OnlineServices::CustomInvites {
struct RejectRequestToJoinOptions;
}
namespace Epic::OnlineServices::CustomInvites {
struct SendCustomInviteOptions;
}
namespace Epic::OnlineServices::CustomInvites {
struct SendRequestToJoinOptions;
}
namespace Epic::OnlineServices::CustomInvites {
struct SetCustomInviteOptions;
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
namespace Epic::OnlineServices::CustomInvites {
class CustomInvitesInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*, "Epic.OnlineServices.CustomInvites", "CustomInvitesInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::CustomInvites {
// Is value type: false
// CS Name: Epic.OnlineServices.CustomInvites.CustomInvitesInterface
class CORDL_TYPE CustomInvitesInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method AcceptRequestToJoin, addr 0x1805124c0, size 0x230, virtual false, abstract: false, final false
inline void AcceptRequestToJoin(::by_ref<::Epic::OnlineServices::CustomInvites::AcceptRequestToJoinOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallback*  completionDelegate) ;

/// @brief Method AddNotifyCustomInviteAccepted, addr 0x1805126f0, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyCustomInviteAccepted(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteAcceptedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*  notificationFn) ;

/// @brief Method AddNotifyCustomInviteReceived, addr 0x1805128e0, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyCustomInviteReceived(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallback*  notificationFn) ;

/// @brief Method AddNotifyCustomInviteRejected, addr 0x180512ad0, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyCustomInviteRejected(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnCustomInviteRejectedCallback*  notificationFn) ;

/// @brief Method AddNotifyRequestToJoinAccepted, addr 0x180512cc0, size 0x100, virtual false, abstract: false, final false
inline uint64_t AddNotifyRequestToJoinAccepted(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinAcceptedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinAcceptedCallback*  notificationFn) ;

/// @brief Method AddNotifyRequestToJoinReceived, addr 0x180512dc0, size 0x100, virtual false, abstract: false, final false
inline uint64_t AddNotifyRequestToJoinReceived(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinReceivedCallback*  notificationFn) ;

/// @brief Method AddNotifyRequestToJoinRejected, addr 0x180512ec0, size 0x100, virtual false, abstract: false, final false
inline uint64_t AddNotifyRequestToJoinRejected(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinRejectedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallback*  notificationFn) ;

/// @brief Method AddNotifyRequestToJoinResponseReceived, addr 0x180512fc0, size 0x100, virtual false, abstract: false, final false
inline uint64_t AddNotifyRequestToJoinResponseReceived(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*  notificationFn) ;

/// @brief Method AddNotifySendCustomNativeInviteRequested, addr 0x1805130c0, size 0x100, virtual false, abstract: false, final false
inline uint64_t AddNotifySendCustomNativeInviteRequested(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifySendCustomNativeInviteRequestedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*  notificationFn) ;

/// @brief Method FinalizeInvite, addr 0x1805131c0, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result FinalizeInvite(::by_ref<::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions>  options) ;

static inline ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface* New_ctor() ;

static inline ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method RejectRequestToJoin, addr 0x180513280, size 0x200, virtual false, abstract: false, final false
inline void RejectRequestToJoin(::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallback*  completionDelegate) ;

/// @brief Method RemoveNotifyCustomInviteAccepted, addr 0x180513480, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyCustomInviteAccepted(uint64_t  inId) ;

/// @brief Method RemoveNotifyCustomInviteReceived, addr 0x1805134b0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyCustomInviteReceived(uint64_t  inId) ;

/// @brief Method RemoveNotifyCustomInviteRejected, addr 0x1805134e0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyCustomInviteRejected(uint64_t  inId) ;

/// @brief Method RemoveNotifyRequestToJoinAccepted, addr 0x180513510, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyRequestToJoinAccepted(uint64_t  inId) ;

/// @brief Method RemoveNotifyRequestToJoinReceived, addr 0x180513540, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyRequestToJoinReceived(uint64_t  inId) ;

/// @brief Method RemoveNotifyRequestToJoinRejected, addr 0x180513570, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyRequestToJoinRejected(uint64_t  inId) ;

/// @brief Method RemoveNotifyRequestToJoinResponseReceived, addr 0x1805135a0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyRequestToJoinResponseReceived(uint64_t  inId) ;

/// @brief Method RemoveNotifySendCustomNativeInviteRequested, addr 0x1805135d0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifySendCustomNativeInviteRequested(uint64_t  inId) ;

/// @brief Method SendCustomInvite, addr 0x180513600, size 0x100, virtual false, abstract: false, final false
inline void SendCustomInvite(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallback*  completionDelegate) ;

/// @brief Method SendRequestToJoin, addr 0x180513700, size 0x100, virtual false, abstract: false, final false
inline void SendRequestToJoin(::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallback*  completionDelegate) ;

/// @brief Method SetCustomInvite, addr 0x180513800, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetCustomInvite(::by_ref<::Epic::OnlineServices::CustomInvites::SetCustomInviteOptions>  options) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomInvitesInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomInvitesInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomInvitesInterface(CustomInvitesInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomInvitesInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomInvitesInterface(CustomInvitesInterface const& ) = delete;

/// @brief Field ACCEPTREQUESTTOJOIN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ACCEPTREQUESTTOJOIN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYCUSTOMINVITEACCEPTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYCUSTOMINVITEACCEPTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYCUSTOMINVITERECEIVED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYCUSTOMINVITERECEIVED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYCUSTOMINVITEREJECTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYCUSTOMINVITEREJECTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYREQUESTTOJOINACCEPTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYREQUESTTOJOINACCEPTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYREQUESTTOJOINRECEIVED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYREQUESTTOJOINRECEIVED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYREQUESTTOJOINREJECTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYREQUESTTOJOINREJECTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYREQUESTTOJOINRESPONSERECEIVED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYREQUESTTOJOINRESPONSERECEIVED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYSENDCUSTOMNATIVEINVITEREQUESTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYSENDCUSTOMNATIVEINVITEREQUESTED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field FINALIZEINVITE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  FINALIZEINVITE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field MAX_PAYLOAD_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  MAX_PAYLOAD_LENGTH{static_cast<int32_t>(0x1f4)};

/// @brief Field REJECTREQUESTTOJOIN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  REJECTREQUESTTOJOIN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SENDCUSTOMINVITE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SENDCUSTOMINVITE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SENDREQUESTTOJOIN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SENDREQUESTTOJOIN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETCUSTOMINVITE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETCUSTOMINVITE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9039};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::CustomInvites::CustomInvitesInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
