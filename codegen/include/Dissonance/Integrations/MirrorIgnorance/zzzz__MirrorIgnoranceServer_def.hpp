#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/MirrorIgnoranceServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorConn_def.hpp"
#include "Dissonance/Networking/zzzz__BaseServer_3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MirrorIgnoranceServer)
namespace Dissonance::Integrations::MirrorIgnorance {
struct DissonanceNetworkMessage;
}
namespace Dissonance::Integrations::MirrorIgnorance {
struct MirrorConn;
}
namespace Dissonance::Integrations::MirrorIgnorance {
class MirrorIgnoranceClient;
}
namespace Dissonance::Integrations::MirrorIgnorance {
class MirrorIgnoranceCommsNetwork;
}
namespace Dissonance::Networking::Server {
struct ServerState;
}
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace Mirror {
class NetworkConnection;
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
namespace Dissonance::Integrations::MirrorIgnorance {
class MirrorIgnoranceServer;
}
// Write type traits
MARK_REF_T(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*);
DEFINE_IL2CPP_CLASS(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*, "Dissonance.Integrations.MirrorIgnorance", "MirrorIgnoranceServer");
// Dependencies Dissonance.Integrations.MirrorIgnorance.MirrorConn, Dissonance.Networking.BaseServer`3<TServer, TClient, TPeer>
namespace Dissonance::Integrations::MirrorIgnorance {
// Is value type: false
// CS Name: Dissonance.Integrations.MirrorIgnorance.MirrorIgnoranceServer
class CORDL_TYPE MirrorIgnoranceServer : public ::Dissonance::Networking::BaseServer_3<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*,::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*,::Dissonance::Integrations::MirrorIgnorance::MirrorConn> {
public:
// Declarations
/// @brief Field _addedConnections, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__addedConnections, put=__cordl_internal_set__addedConnections)) ::System::Collections::Generic::List_1<::Mirror::NetworkConnection*>*  _addedConnections;

/// @brief Field _network, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__network, put=__cordl_internal_set__network)) ::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork>  _network;

/// @brief Method AddClient, addr 0x1803cf5b0, size 0xb0, virtual true, abstract: false, final false
inline void AddClient(::Dissonance::Networking::ClientInfo_1<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>*  client) ;

/// @brief Method Connect, addr 0x1803cf660, size 0x60, virtual true, abstract: false, final false
inline void Connect() ;

/// @brief Method Disconnect, addr 0x1803cf6c0, size 0x50, virtual true, abstract: false, final false
inline void Disconnect() ;

/// @brief Method IsConnected, addr 0x1803cf710, size 0x70, virtual false, abstract: false, final false
static inline bool IsConnected(::Mirror::NetworkConnection*  conn) ;

static inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer* New_ctor(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*  network) ;

/// @brief Method OnMessageReceived, addr 0x1803cf780, size 0xa0, virtual false, abstract: false, final false
inline void OnMessageReceived(::Mirror::NetworkConnection*  source, ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage  msg) ;

/// @brief Method ReadMessages, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ReadMessages() ;

/// @brief Method Send, addr 0x1803cf8a0, size 0x2a0, virtual false, abstract: false, final false
inline bool Send(::System::ArraySegment_1<uint8_t>  packet, ::Dissonance::Integrations::MirrorIgnorance::MirrorConn  connection, uint8_t  channel) ;

/// @brief Method SendReliable, addr 0x1803cf820, size 0x50, virtual true, abstract: false, final false
inline void SendReliable(::Dissonance::Integrations::MirrorIgnorance::MirrorConn  connection, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method SendUnreliable, addr 0x1803cf870, size 0x30, virtual true, abstract: false, final false
inline void SendUnreliable(::Dissonance::Integrations::MirrorIgnorance::MirrorConn  connection, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method Update, addr 0x1803cfb40, size 0x130, virtual true, abstract: false, final false
inline ::Dissonance::Networking::Server::ServerState Update() ;

constexpr ::System::Collections::Generic::List_1<::Mirror::NetworkConnection*>* const& __cordl_internal_get__addedConnections() const;

constexpr ::System::Collections::Generic::List_1<::Mirror::NetworkConnection*>*& __cordl_internal_get__addedConnections() ;

constexpr ::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork> const& __cordl_internal_get__network() const;

constexpr ::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork>& __cordl_internal_get__network() ;

constexpr void __cordl_internal_set__addedConnections(::System::Collections::Generic::List_1<::Mirror::NetworkConnection*>*  value) ;

constexpr void __cordl_internal_set__network(::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork>  value) ;

/// @brief Method .ctor, addr 0x1803cfc70, size 0x450, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*  network) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MirrorIgnoranceServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MirrorIgnoranceServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MirrorIgnoranceServer(MirrorIgnoranceServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MirrorIgnoranceServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MirrorIgnoranceServer(MirrorIgnoranceServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5825};

/// @brief Field _network, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork>  ____network;

/// @brief Field _addedConnections, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Mirror::NetworkConnection*>*  ____addedConnections;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer, ____network) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer, ____addedConnections) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer) == 0x78, "Size mismatch!");

} // namespace end def Dissonance::Integrations::MirrorIgnorance
