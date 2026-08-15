#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/AntiCheatClientInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatClientInterface)
namespace Epic::OnlineServices::AntiCheatClient {
struct AddExternalIntegrityCatalogOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct AddNotifyClientIntegrityViolatedOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct AddNotifyMessageToPeerOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct AddNotifyMessageToServerOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct AddNotifyPeerActionRequiredOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct AddNotifyPeerAuthStatusChangedOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct AntiCheatClientViolationType;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct BeginSessionOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct EndSessionOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct GetModuleBuildIdOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct GetProtectMessageOutputLengthOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
class OnClientIntegrityViolatedCallback;
}
namespace Epic::OnlineServices::AntiCheatClient {
class OnMessageToPeerCallback;
}
namespace Epic::OnlineServices::AntiCheatClient {
class OnMessageToServerCallback;
}
namespace Epic::OnlineServices::AntiCheatClient {
class OnPeerActionRequiredCallback;
}
namespace Epic::OnlineServices::AntiCheatClient {
class OnPeerAuthStatusChangedCallback;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct PollStatusOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct ProtectMessageOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct ReceiveMessageFromPeerOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct ReceiveMessageFromServerOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct RegisterPeerOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct Reserved01Options;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct Reserved02Options;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct UnprotectMessageOptions;
}
namespace Epic::OnlineServices::AntiCheatClient {
struct UnregisterPeerOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
class AntiCheatClientInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*, "Epic.OnlineServices.AntiCheatClient", "AntiCheatClientInterface");
// Dependencies Epic.OnlineServices.Handle, System.IntPtr
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: false
// CS Name: Epic.OnlineServices.AntiCheatClient.AntiCheatClientInterface
class CORDL_TYPE AntiCheatClientInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Field PEER_SELF, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PEER_SELF, put=setStaticF_PEER_SELF)) ::System::IntPtr  PEER_SELF;

/// @brief Method AddExternalIntegrityCatalog, addr 0x18051ec70, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result AddExternalIntegrityCatalog(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions>  options) ;

/// @brief Method AddNotifyClientIntegrityViolated, addr 0x18051ece0, size 0x100, virtual false, abstract: false, final false
inline uint64_t AddNotifyClientIntegrityViolated(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyClientIntegrityViolatedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*  notificationFn) ;

/// @brief Method AddNotifyMessageToPeer, addr 0x18051ede0, size 0x100, virtual false, abstract: false, final false
inline uint64_t AddNotifyMessageToPeer(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToPeerOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*  notificationFn) ;

/// @brief Method AddNotifyMessageToServer, addr 0x18051eee0, size 0x100, virtual false, abstract: false, final false
inline uint64_t AddNotifyMessageToServer(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToServerOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*  notificationFn) ;

/// @brief Method AddNotifyPeerActionRequired, addr 0x18051efe0, size 0x100, virtual false, abstract: false, final false
inline uint64_t AddNotifyPeerActionRequired(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerActionRequiredOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallback*  notificationFn) ;

/// @brief Method AddNotifyPeerAuthStatusChanged, addr 0x18051f0e0, size 0x100, virtual false, abstract: false, final false
inline uint64_t AddNotifyPeerAuthStatusChanged(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallback*  notificationFn) ;

/// @brief Method BeginSession, addr 0x18051f1e0, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result BeginSession(::by_ref<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>  options) ;

/// @brief Method EndSession, addr 0x18051f230, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result EndSession(::by_ref<::Epic::OnlineServices::AntiCheatClient::EndSessionOptions>  options) ;

/// @brief Method GetModuleBuildId, addr 0x18051f280, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetModuleBuildId(::by_ref<::Epic::OnlineServices::AntiCheatClient::GetModuleBuildIdOptions>  options, ::by_ref<uint32_t>  outModuleBuildId) ;

/// @brief Method GetProtectMessageOutputLength, addr 0x18051f2e0, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetProtectMessageOutputLength(::by_ref<::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptions>  options, ::by_ref<uint32_t>  outBufferSizeBytes) ;

static inline ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface* New_ctor() ;

static inline ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method PollStatus, addr 0x18051f340, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result PollStatus(::by_ref<::Epic::OnlineServices::AntiCheatClient::PollStatusOptions>  options, ::by_ref<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType>  outViolationType, ::by_ref<::Epic::OnlineServices::Utf8String*>  outMessage) ;

/// @brief Method ProtectMessage, addr 0x18051f3e0, size 0xb0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result ProtectMessage(::by_ref<::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions>  options, ::System::ArraySegment_1<uint8_t>  outBuffer, ::by_ref<uint32_t>  outBytesWritten) ;

/// @brief Method ReceiveMessageFromPeer, addr 0x18051f490, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result ReceiveMessageFromPeer(::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions>  options) ;

/// @brief Method ReceiveMessageFromServer, addr 0x18051f4e0, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result ReceiveMessageFromServer(::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>  options) ;

/// @brief Method RegisterPeer, addr 0x18051f530, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result RegisterPeer(::by_ref<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>  options) ;

/// @brief Method RemoveNotifyClientIntegrityViolated, addr 0x18051f590, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyClientIntegrityViolated(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyMessageToPeer, addr 0x18051f5c0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyMessageToPeer(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyMessageToServer, addr 0x18051f5f0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyMessageToServer(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyPeerActionRequired, addr 0x18051f620, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyPeerActionRequired(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyPeerAuthStatusChanged, addr 0x18051f650, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyPeerAuthStatusChanged(uint64_t  notificationId) ;

/// @brief Method Reserved01, addr 0x18051f680, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result Reserved01(::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved01Options>  options, ::by_ref<int32_t>  outValue) ;

/// @brief Method Reserved02, addr 0x18051f6e0, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result Reserved02(::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>  options) ;

/// @brief Method UnprotectMessage, addr 0x18051f730, size 0xb0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result UnprotectMessage(::by_ref<::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions>  options, ::System::ArraySegment_1<uint8_t>  outBuffer, ::by_ref<uint32_t>  outBytesWritten) ;

/// @brief Method UnregisterPeer, addr 0x18051f7e0, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result UnregisterPeer(::by_ref<::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions>  options) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

static inline ::System::IntPtr getStaticF_PEER_SELF() ;

static inline void setStaticF_PEER_SELF(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatClientInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AntiCheatClientInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AntiCheatClientInterface(AntiCheatClientInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AntiCheatClientInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AntiCheatClientInterface(AntiCheatClientInterface const& ) = delete;

/// @brief Field ADDEXTERNALINTEGRITYCATALOG_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDEXTERNALINTEGRITYCATALOG_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYCLIENTINTEGRITYVIOLATED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYCLIENTINTEGRITYVIOLATED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYMESSAGETOPEER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYMESSAGETOPEER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYMESSAGETOSERVER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYMESSAGETOSERVER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYPEERACTIONREQUIRED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYPEERACTIONREQUIRED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYPEERAUTHSTATUSCHANGED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYPEERAUTHSTATUSCHANGED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field BEGINSESSION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  BEGINSESSION_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field ENDSESSION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ENDSESSION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETMODULEBUILDID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETMODULEBUILDID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETPROTECTMESSAGEOUTPUTLENGTH_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETPROTECTMESSAGEOUTPUTLENGTH_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ONMESSAGETOPEERCALLBACK_MAX_MESSAGE_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  ONMESSAGETOPEERCALLBACK_MAX_MESSAGE_SIZE{static_cast<int32_t>(0x200)};

/// @brief Field ONMESSAGETOSERVERCALLBACK_MAX_MESSAGE_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  ONMESSAGETOSERVERCALLBACK_MAX_MESSAGE_SIZE{static_cast<int32_t>(0x200)};

/// @brief Field POLLSTATUS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  POLLSTATUS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field PROTECTMESSAGE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PROTECTMESSAGE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field RECEIVEMESSAGEFROMPEER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  RECEIVEMESSAGEFROMPEER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field RECEIVEMESSAGEFROMSERVER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  RECEIVEMESSAGEFROMSERVER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field REGISTERPEER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  REGISTERPEER_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field REGISTERPEER_MAX_AUTHENTICATIONTIMEOUT offset 0xffffffff size 0x4
static constexpr int32_t  REGISTERPEER_MAX_AUTHENTICATIONTIMEOUT{static_cast<int32_t>(0x78)};

/// @brief Field REGISTERPEER_MIN_AUTHENTICATIONTIMEOUT offset 0xffffffff size 0x4
static constexpr int32_t  REGISTERPEER_MIN_AUTHENTICATIONTIMEOUT{static_cast<int32_t>(0x28)};

/// @brief Field RESERVED01_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  RESERVED01_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field RESERVED02_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  RESERVED02_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UNPROTECTMESSAGE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UNPROTECTMESSAGE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UNREGISTERPEER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UNREGISTERPEER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9404};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
