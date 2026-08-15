#pragma once
// IWYU pragma private; include "Dissonance/Networking/Server/Admin/ServerAdmin_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServerAdmin_3)
namespace Dissonance::Networking::Server::Admin {
class IServerAdmin;
}
namespace Dissonance::Networking::Server::Admin {
class IServerClientState;
}
namespace Dissonance::Networking::Server::Admin {
template<typename TServer,typename TClient,typename TPeer>
class ServerClientState_3;
}
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace Dissonance::Networking {
struct PacketReader;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
struct RemoteChannel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
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
// Forward declare root types
namespace Dissonance::Networking::Server::Admin {
template<typename TServer,typename TClient,typename TPeer>
class ServerAdmin_3;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Server::Admin::ServerAdmin_3);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Server::Admin::ServerAdmin_3, "Dissonance.Networking.Server.Admin", "ServerAdmin`3");
// Dependencies System.Object
namespace Dissonance::Networking::Server::Admin {
// cpp template
template<typename TServer,typename TClient,typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Server.Admin.ServerAdmin`3<TServer,TClient,TPeer>
class CORDL_TYPE ServerAdmin_3 : public ::System::Object {
public:
// Declarations
/// @brief Field ClientJoined, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ClientJoined, put=__cordl_internal_set_ClientJoined)) ::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  ClientJoined;

/// @brief Field ClientLeft, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ClientLeft, put=__cordl_internal_set_ClientLeft)) ::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  ClientLeft;

 __declspec(property(get=get_Clients)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  Clients;

 __declspec(property(get=get_EnableChannelMonitoring, put=set_EnableChannelMonitoring)) bool  EnableChannelMonitoring;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field VoicePacketSpoofed, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoicePacketSpoofed, put=__cordl_internal_set_VoicePacketSpoofed)) ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>*  VoicePacketSpoofed;

/// @brief Field <Clients>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Clients_k__BackingField, put=__cordl_internal_set__Clients_k__BackingField)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  _Clients_k__BackingField;

/// @brief Field <EnableChannelMonitoring>k__BackingField, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__EnableChannelMonitoring_k__BackingField, put=__cordl_internal_set__EnableChannelMonitoring_k__BackingField)) bool  _EnableChannelMonitoring_k__BackingField;

/// @brief Field _channelsTmp, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__channelsTmp, put=__cordl_internal_set__channelsTmp)) ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  _channelsTmp;

/// @brief Field _clients, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__clients, put=__cordl_internal_set__clients)) ::System::Collections::Generic::List_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  _clients;

/// @brief Field _knownRoomNames, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__knownRoomNames, put=__cordl_internal_set__knownRoomNames)) ::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>*  _knownRoomNames;

/// @brief Field _server, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__server, put=__cordl_internal_set__server)) TServer  _server;

/// @brief Convert operator to "::Dissonance::Networking::Server::Admin::IServerAdmin"
constexpr operator  ::Dissonance::Networking::Server::Admin::IServerAdmin*() noexcept;

/// @brief Method FindPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>* FindPlayer(uint16_t  id) ;

/// @brief Method FindPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>* FindPlayer(::Dissonance::Networking::ClientInfo_1<TPeer>*  peer) ;

/// @brief Method FindPlayer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>* FindPlayer(TPeer  peer) ;

/// @brief Method InvokeOnClientEnteredRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeOnClientEnteredRoom(::Dissonance::Networking::ClientInfo_1<TPeer>*  peer, ::StringW  name) ;

/// @brief Method InvokeOnClientExitedRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeOnClientExitedRoom(::Dissonance::Networking::ClientInfo_1<TPeer>*  peer, ::StringW  name) ;

/// @brief Method InvokeOnClientJoined, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeOnClientJoined(::Dissonance::Networking::ClientInfo_1<TPeer>*  peer) ;

/// @brief Method InvokeOnClientLeft, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeOnClientLeft(::Dissonance::Networking::ClientInfo_1<TPeer>*  peer) ;

/// @brief Method InvokeOnRelayingPacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeOnRelayingPacket(::System::ArraySegment_1<uint8_t>  payload, TPeer  source) ;

/// @brief Method InvokeOnVoicePacketSpoof, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeOnVoicePacketSpoof(::Dissonance::Networking::Server::Admin::IServerClientState*  spoofer, ::Dissonance::Networking::Server::Admin::IServerClientState*  spoofee) ;

static inline ::Dissonance::Networking::Server::Admin::ServerAdmin_3<TServer,TClient,TPeer>* New_ctor(TServer  server) ;

/// @brief Method ReadChannels, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ReadChannels(::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*  clientState, ::Dissonance::Networking::PacketReader  reader) ;

constexpr ::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>* const& __cordl_internal_get_ClientJoined() const;

constexpr ::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*& __cordl_internal_get_ClientJoined() ;

constexpr ::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>* const& __cordl_internal_get_ClientLeft() const;

constexpr ::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*& __cordl_internal_get_ClientLeft() ;

constexpr ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>* const& __cordl_internal_get_VoicePacketSpoofed() const;

constexpr ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>*& __cordl_internal_get_VoicePacketSpoofed() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::Networking::Server::Admin::IServerClientState*>* const& __cordl_internal_get__Clients_k__BackingField() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*& __cordl_internal_get__Clients_k__BackingField() ;

constexpr bool const& __cordl_internal_get__EnableChannelMonitoring_k__BackingField() const;

constexpr bool& __cordl_internal_get__EnableChannelMonitoring_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>* const& __cordl_internal_get__channelsTmp() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*& __cordl_internal_get__channelsTmp() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::Server::Admin::IServerClientState*>* const& __cordl_internal_get__clients() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*& __cordl_internal_get__clients() ;

constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>* const& __cordl_internal_get__knownRoomNames() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>*& __cordl_internal_get__knownRoomNames() ;

constexpr TServer const& __cordl_internal_get__server() const;

constexpr TServer& __cordl_internal_get__server() ;

constexpr void __cordl_internal_set_ClientJoined(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

constexpr void __cordl_internal_set_ClientLeft(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

constexpr void __cordl_internal_set_VoicePacketSpoofed(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

constexpr void __cordl_internal_set__Clients_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

constexpr void __cordl_internal_set__EnableChannelMonitoring_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__channelsTmp(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  value) ;

constexpr void __cordl_internal_set__clients(::System::Collections::Generic::List_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

constexpr void __cordl_internal_set__knownRoomNames(::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>*  value) ;

constexpr void __cordl_internal_set__server(TServer  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TServer  server) ;

/// @brief Method add_ClientJoined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_ClientJoined(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

/// @brief Method add_ClientLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_ClientLeft(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

/// @brief Method add_VoicePacketSpoofed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_VoicePacketSpoofed(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Clients, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::Networking::Server::Admin::IServerClientState*>* get_Clients() ;

/// @brief Method get_EnableChannelMonitoring, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_EnableChannelMonitoring() ;

/// @brief Convert to "::Dissonance::Networking::Server::Admin::IServerAdmin"
constexpr ::Dissonance::Networking::Server::Admin::IServerAdmin* i___Dissonance__Networking__Server__Admin__IServerAdmin() noexcept;

/// @brief Method remove_ClientJoined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_ClientJoined(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

/// @brief Method remove_ClientLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_ClientLeft(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

/// @brief Method remove_VoicePacketSpoofed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_VoicePacketSpoofed(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_EnableChannelMonitoring, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_EnableChannelMonitoring(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerAdmin_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerAdmin_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerAdmin_3(ServerAdmin_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerAdmin_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerAdmin_3(ServerAdmin_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16900};

/// @brief Field _server, offset: 0x10, size: 0x8, def value: None
 TServer  ____server;

/// @brief Field _knownRoomNames, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint16_t,::StringW>*  ____knownRoomNames;

/// @brief Field ClientJoined, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  ___ClientJoined;

/// @brief Field ClientLeft, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  ___ClientLeft;

/// @brief Field VoicePacketSpoofed, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>*  ___VoicePacketSpoofed;

/// @brief Field _clients, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  ____clients;

/// @brief Field <Clients>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  ____Clients_k__BackingField;

/// @brief Field _channelsTmp, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  ____channelsTmp;

/// @brief Field <EnableChannelMonitoring>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  ____EnableChannelMonitoring_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Server::Admin
