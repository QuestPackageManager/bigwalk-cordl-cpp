#pragma once
// IWYU pragma private; include "Dissonance/Networking/BaseClient_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseClient_3)
namespace Dissonance::Networking::Client {
struct ClientStatus;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
class ConnectionNegotiator_1;
}
namespace Dissonance::Networking::Client {
class EventQueue;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
class IClient_1;
}
namespace Dissonance::Networking::Client {
class PacketDelaySimulator;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
class SendQueue_1;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
class SlaveClientCollection_1;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
class TextReceiver_1;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
class TextSender_1;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
class VoiceReceiver_1;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
class VoiceSender_1;
}
namespace Dissonance::Networking {
template<typename TServer,typename TClient,typename TPeer>
class BaseClient_3___c;
}
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace Dissonance::Networking {
class ICommsNetworkState;
}
namespace Dissonance::Networking {
struct MessageTypes;
}
namespace Dissonance::Networking {
struct PacketReader;
}
namespace Dissonance::Networking {
struct RoomEvent;
}
namespace Dissonance::Networking {
struct TextMessage;
}
namespace Dissonance::Networking {
class TrafficCounter;
}
namespace Dissonance::Networking {
struct VoicePacket;
}
namespace Dissonance {
struct ChannelType;
}
namespace Dissonance {
struct CodecSettings;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
struct RemoteChannel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Networking {
template<typename TServer,typename TClient,typename TPeer>
class BaseClient_3;
}
namespace Dissonance::Networking {
template<typename TServer,typename TClient,typename TPeer>
class BaseClient_3___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::BaseClient_3);
MARK_GEN_REF_T_PTR(::Dissonance::Networking::BaseClient_3___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::BaseClient_3, "Dissonance.Networking", "BaseClient`3");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::BaseClient_3___c, "Dissonance.Networking", "BaseClient`3/<>c");
// Dependencies System.Object
namespace Dissonance::Networking {
// cpp template
template<typename TServer,typename TClient,typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.BaseClient`3/<>c<TServer,TClient,TPeer>
class CORDL_TYPE BaseClient_3___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*  __9;

/// @brief Field <>9__62_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__62_0, put=setStaticF___9__62_0)) ::System::Func_1<::ArrayW<uint8_t>>*  __9__62_0;

/// @brief Field <>9__62_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__62_1, put=setStaticF___9__62_1)) ::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  __9__62_1;

static inline ::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>* New_ctor() ;

/// @brief Method <.ctor>b__62_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> __ctor_b__62_0() ;

/// @brief Method <.ctor>b__62_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>* __ctor_b__62_1() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>* getStaticF___9() ;

static inline ::System::Func_1<::ArrayW<uint8_t>>* getStaticF___9__62_0() ;

static inline ::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* getStaticF___9__62_1() ;

static inline void setStaticF___9(::Dissonance::Networking::BaseClient_3___c<TServer,TClient,TPeer>*  value) ;

static inline void setStaticF___9__62_0(::System::Func_1<::ArrayW<uint8_t>>*  value) ;

static inline void setStaticF___9__62_1(::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseClient_3___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseClient_3___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseClient_3___c(BaseClient_3___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseClient_3___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseClient_3___c(BaseClient_3___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16863};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking
// Dependencies System.Object
namespace Dissonance::Networking {
// cpp template
template<typename TServer,typename TClient,typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.BaseClient`3<TServer,TClient,TPeer>
class CORDL_TYPE BaseClient_3 : public ::System::Object {
public:
// Declarations
using __c = ::Dissonance::Networking::BaseClient_3___c<TServer, TClient, TPeer>;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

/// @brief Field Log, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Log, put=__cordl_internal_set_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_RecvClientState)) ::Dissonance::Networking::TrafficCounter*  RecvClientState;

 __declspec(property(get=get_RecvDeltaState)) ::Dissonance::Networking::TrafficCounter*  RecvDeltaState;

 __declspec(property(get=get_RecvHandshakeP2P)) ::Dissonance::Networking::TrafficCounter*  RecvHandshakeP2P;

 __declspec(property(get=get_RecvHandshakeResponse)) ::Dissonance::Networking::TrafficCounter*  RecvHandshakeResponse;

 __declspec(property(get=get_RecvRemoveClient)) ::Dissonance::Networking::TrafficCounter*  RecvRemoveClient;

 __declspec(property(get=get_RecvTextData)) ::Dissonance::Networking::TrafficCounter*  RecvTextData;

 __declspec(property(get=get_RecvVoiceData)) ::Dissonance::Networking::TrafficCounter*  RecvVoiceData;

 __declspec(property(get=get_SentServerTraffic)) ::Dissonance::Networking::TrafficCounter*  SentServerTraffic;

/// @brief Field _disconnected, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__disconnected, put=__cordl_internal_set__disconnected)) bool  _disconnected;

/// @brief Field _error, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__error, put=__cordl_internal_set__error)) bool  _error;

/// @brief Field _events, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::Dissonance::Networking::Client::EventQueue*  _events;

/// @brief Field _lossSimulator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__lossSimulator, put=__cordl_internal_set__lossSimulator)) ::Dissonance::Networking::Client::PacketDelaySimulator*  _lossSimulator;

/// @brief Field _peers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__peers, put=__cordl_internal_set__peers)) ::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*  _peers;

/// @brief Field _recvClientState, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__recvClientState, put=__cordl_internal_set__recvClientState)) ::Dissonance::Networking::TrafficCounter*  _recvClientState;

/// @brief Field _recvDeltaState, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__recvDeltaState, put=__cordl_internal_set__recvDeltaState)) ::Dissonance::Networking::TrafficCounter*  _recvDeltaState;

/// @brief Field _recvHandshakeP2P, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__recvHandshakeP2P, put=__cordl_internal_set__recvHandshakeP2P)) ::Dissonance::Networking::TrafficCounter*  _recvHandshakeP2P;

/// @brief Field _recvHandshakeResponse, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__recvHandshakeResponse, put=__cordl_internal_set__recvHandshakeResponse)) ::Dissonance::Networking::TrafficCounter*  _recvHandshakeResponse;

/// @brief Field _recvRemoveClient, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__recvRemoveClient, put=__cordl_internal_set__recvRemoveClient)) ::Dissonance::Networking::TrafficCounter*  _recvRemoveClient;

/// @brief Field _recvTextData, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__recvTextData, put=__cordl_internal_set__recvTextData)) ::Dissonance::Networking::TrafficCounter*  _recvTextData;

/// @brief Field _recvVoiceData, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__recvVoiceData, put=__cordl_internal_set__recvVoiceData)) ::Dissonance::Networking::TrafficCounter*  _recvVoiceData;

/// @brief Field _sendQueue, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__sendQueue, put=__cordl_internal_set__sendQueue)) ::Dissonance::Networking::Client::SendQueue_1<TPeer>*  _sendQueue;

/// @brief Field _sentServer, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__sentServer, put=__cordl_internal_set__sentServer)) ::Dissonance::Networking::TrafficCounter*  _sentServer;

/// @brief Field _serverNegotiator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__serverNegotiator, put=__cordl_internal_set__serverNegotiator)) ::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*  _serverNegotiator;

/// @brief Field _textReceiver, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__textReceiver, put=__cordl_internal_set__textReceiver)) ::Dissonance::Networking::Client::TextReceiver_1<TPeer>*  _textReceiver;

/// @brief Field _textSender, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__textSender, put=__cordl_internal_set__textSender)) ::Dissonance::Networking::Client::TextSender_1<TPeer>*  _textSender;

/// @brief Field _voiceReceiver, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceReceiver, put=__cordl_internal_set__voiceReceiver)) ::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*  _voiceReceiver;

/// @brief Field _voiceSender, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceSender, put=__cordl_internal_set__voiceSender)) ::Dissonance::Networking::Client::VoiceSender_1<TPeer>*  _voiceSender;

/// @brief Convert operator to "::Dissonance::Networking::Client::IClient_1<TPeer>"
constexpr operator  ::Dissonance::Networking::Client::IClient_1<TPeer>*() noexcept;

/// @brief Method CheckSessionId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool CheckSessionId(::by_ref<::Dissonance::Networking::PacketReader>  reader, ::Dissonance::Networking::MessageTypes  type) ;

/// @brief Method Connect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Connect() ;

/// @brief Method Connected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Connected() ;

/// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Disconnect() ;

/// @brief Method Dissonance.Networking.Client.IClient<TPeer>.SendReliable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dissonance_Networking_Client_IClient_TPeer__SendReliable(::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method Dissonance.Networking.Client.IClient<TPeer>.SendReliableP2P, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dissonance_Networking_Client_IClient_TPeer__SendReliableP2P(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method Dissonance.Networking.Client.IClient<TPeer>.SendUnreliable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dissonance_Networking_Client_IClient_TPeer__SendUnreliable(::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method Dissonance.Networking.Client.IClient<TPeer>.SendUnreliableP2P, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dissonance_Networking_Client_IClient_TPeer__SendUnreliableP2P(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method FatalError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void FatalError(::StringW  reason) ;

/// @brief Method NetworkReceivedPacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Nullable_1<uint16_t> NetworkReceivedPacket(::System::ArraySegment_1<uint8_t>  data) ;

static inline ::Dissonance::Networking::BaseClient_3<TServer,TClient,TPeer>* New_ctor(::Dissonance::Networking::ICommsNetworkState*  network) ;

/// @brief Method OnAddedClient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnAddedClient(::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*  client) ;

/// @brief Method OnMetClient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnMetClient(::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*  client) ;

/// @brief Method OnServerAssignedSessionId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnServerAssignedSessionId(uint32_t  session, uint16_t  id) ;

/// @brief Method ProcessReceivedPacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Nullable_1<uint16_t> ProcessReceivedPacket(::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method ReadMessages, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ReadMessages() ;

/// @brief Method ReceiveHandshakeP2P, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ReceiveHandshakeP2P(uint16_t  id, TPeer  connection) ;

/// @brief Method RunUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool RunUpdate(::System::DateTime  utcNow) ;

/// @brief Method SendReliable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendReliable(::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method SendReliableP2P, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendReliableP2P(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method SendTextData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SendTextData(::StringW  data, ::Dissonance::ChannelType  type, ::StringW  recipient) ;

/// @brief Method SendUnreliable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendUnreliable(::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method SendUnreliableP2P, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendUnreliableP2P(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method SendVoiceData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SendVoiceData(::System::ArraySegment_1<uint8_t>  encodedAudio) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::Networking::Client::ClientStatus Update() ;

/// @brief Method WriteHandshakeP2P, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> WriteHandshakeP2P(uint32_t  sessionId, uint16_t  clientId) ;

constexpr ::Dissonance::Log* const& __cordl_internal_get_Log() const;

constexpr ::Dissonance::Log*& __cordl_internal_get_Log() ;

constexpr bool const& __cordl_internal_get__disconnected() const;

constexpr bool& __cordl_internal_get__disconnected() ;

constexpr bool const& __cordl_internal_get__error() const;

constexpr bool& __cordl_internal_get__error() ;

constexpr ::Dissonance::Networking::Client::EventQueue* const& __cordl_internal_get__events() const;

constexpr ::Dissonance::Networking::Client::EventQueue*& __cordl_internal_get__events() ;

constexpr ::Dissonance::Networking::Client::PacketDelaySimulator* const& __cordl_internal_get__lossSimulator() const;

constexpr ::Dissonance::Networking::Client::PacketDelaySimulator*& __cordl_internal_get__lossSimulator() ;

constexpr ::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>* const& __cordl_internal_get__peers() const;

constexpr ::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*& __cordl_internal_get__peers() ;

constexpr ::Dissonance::Networking::TrafficCounter* const& __cordl_internal_get__recvClientState() const;

constexpr ::Dissonance::Networking::TrafficCounter*& __cordl_internal_get__recvClientState() ;

constexpr ::Dissonance::Networking::TrafficCounter* const& __cordl_internal_get__recvDeltaState() const;

constexpr ::Dissonance::Networking::TrafficCounter*& __cordl_internal_get__recvDeltaState() ;

constexpr ::Dissonance::Networking::TrafficCounter* const& __cordl_internal_get__recvHandshakeP2P() const;

constexpr ::Dissonance::Networking::TrafficCounter*& __cordl_internal_get__recvHandshakeP2P() ;

constexpr ::Dissonance::Networking::TrafficCounter* const& __cordl_internal_get__recvHandshakeResponse() const;

constexpr ::Dissonance::Networking::TrafficCounter*& __cordl_internal_get__recvHandshakeResponse() ;

constexpr ::Dissonance::Networking::TrafficCounter* const& __cordl_internal_get__recvRemoveClient() const;

constexpr ::Dissonance::Networking::TrafficCounter*& __cordl_internal_get__recvRemoveClient() ;

constexpr ::Dissonance::Networking::TrafficCounter* const& __cordl_internal_get__recvTextData() const;

constexpr ::Dissonance::Networking::TrafficCounter*& __cordl_internal_get__recvTextData() ;

constexpr ::Dissonance::Networking::TrafficCounter* const& __cordl_internal_get__recvVoiceData() const;

constexpr ::Dissonance::Networking::TrafficCounter*& __cordl_internal_get__recvVoiceData() ;

constexpr ::Dissonance::Networking::Client::SendQueue_1<TPeer>* const& __cordl_internal_get__sendQueue() const;

constexpr ::Dissonance::Networking::Client::SendQueue_1<TPeer>*& __cordl_internal_get__sendQueue() ;

constexpr ::Dissonance::Networking::TrafficCounter* const& __cordl_internal_get__sentServer() const;

constexpr ::Dissonance::Networking::TrafficCounter*& __cordl_internal_get__sentServer() ;

constexpr ::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>* const& __cordl_internal_get__serverNegotiator() const;

constexpr ::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*& __cordl_internal_get__serverNegotiator() ;

constexpr ::Dissonance::Networking::Client::TextReceiver_1<TPeer>* const& __cordl_internal_get__textReceiver() const;

constexpr ::Dissonance::Networking::Client::TextReceiver_1<TPeer>*& __cordl_internal_get__textReceiver() ;

constexpr ::Dissonance::Networking::Client::TextSender_1<TPeer>* const& __cordl_internal_get__textSender() const;

constexpr ::Dissonance::Networking::Client::TextSender_1<TPeer>*& __cordl_internal_get__textSender() ;

constexpr ::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>* const& __cordl_internal_get__voiceReceiver() const;

constexpr ::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*& __cordl_internal_get__voiceReceiver() ;

constexpr ::Dissonance::Networking::Client::VoiceSender_1<TPeer>* const& __cordl_internal_get__voiceSender() const;

constexpr ::Dissonance::Networking::Client::VoiceSender_1<TPeer>*& __cordl_internal_get__voiceSender() ;

constexpr void __cordl_internal_set_Log(::Dissonance::Log*  value) ;

constexpr void __cordl_internal_set__disconnected(bool  value) ;

constexpr void __cordl_internal_set__error(bool  value) ;

constexpr void __cordl_internal_set__events(::Dissonance::Networking::Client::EventQueue*  value) ;

constexpr void __cordl_internal_set__lossSimulator(::Dissonance::Networking::Client::PacketDelaySimulator*  value) ;

constexpr void __cordl_internal_set__peers(::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__recvClientState(::Dissonance::Networking::TrafficCounter*  value) ;

constexpr void __cordl_internal_set__recvDeltaState(::Dissonance::Networking::TrafficCounter*  value) ;

constexpr void __cordl_internal_set__recvHandshakeP2P(::Dissonance::Networking::TrafficCounter*  value) ;

constexpr void __cordl_internal_set__recvHandshakeResponse(::Dissonance::Networking::TrafficCounter*  value) ;

constexpr void __cordl_internal_set__recvRemoveClient(::Dissonance::Networking::TrafficCounter*  value) ;

constexpr void __cordl_internal_set__recvTextData(::Dissonance::Networking::TrafficCounter*  value) ;

constexpr void __cordl_internal_set__recvVoiceData(::Dissonance::Networking::TrafficCounter*  value) ;

constexpr void __cordl_internal_set__sendQueue(::Dissonance::Networking::Client::SendQueue_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__sentServer(::Dissonance::Networking::TrafficCounter*  value) ;

constexpr void __cordl_internal_set__serverNegotiator(::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__textReceiver(::Dissonance::Networking::Client::TextReceiver_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__textSender(::Dissonance::Networking::Client::TextSender_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__voiceReceiver(::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__voiceSender(::Dissonance::Networking::Client::VoiceSender_1<TPeer>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::ICommsNetworkState*  network) ;

/// @brief Method add_PlayerEnteredRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method add_PlayerExitedRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method add_PlayerJoined, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value) ;

/// @brief Method add_PlayerLeft, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_PlayerLeft(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_PlayerStartedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_PlayerStoppedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_TextMessageReceived, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_TextMessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value) ;

/// @brief Method add_VoicePacketReceived, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

/// @brief Method get_IsConnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsConnected() ;

/// @brief Method get_RecvClientState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::TrafficCounter* get_RecvClientState() ;

/// @brief Method get_RecvDeltaState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::TrafficCounter* get_RecvDeltaState() ;

/// @brief Method get_RecvHandshakeP2P, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::TrafficCounter* get_RecvHandshakeP2P() ;

/// @brief Method get_RecvHandshakeResponse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::TrafficCounter* get_RecvHandshakeResponse() ;

/// @brief Method get_RecvRemoveClient, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::TrafficCounter* get_RecvRemoveClient() ;

/// @brief Method get_RecvTextData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::TrafficCounter* get_RecvTextData() ;

/// @brief Method get_RecvVoiceData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::TrafficCounter* get_RecvVoiceData() ;

/// @brief Method get_SentServerTraffic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::TrafficCounter* get_SentServerTraffic() ;

/// @brief Convert to "::Dissonance::Networking::Client::IClient_1<TPeer>"
constexpr ::Dissonance::Networking::Client::IClient_1<TPeer>* i___Dissonance__Networking__Client__IClient_1_TPeer_() noexcept;

/// @brief Method remove_PlayerEnteredRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method remove_PlayerExitedRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method remove_PlayerJoined, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value) ;

/// @brief Method remove_PlayerLeft, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_PlayerLeft(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_PlayerStartedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_PlayerStoppedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_TextMessageReceived, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_TextMessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value) ;

/// @brief Method remove_VoicePacketReceived, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseClient_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseClient_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseClient_3(BaseClient_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseClient_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseClient_3(BaseClient_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16864};

/// @brief Field Log, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Log*  ___Log;

/// @brief Field _disconnected, offset: 0x18, size: 0x1, def value: None
 bool  ____disconnected;

/// @brief Field _error, offset: 0x19, size: 0x1, def value: None
 bool  ____error;

/// @brief Field _events, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Networking::Client::EventQueue*  ____events;

/// @brief Field _peers, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Networking::Client::SlaveClientCollection_1<TPeer>*  ____peers;

/// @brief Field _serverNegotiator, offset: 0x30, size: 0x8, def value: None
 ::Dissonance::Networking::Client::ConnectionNegotiator_1<TPeer>*  ____serverNegotiator;

/// @brief Field _sendQueue, offset: 0x38, size: 0x8, def value: None
 ::Dissonance::Networking::Client::SendQueue_1<TPeer>*  ____sendQueue;

/// @brief Field _lossSimulator, offset: 0x40, size: 0x8, def value: None
 ::Dissonance::Networking::Client::PacketDelaySimulator*  ____lossSimulator;

/// @brief Field _voiceReceiver, offset: 0x48, size: 0x8, def value: None
 ::Dissonance::Networking::Client::VoiceReceiver_1<TPeer>*  ____voiceReceiver;

/// @brief Field _voiceSender, offset: 0x50, size: 0x8, def value: None
 ::Dissonance::Networking::Client::VoiceSender_1<TPeer>*  ____voiceSender;

/// @brief Field _textReceiver, offset: 0x58, size: 0x8, def value: None
 ::Dissonance::Networking::Client::TextReceiver_1<TPeer>*  ____textReceiver;

/// @brief Field _textSender, offset: 0x60, size: 0x8, def value: None
 ::Dissonance::Networking::Client::TextSender_1<TPeer>*  ____textSender;

/// @brief Field _recvRemoveClient, offset: 0x68, size: 0x8, def value: None
 ::Dissonance::Networking::TrafficCounter*  ____recvRemoveClient;

/// @brief Field _recvVoiceData, offset: 0x70, size: 0x8, def value: None
 ::Dissonance::Networking::TrafficCounter*  ____recvVoiceData;

/// @brief Field _recvTextData, offset: 0x78, size: 0x8, def value: None
 ::Dissonance::Networking::TrafficCounter*  ____recvTextData;

/// @brief Field _recvHandshakeResponse, offset: 0x80, size: 0x8, def value: None
 ::Dissonance::Networking::TrafficCounter*  ____recvHandshakeResponse;

/// @brief Field _recvHandshakeP2P, offset: 0x88, size: 0x8, def value: None
 ::Dissonance::Networking::TrafficCounter*  ____recvHandshakeP2P;

/// @brief Field _recvClientState, offset: 0x90, size: 0x8, def value: None
 ::Dissonance::Networking::TrafficCounter*  ____recvClientState;

/// @brief Field _recvDeltaState, offset: 0x98, size: 0x8, def value: None
 ::Dissonance::Networking::TrafficCounter*  ____recvDeltaState;

/// @brief Field _sentServer, offset: 0xa0, size: 0x8, def value: None
 ::Dissonance::Networking::TrafficCounter*  ____sentServer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking
