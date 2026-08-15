#pragma once
// IWYU pragma private; include "Dissonance/Networking/BaseServer_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseServer_3)
namespace Dissonance::Networking::Server::Admin {
class IServerAdmin;
}
namespace Dissonance::Networking::Server::Admin {
template<typename TServer,typename TClient,typename TPeer>
class ServerAdmin_3;
}
namespace Dissonance::Networking::Server {
template<typename TPeer>
class BroadcastingClientCollection_1;
}
namespace Dissonance::Networking::Server {
template<typename TPeer>
class IServer_1;
}
namespace Dissonance::Networking::Server {
template<typename TPeer>
class ServerRelay_1;
}
namespace Dissonance::Networking::Server {
struct ServerState;
}
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace Dissonance::Networking {
struct PacketReader;
}
namespace Dissonance::Networking {
class TrafficCounter;
}
namespace Dissonance {
class Log;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Networking {
template<typename TServer,typename TClient,typename TPeer>
class BaseServer_3;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::BaseServer_3);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::BaseServer_3, "Dissonance.Networking", "BaseServer`3");
// Dependencies System.Object
namespace Dissonance::Networking {
// cpp template
template<typename TServer,typename TClient,typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.BaseServer`3<TServer,TClient,TPeer>
class CORDL_TYPE BaseServer_3 : public ::System::Object {
public:
// Declarations
/// @brief Field Log, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Log, put=__cordl_internal_set_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_RecvClientState)) ::Dissonance::Networking::TrafficCounter*  RecvClientState;

 __declspec(property(get=get_RecvDeltaChannelState)) ::Dissonance::Networking::TrafficCounter*  RecvDeltaChannelState;

 __declspec(property(get=get_RecvHandshakeRequest)) ::Dissonance::Networking::TrafficCounter*  RecvHandshakeRequest;

 __declspec(property(get=get_RecvPacketRelay)) ::Dissonance::Networking::TrafficCounter*  RecvPacketRelay;

 __declspec(property(get=get_SentTraffic)) ::Dissonance::Networking::TrafficCounter*  SentTraffic;

 __declspec(property(get=get_ServerAdmin)) ::Dissonance::Networking::Server::Admin::IServerAdmin*  ServerAdmin;

 __declspec(property(get=get_SessionId)) uint32_t  SessionId;

/// @brief Field <RecvClientState>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__RecvClientState_k__BackingField, put=__cordl_internal_set__RecvClientState_k__BackingField)) ::Dissonance::Networking::TrafficCounter*  _RecvClientState_k__BackingField;

/// @brief Field <RecvDeltaChannelState>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__RecvDeltaChannelState_k__BackingField, put=__cordl_internal_set__RecvDeltaChannelState_k__BackingField)) ::Dissonance::Networking::TrafficCounter*  _RecvDeltaChannelState_k__BackingField;

/// @brief Field <RecvHandshakeRequest>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__RecvHandshakeRequest_k__BackingField, put=__cordl_internal_set__RecvHandshakeRequest_k__BackingField)) ::Dissonance::Networking::TrafficCounter*  _RecvHandshakeRequest_k__BackingField;

/// @brief Field <RecvPacketRelay>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__RecvPacketRelay_k__BackingField, put=__cordl_internal_set__RecvPacketRelay_k__BackingField)) ::Dissonance::Networking::TrafficCounter*  _RecvPacketRelay_k__BackingField;

/// @brief Field <SentTraffic>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__SentTraffic_k__BackingField, put=__cordl_internal_set__SentTraffic_k__BackingField)) ::Dissonance::Networking::TrafficCounter*  _SentTraffic_k__BackingField;

/// @brief Field <SessionId>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__SessionId_k__BackingField, put=__cordl_internal_set__SessionId_k__BackingField)) uint32_t  _SessionId_k__BackingField;

/// @brief Field _clients, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__clients, put=__cordl_internal_set__clients)) ::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*  _clients;

/// @brief Field _disconnected, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__disconnected, put=__cordl_internal_set__disconnected)) bool  _disconnected;

/// @brief Field _error, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__error, put=__cordl_internal_set__error)) bool  _error;

/// @brief Field _relay, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__relay, put=__cordl_internal_set__relay)) ::Dissonance::Networking::Server::ServerRelay_1<TPeer>*  _relay;

/// @brief Field serverAdmin, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverAdmin, put=__cordl_internal_set_serverAdmin)) ::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*  serverAdmin;

/// @brief Convert operator to "::Dissonance::Networking::Server::IServer_1<TPeer>"
constexpr operator  ::Dissonance::Networking::Server::IServer_1<TPeer>*() noexcept;

/// @brief Method AddClient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AddClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client) ;

/// @brief Method CheckSessionId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool CheckSessionId(::by_ref<::Dissonance::Networking::PacketReader>  reader, TPeer  source) ;

/// @brief Method ClientDisconnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClientDisconnected(TPeer  connection) ;

/// @brief Method Connect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Connect() ;

/// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Disconnect() ;

/// @brief Method Dissonance.Networking.Server.IServer<TPeer>.AddClient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dissonance_Networking_Server_IServer_TPeer__AddClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client) ;

/// @brief Method Dissonance.Networking.Server.IServer<TPeer>.SendReliable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dissonance_Networking_Server_IServer_TPeer__SendReliable(TPeer  connection, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method Dissonance.Networking.Server.IServer<TPeer>.SendReliable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dissonance_Networking_Server_IServer_TPeer__SendReliable(::System::Collections::Generic::List_1<TPeer>*  connections, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method Dissonance.Networking.Server.IServer<TPeer>.SendUnreliable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dissonance_Networking_Server_IServer_TPeer__SendUnreliable(::System::Collections::Generic::List_1<TPeer>*  connections, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method FatalError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void FatalError(::StringW  reason) ;

/// @brief Method NetworkReceivedPacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void NetworkReceivedPacket(TPeer  source, ::System::ArraySegment_1<uint8_t>  data) ;

static inline ::Dissonance::Networking::BaseServer_3<TServer,TClient,TPeer>* New_ctor() ;

/// @brief Method ReadMessages, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ReadMessages() ;

/// @brief Method RunUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool RunUpdate() ;

/// @brief Method SendReliable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendReliable(TPeer  connection, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method SendReliable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendReliable(::System::Collections::Generic::List_1<TPeer>*  connections, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method SendUnreliable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendUnreliable(TPeer  connection, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method SendUnreliable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendUnreliable(::System::Collections::Generic::List_1<TPeer>*  connections, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::Networking::Server::ServerState Update() ;

constexpr ::Dissonance::Log* const& __cordl_internal_get_Log() const;

constexpr ::Dissonance::Log*& __cordl_internal_get_Log() ;

constexpr ::Dissonance::Networking::TrafficCounter* const& __cordl_internal_get__RecvClientState_k__BackingField() const;

constexpr ::Dissonance::Networking::TrafficCounter*& __cordl_internal_get__RecvClientState_k__BackingField() ;

constexpr ::Dissonance::Networking::TrafficCounter* const& __cordl_internal_get__RecvDeltaChannelState_k__BackingField() const;

constexpr ::Dissonance::Networking::TrafficCounter*& __cordl_internal_get__RecvDeltaChannelState_k__BackingField() ;

constexpr ::Dissonance::Networking::TrafficCounter* const& __cordl_internal_get__RecvHandshakeRequest_k__BackingField() const;

constexpr ::Dissonance::Networking::TrafficCounter*& __cordl_internal_get__RecvHandshakeRequest_k__BackingField() ;

constexpr ::Dissonance::Networking::TrafficCounter* const& __cordl_internal_get__RecvPacketRelay_k__BackingField() const;

constexpr ::Dissonance::Networking::TrafficCounter*& __cordl_internal_get__RecvPacketRelay_k__BackingField() ;

constexpr ::Dissonance::Networking::TrafficCounter* const& __cordl_internal_get__SentTraffic_k__BackingField() const;

constexpr ::Dissonance::Networking::TrafficCounter*& __cordl_internal_get__SentTraffic_k__BackingField() ;

constexpr uint32_t const& __cordl_internal_get__SessionId_k__BackingField() const;

constexpr uint32_t& __cordl_internal_get__SessionId_k__BackingField() ;

constexpr ::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>* const& __cordl_internal_get__clients() const;

constexpr ::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*& __cordl_internal_get__clients() ;

constexpr bool const& __cordl_internal_get__disconnected() const;

constexpr bool& __cordl_internal_get__disconnected() ;

constexpr bool const& __cordl_internal_get__error() const;

constexpr bool& __cordl_internal_get__error() ;

constexpr ::Dissonance::Networking::Server::ServerRelay_1<TPeer>* const& __cordl_internal_get__relay() const;

constexpr ::Dissonance::Networking::Server::ServerRelay_1<TPeer>*& __cordl_internal_get__relay() ;

constexpr ::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>* const& __cordl_internal_get_serverAdmin() const;

constexpr ::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*& __cordl_internal_get_serverAdmin() ;

constexpr void __cordl_internal_set_Log(::Dissonance::Log*  value) ;

constexpr void __cordl_internal_set__RecvClientState_k__BackingField(::Dissonance::Networking::TrafficCounter*  value) ;

constexpr void __cordl_internal_set__RecvDeltaChannelState_k__BackingField(::Dissonance::Networking::TrafficCounter*  value) ;

constexpr void __cordl_internal_set__RecvHandshakeRequest_k__BackingField(::Dissonance::Networking::TrafficCounter*  value) ;

constexpr void __cordl_internal_set__RecvPacketRelay_k__BackingField(::Dissonance::Networking::TrafficCounter*  value) ;

constexpr void __cordl_internal_set__SentTraffic_k__BackingField(::Dissonance::Networking::TrafficCounter*  value) ;

constexpr void __cordl_internal_set__SessionId_k__BackingField(uint32_t  value) ;

constexpr void __cordl_internal_set__clients(::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__disconnected(bool  value) ;

constexpr void __cordl_internal_set__error(bool  value) ;

constexpr void __cordl_internal_set__relay(::Dissonance::Networking::Server::ServerRelay_1<TPeer>*  value) ;

constexpr void __cordl_internal_set_serverAdmin(::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_RecvClientState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::TrafficCounter* get_RecvClientState() ;

/// @brief Method get_RecvDeltaChannelState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::TrafficCounter* get_RecvDeltaChannelState() ;

/// @brief Method get_RecvHandshakeRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::TrafficCounter* get_RecvHandshakeRequest() ;

/// @brief Method get_RecvPacketRelay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::TrafficCounter* get_RecvPacketRelay() ;

/// @brief Method get_SentTraffic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::TrafficCounter* get_SentTraffic() ;

/// @brief Method get_ServerAdmin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::Server::Admin::IServerAdmin* get_ServerAdmin() ;

/// @brief Method get_SessionId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline uint32_t get_SessionId() ;

/// @brief Convert to "::Dissonance::Networking::Server::IServer_1<TPeer>"
constexpr ::Dissonance::Networking::Server::IServer_1<TPeer>* i___Dissonance__Networking__Server__IServer_1_TPeer_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseServer_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseServer_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseServer_3(BaseServer_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseServer_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseServer_3(BaseServer_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16871};

/// @brief Field Log, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Log*  ___Log;

/// @brief Field _disconnected, offset: 0x18, size: 0x1, def value: None
 bool  ____disconnected;

/// @brief Field _error, offset: 0x19, size: 0x1, def value: None
 bool  ____error;

/// @brief Field <RecvHandshakeRequest>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Networking::TrafficCounter*  ____RecvHandshakeRequest_k__BackingField;

/// @brief Field <RecvClientState>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Networking::TrafficCounter*  ____RecvClientState_k__BackingField;

/// @brief Field <RecvPacketRelay>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Dissonance::Networking::TrafficCounter*  ____RecvPacketRelay_k__BackingField;

/// @brief Field <RecvDeltaChannelState>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Dissonance::Networking::TrafficCounter*  ____RecvDeltaChannelState_k__BackingField;

/// @brief Field <SentTraffic>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Dissonance::Networking::TrafficCounter*  ____SentTraffic_k__BackingField;

/// @brief Field _relay, offset: 0x48, size: 0x8, def value: None
 ::Dissonance::Networking::Server::ServerRelay_1<TPeer>*  ____relay;

/// @brief Field _clients, offset: 0x50, size: 0x8, def value: None
 ::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>*  ____clients;

/// @brief Field <SessionId>k__BackingField, offset: 0x58, size: 0x4, def value: None
 uint32_t  ____SessionId_k__BackingField;

/// @brief Field serverAdmin, offset: 0x60, size: 0x8, def value: None
 ::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>*  ___serverAdmin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking
