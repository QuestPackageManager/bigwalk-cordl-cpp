#pragma once
// IWYU pragma private; include "Dissonance/Networking/Server/Admin/ServerClientState_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServerClientState_3)
namespace Dissonance::Datastructures {
template<typename T>
class ConcurrentPool_1;
}
namespace Dissonance::Networking::Client {
class IVoiceEventQueue;
}
namespace Dissonance::Networking::Client {
class PeerVoiceReceiver;
}
namespace Dissonance::Networking::Server::Admin {
class IServerClientState;
}
namespace Dissonance::Networking::Server::Admin {
template<typename TServer,typename TClient,typename TPeer>
class ServerClientState_3_VoiceEventHandler;
}
namespace Dissonance::Networking::Server::Admin {
template<typename TServer,typename TClient,typename TPeer>
class ServerClientState_3___c;
}
namespace Dissonance::Networking::Server::Admin {
template<typename TServer,typename TClient,typename TPeer>
class VoiceEventHandler_ServerClientState_3___c;
}
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace Dissonance::Networking {
struct PacketReader;
}
namespace Dissonance::Networking {
struct VoicePacket;
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
class Action;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Dissonance::Networking::Server::Admin {
template<typename TServer,typename TClient,typename TPeer>
class ServerClientState_3;
}
namespace Dissonance::Networking::Server::Admin {
template<typename TServer,typename TClient,typename TPeer>
class ServerClientState_3_VoiceEventHandler;
}
namespace Dissonance::Networking::Server::Admin {
template<typename TServer,typename TClient,typename TPeer>
class ServerClientState_3___c;
}
namespace Dissonance::Networking::Server::Admin {
template<typename TServer,typename TClient,typename TPeer>
class VoiceEventHandler_ServerClientState_3___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Server::Admin::ServerClientState_3);
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler);
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Server::Admin::ServerClientState_3___c);
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Server::Admin::ServerClientState_3, "Dissonance.Networking.Server.Admin", "ServerClientState`3");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler, "Dissonance.Networking.Server.Admin", "ServerClientState`3/VoiceEventHandler");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Server::Admin::ServerClientState_3___c, "Dissonance.Networking.Server.Admin", "ServerClientState`3/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c, "Dissonance.Networking.Server.Admin", "ServerClientState`3/VoiceEventHandler/<>c");
// Dependencies System.Object
namespace Dissonance::Networking::Server::Admin {
// cpp template
template<typename TServer,typename TClient,typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Server.Admin.ServerClientState`3/VoiceEventHandler/<>c<TServer,TClient,TPeer>
class CORDL_TYPE VoiceEventHandler_ServerClientState_3___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Func_1<::ArrayW<uint8_t>>*  __9__2_0;

static inline ::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> __ctor_b__2_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>* getStaticF___9() ;

static inline ::System::Func_1<::ArrayW<uint8_t>>* getStaticF___9__2_0() ;

static inline void setStaticF___9(::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer,TClient,TPeer>*  value) ;

static inline void setStaticF___9__2_0(::System::Func_1<::ArrayW<uint8_t>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceEventHandler_ServerClientState_3___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceEventHandler_ServerClientState_3___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceEventHandler_ServerClientState_3___c(VoiceEventHandler_ServerClientState_3___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceEventHandler_ServerClientState_3___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceEventHandler_ServerClientState_3___c(VoiceEventHandler_ServerClientState_3___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16901};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Server::Admin
// Dependencies System.Object
namespace Dissonance::Networking::Server::Admin {
// cpp template
template<typename TServer,typename TClient,typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Server.Admin.ServerClientState`3/VoiceEventHandler<TServer,TClient,TPeer>
class CORDL_TYPE ServerClientState_3_VoiceEventHandler : public ::System::Object {
public:
// Declarations
using __c = ::Dissonance::Networking::Server::Admin::VoiceEventHandler_ServerClientState_3___c<TServer, TClient, TPeer>;

/// @brief Field _bytesPool, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__bytesPool, put=__cordl_internal_set__bytesPool)) ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*  _bytesPool;

/// @brief Field _parent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*  _parent;

/// @brief Convert operator to "::Dissonance::Networking::Client::IVoiceEventQueue"
constexpr operator  ::Dissonance::Networking::Client::IVoiceEventQueue*() noexcept;

/// @brief Method EnqueueStartedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void EnqueueStartedSpeaking(::StringW  name) ;

/// @brief Method EnqueueStoppedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void EnqueueStoppedSpeaking(::StringW  name) ;

/// @brief Method EnqueueVoiceData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void EnqueueVoiceData(::Dissonance::Networking::VoicePacket  voicePacket) ;

/// @brief Method GetEventBuffer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> GetEventBuffer() ;

static inline ::Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer,TClient,TPeer>* New_ctor(::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*  parent) ;

constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>* const& __cordl_internal_get__bytesPool() const;

constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*& __cordl_internal_get__bytesPool() ;

constexpr ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>* const& __cordl_internal_get__parent() const;

constexpr ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*& __cordl_internal_get__parent() ;

constexpr void __cordl_internal_set__bytesPool(::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*  value) ;

constexpr void __cordl_internal_set__parent(::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*  parent) ;

/// @brief Convert to "::Dissonance::Networking::Client::IVoiceEventQueue"
constexpr ::Dissonance::Networking::Client::IVoiceEventQueue* i___Dissonance__Networking__Client__IVoiceEventQueue() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerClientState_3_VoiceEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerClientState_3_VoiceEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerClientState_3_VoiceEventHandler(ServerClientState_3_VoiceEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerClientState_3_VoiceEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerClientState_3_VoiceEventHandler(ServerClientState_3_VoiceEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16902};

/// @brief Field _parent, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>*  ____parent;

/// @brief Field _bytesPool, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*  ____bytesPool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Server::Admin
// Dependencies System.Object
namespace Dissonance::Networking::Server::Admin {
// cpp template
template<typename TServer,typename TClient,typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Server.Admin.ServerClientState`3/<>c<TServer,TClient,TPeer>
class CORDL_TYPE ServerClientState_3___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>*  __9;

/// @brief Field <>9__37_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__37_0, put=setStaticF___9__37_0)) ::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  __9__37_0;

static inline ::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>* New_ctor() ;

/// @brief Method <.ctor>b__37_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>* __ctor_b__37_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>* getStaticF___9() ;

static inline ::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* getStaticF___9__37_0() ;

static inline void setStaticF___9(::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer,TClient,TPeer>*  value) ;

static inline void setStaticF___9__37_0(::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerClientState_3___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerClientState_3___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerClientState_3___c(ServerClientState_3___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerClientState_3___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerClientState_3___c(ServerClientState_3___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16903};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Server::Admin
// Dependencies System.DateTime, System.Object
namespace Dissonance::Networking::Server::Admin {
// cpp template
template<typename TServer,typename TClient,typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Server.Admin.ServerClientState`3<TServer,TClient,TPeer>
class CORDL_TYPE ServerClientState_3 : public ::System::Object {
public:
// Declarations
using VoiceEventHandler = ::Dissonance::Networking::Server::Admin::ServerClientState_3_VoiceEventHandler<TServer, TClient, TPeer>;

using __c = ::Dissonance::Networking::Server::Admin::ServerClientState_3___c<TServer, TClient, TPeer>;

 __declspec(property(get=get_Channels)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>*  Channels;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_LastChannelUpdateUtc, put=set_LastChannelUpdateUtc)) ::System::DateTime  LastChannelUpdateUtc;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field OnStartedListeningToRoom, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStartedListeningToRoom, put=__cordl_internal_set_OnStartedListeningToRoom)) ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  OnStartedListeningToRoom;

/// @brief Field OnStoppedListeningToRoom, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStoppedListeningToRoom, put=__cordl_internal_set_OnStoppedListeningToRoom)) ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  OnStoppedListeningToRoom;

/// @brief Field OnVoicePacket, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnVoicePacket, put=__cordl_internal_set_OnVoicePacket)) ::System::Action_1<::Dissonance::Networking::VoicePacket>*  OnVoicePacket;

 __declspec(property(get=get_Peer)) ::Dissonance::Networking::ClientInfo_1<TPeer>*  Peer;

 __declspec(property(get=get_Rooms)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  Rooms;

/// @brief Field StartedSpeaking, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_StartedSpeaking, put=__cordl_internal_set_StartedSpeaking)) ::System::Action*  StartedSpeaking;

/// @brief Field StoppedSpeaking, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_StoppedSpeaking, put=__cordl_internal_set_StoppedSpeaking)) ::System::Action*  StoppedSpeaking;

/// @brief Field <Channels>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Channels_k__BackingField, put=__cordl_internal_set__Channels_k__BackingField)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>*  _Channels_k__BackingField;

/// @brief Field <LastChannelUpdateUtc>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__LastChannelUpdateUtc_k__BackingField, put=__cordl_internal_set__LastChannelUpdateUtc_k__BackingField)) ::System::DateTime  _LastChannelUpdateUtc_k__BackingField;

/// @brief Field <Peer>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Peer_k__BackingField, put=__cordl_internal_set__Peer_k__BackingField)) ::Dissonance::Networking::ClientInfo_1<TPeer>*  _Peer_k__BackingField;

/// @brief Field <Rooms>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Rooms_k__BackingField, put=__cordl_internal_set__Rooms_k__BackingField)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  _Rooms_k__BackingField;

/// @brief Field _channels, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__channels, put=__cordl_internal_set__channels)) ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  _channels;

/// @brief Field _rooms, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__rooms, put=__cordl_internal_set__rooms)) ::System::Collections::Generic::List_1<::StringW>*  _rooms;

/// @brief Field _server, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__server, put=__cordl_internal_set__server)) TServer  _server;

/// @brief Field _voiceReceiver, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceReceiver, put=__cordl_internal_set__voiceReceiver)) ::Dissonance::Networking::Client::PeerVoiceReceiver*  _voiceReceiver;

/// @brief Convert operator to "::Dissonance::Networking::Server::Admin::IServerClientState"
constexpr operator  ::Dissonance::Networking::Server::Admin::IServerClientState*() noexcept;

/// @brief Method InvokeOnEnteredRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeOnEnteredRoom(::StringW  name) ;

/// @brief Method InvokeOnExitedRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeOnExitedRoom(::StringW  name) ;

/// @brief Method InvokeOnVoicePacket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeOnVoicePacket(::Dissonance::Networking::PacketReader  reader) ;

static inline ::Dissonance::Networking::Server::Admin::ServerClientState_3<TServer,TClient,TPeer>* New_ctor(TServer  server, ::Dissonance::Networking::ClientInfo_1<TPeer>*  peer) ;

/// @brief Method RemoveFromRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void RemoveFromRoom(::StringW  roomName) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method UpdateChannels, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  channels) ;

constexpr ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>* const& __cordl_internal_get_OnStartedListeningToRoom() const;

constexpr ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*& __cordl_internal_get_OnStartedListeningToRoom() ;

constexpr ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>* const& __cordl_internal_get_OnStoppedListeningToRoom() const;

constexpr ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*& __cordl_internal_get_OnStoppedListeningToRoom() ;

constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>* const& __cordl_internal_get_OnVoicePacket() const;

constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>*& __cordl_internal_get_OnVoicePacket() ;

constexpr ::System::Action* const& __cordl_internal_get_StartedSpeaking() const;

constexpr ::System::Action*& __cordl_internal_get_StartedSpeaking() ;

constexpr ::System::Action* const& __cordl_internal_get_StoppedSpeaking() const;

constexpr ::System::Action*& __cordl_internal_get_StoppedSpeaking() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>* const& __cordl_internal_get__Channels_k__BackingField() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>*& __cordl_internal_get__Channels_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__LastChannelUpdateUtc_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__LastChannelUpdateUtc_k__BackingField() ;

constexpr ::Dissonance::Networking::ClientInfo_1<TPeer>* const& __cordl_internal_get__Peer_k__BackingField() const;

constexpr ::Dissonance::Networking::ClientInfo_1<TPeer>*& __cordl_internal_get__Peer_k__BackingField() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* const& __cordl_internal_get__Rooms_k__BackingField() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*& __cordl_internal_get__Rooms_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>* const& __cordl_internal_get__channels() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*& __cordl_internal_get__channels() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__rooms() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__rooms() ;

constexpr TServer const& __cordl_internal_get__server() const;

constexpr TServer& __cordl_internal_get__server() ;

constexpr ::Dissonance::Networking::Client::PeerVoiceReceiver* const& __cordl_internal_get__voiceReceiver() const;

constexpr ::Dissonance::Networking::Client::PeerVoiceReceiver*& __cordl_internal_get__voiceReceiver() ;

constexpr void __cordl_internal_set_OnStartedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value) ;

constexpr void __cordl_internal_set_OnStoppedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value) ;

constexpr void __cordl_internal_set_OnVoicePacket(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

constexpr void __cordl_internal_set_StartedSpeaking(::System::Action*  value) ;

constexpr void __cordl_internal_set_StoppedSpeaking(::System::Action*  value) ;

constexpr void __cordl_internal_set__Channels_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>*  value) ;

constexpr void __cordl_internal_set__LastChannelUpdateUtc_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__Peer_k__BackingField(::Dissonance::Networking::ClientInfo_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__Rooms_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__channels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  value) ;

constexpr void __cordl_internal_set__rooms(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__server(TServer  value) ;

constexpr void __cordl_internal_set__voiceReceiver(::Dissonance::Networking::Client::PeerVoiceReceiver*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TServer  server, ::Dissonance::Networking::ClientInfo_1<TPeer>*  peer) ;

/// @brief Method add_OnStartedListeningToRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_OnStartedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value) ;

/// @brief Method add_OnStoppedListeningToRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_OnStoppedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value) ;

/// @brief Method add_OnVoicePacket, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_OnVoicePacket(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

/// @brief Method add_StartedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_StartedSpeaking(::System::Action*  value) ;

/// @brief Method add_StoppedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_StoppedSpeaking(::System::Action*  value) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Channels, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>* get_Channels() ;

/// @brief Method get_IsConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsConnected() ;

/// @brief Method get_LastChannelUpdateUtc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::DateTime get_LastChannelUpdateUtc() ;

/// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_Name() ;

/// @brief Method get_Peer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::ClientInfo_1<TPeer>* get_Peer() ;

/// @brief Method get_Rooms, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* get_Rooms() ;

/// @brief Convert to "::Dissonance::Networking::Server::Admin::IServerClientState"
constexpr ::Dissonance::Networking::Server::Admin::IServerClientState* i___Dissonance__Networking__Server__Admin__IServerClientState() noexcept;

/// @brief Method remove_OnStartedListeningToRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_OnStartedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value) ;

/// @brief Method remove_OnStoppedListeningToRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_OnStoppedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value) ;

/// @brief Method remove_OnVoicePacket, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_OnVoicePacket(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

/// @brief Method remove_StartedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_StartedSpeaking(::System::Action*  value) ;

/// @brief Method remove_StoppedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_StoppedSpeaking(::System::Action*  value) ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_LastChannelUpdateUtc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_LastChannelUpdateUtc(::System::DateTime  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerClientState_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerClientState_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerClientState_3(ServerClientState_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerClientState_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerClientState_3(ServerClientState_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16904};

/// @brief Field _server, offset: 0x10, size: 0x8, def value: None
 TServer  ____server;

/// @brief Field <Peer>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Networking::ClientInfo_1<TPeer>*  ____Peer_k__BackingField;

/// @brief Field OnStartedListeningToRoom, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  ___OnStartedListeningToRoom;

/// @brief Field OnStoppedListeningToRoom, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  ___OnStoppedListeningToRoom;

/// @brief Field StartedSpeaking, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___StartedSpeaking;

/// @brief Field StoppedSpeaking, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___StoppedSpeaking;

/// @brief Field OnVoicePacket, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::VoicePacket>*  ___OnVoicePacket;

/// @brief Field _voiceReceiver, offset: 0x48, size: 0x8, def value: None
 ::Dissonance::Networking::Client::PeerVoiceReceiver*  ____voiceReceiver;

/// @brief Field _rooms, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____rooms;

/// @brief Field <Rooms>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  ____Rooms_k__BackingField;

/// @brief Field _channels, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  ____channels;

/// @brief Field <Channels>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>*  ____Channels_k__BackingField;

/// @brief Field <LastChannelUpdateUtc>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::System::DateTime  ____LastChannelUpdateUtc_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Server::Admin
