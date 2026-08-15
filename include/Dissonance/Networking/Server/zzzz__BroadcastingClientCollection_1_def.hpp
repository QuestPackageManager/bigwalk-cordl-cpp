#pragma once
// IWYU pragma private; include "Dissonance/Networking/Server/BroadcastingClientCollection_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Networking/zzzz__BaseClientCollection_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BroadcastingClientCollection_1)
namespace Dissonance::Networking::Server {
template<typename TPeer>
class IServer_1;
}
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace Dissonance::Networking {
struct PacketReader;
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
namespace Dissonance::Networking::Server {
template<typename TPeer>
class BroadcastingClientCollection_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Server::BroadcastingClientCollection_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Server::BroadcastingClientCollection_1, "Dissonance.Networking.Server", "BroadcastingClientCollection`1");
// Dependencies Dissonance.Networking.BaseClientCollection`1<TPeer>
namespace Dissonance::Networking::Server {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Server.BroadcastingClientCollection`1<TPeer>
class CORDL_TYPE BroadcastingClientCollection_1 : public ::Dissonance::Networking::BaseClientCollection_1<TPeer> {
public:
// Declarations
/// @brief Field _server, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__server, put=__cordl_internal_set__server)) ::Dissonance::Networking::Server::IServer_1<TPeer>*  _server;

/// @brief Field _tmpClientBuffer, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpClientBuffer, put=__cordl_internal_set__tmpClientBuffer)) ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  _tmpClientBuffer;

/// @brief Field _tmpClientBufferHandshake, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpClientBufferHandshake, put=__cordl_internal_set__tmpClientBufferHandshake)) ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  _tmpClientBufferHandshake;

/// @brief Field _tmpConnectionBuffer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpConnectionBuffer, put=__cordl_internal_set__tmpConnectionBuffer)) ::System::Collections::Generic::List_1<TPeer>*  _tmpConnectionBuffer;

/// @brief Field _tmpSendBuffer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpSendBuffer, put=__cordl_internal_set__tmpSendBuffer)) ::ArrayW<uint8_t>  _tmpSendBuffer;

/// @brief Method Broadcast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Broadcast(::System::ArraySegment_1<uint8_t>  packet) ;

static inline ::Dissonance::Networking::Server::BroadcastingClientCollection_1<TPeer>* New_ctor(::Dissonance::Networking::Server::IServer_1<TPeer>*  server) ;

/// @brief Method OnAddedClient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnAddedClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client) ;

/// @brief Method OnRemovedClient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnRemovedClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client) ;

/// @brief Method ProcessClientState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessClientState(TPeer  source, ::by_ref<::Dissonance::Networking::PacketReader>  reader) ;

/// @brief Method ProcessDeltaChannelState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessDeltaChannelState(::by_ref<::Dissonance::Networking::PacketReader>  reader) ;

/// @brief Method ProcessHandshakeRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ProcessHandshakeRequest(TPeer  source, ::by_ref<::Dissonance::Networking::PacketReader>  reader) ;

/// @brief Method RemoveClient, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveClient(TPeer  connection) ;

/// @brief Method SendFakeClientState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SendFakeClientState(TPeer  destination, ::Dissonance::Networking::ClientInfo_1<TPeer>*  clientInfo) ;

constexpr ::Dissonance::Networking::Server::IServer_1<TPeer>* const& __cordl_internal_get__server() const;

constexpr ::Dissonance::Networking::Server::IServer_1<TPeer>*& __cordl_internal_get__server() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>* const& __cordl_internal_get__tmpClientBuffer() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*& __cordl_internal_get__tmpClientBuffer() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>* const& __cordl_internal_get__tmpClientBufferHandshake() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*& __cordl_internal_get__tmpClientBufferHandshake() ;

constexpr ::System::Collections::Generic::List_1<TPeer>* const& __cordl_internal_get__tmpConnectionBuffer() const;

constexpr ::System::Collections::Generic::List_1<TPeer>*& __cordl_internal_get__tmpConnectionBuffer() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__tmpSendBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__tmpSendBuffer() ;

constexpr void __cordl_internal_set__server(::Dissonance::Networking::Server::IServer_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__tmpClientBuffer(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value) ;

constexpr void __cordl_internal_set__tmpClientBufferHandshake(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  value) ;

constexpr void __cordl_internal_set__tmpConnectionBuffer(::System::Collections::Generic::List_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__tmpSendBuffer(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::Server::IServer_1<TPeer>*  server) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BroadcastingClientCollection_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BroadcastingClientCollection_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BroadcastingClientCollection_1(BroadcastingClientCollection_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BroadcastingClientCollection_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BroadcastingClientCollection_1(BroadcastingClientCollection_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16895};

/// @brief Field _server, offset: 0x60, size: 0x8, def value: None
 ::Dissonance::Networking::Server::IServer_1<TPeer>*  ____server;

/// @brief Field _tmpSendBuffer, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____tmpSendBuffer;

/// @brief Field _tmpConnectionBuffer, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<TPeer>*  ____tmpConnectionBuffer;

/// @brief Field _tmpClientBuffer, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  ____tmpClientBuffer;

/// @brief Field _tmpClientBufferHandshake, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  ____tmpClientBufferHandshake;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Server
