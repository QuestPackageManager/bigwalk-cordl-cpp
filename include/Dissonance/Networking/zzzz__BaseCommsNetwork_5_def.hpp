#pragma once
// IWYU pragma private; include "Dissonance/Networking/BaseCommsNetwork_5.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Networking/zzzz__NetworkMode_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseCommsNetwork_5)
namespace Dissonance::Networking::Server::Admin {
class IServerAdmin;
}
namespace Dissonance::Networking {
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
class BaseCommsNetwork_5_IState;
}
namespace Dissonance::Networking {
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
class BaseCommsNetwork_5_Idle;
}
namespace Dissonance::Networking {
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
class BaseCommsNetwork_5_Session;
}
namespace Dissonance::Networking {
struct ConnectionStatus;
}
namespace Dissonance::Networking {
class ICommsNetworkState;
}
namespace Dissonance::Networking {
class ICommsNetwork;
}
namespace Dissonance::Networking {
struct NetworkMode;
}
namespace Dissonance::Networking {
struct RoomEvent;
}
namespace Dissonance::Networking {
struct TextMessage;
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
class PlayerChannels;
}
namespace Dissonance {
class RoomChannels;
}
namespace Dissonance {
class Rooms;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
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
namespace Dissonance::Networking {
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
class BaseCommsNetwork_5;
}
namespace Dissonance::Networking {
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
class BaseCommsNetwork_5_IState;
}
namespace Dissonance::Networking {
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
class BaseCommsNetwork_5_Idle;
}
namespace Dissonance::Networking {
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
class BaseCommsNetwork_5_Session;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::BaseCommsNetwork_5);
MARK_GEN_REF_T_PTR(::Dissonance::Networking::BaseCommsNetwork_5_IState);
MARK_GEN_REF_T_PTR(::Dissonance::Networking::BaseCommsNetwork_5_Idle);
MARK_GEN_REF_T_PTR(::Dissonance::Networking::BaseCommsNetwork_5_Session);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::BaseCommsNetwork_5, "Dissonance.Networking", "BaseCommsNetwork`5");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::BaseCommsNetwork_5_IState, "Dissonance.Networking", "BaseCommsNetwork`5/IState");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::BaseCommsNetwork_5_Idle, "Dissonance.Networking", "BaseCommsNetwork`5/Idle");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::BaseCommsNetwork_5_Session, "Dissonance.Networking", "BaseCommsNetwork`5/Session");
// Dependencies 
namespace Dissonance::Networking {
// cpp template
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
// Is value type: false
// CS Name: Dissonance.Networking.BaseCommsNetwork`5/IState<TServer,TClient,TPeer,TClientParam,TServerParam>
class CORDL_TYPE BaseCommsNetwork_5_IState {
public:
// Declarations
 __declspec(property(get=get_Status)) ::Dissonance::Networking::ConnectionStatus  Status;

/// @brief Method Enter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Enter() ;

/// @brief Method Exit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Exit() ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method get_Status, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::Networking::ConnectionStatus get_Status() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseCommsNetwork_5_IState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseCommsNetwork_5_IState(BaseCommsNetwork_5_IState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16867};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking
// Dependencies System.Object
namespace Dissonance::Networking {
// cpp template
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
// Is value type: false
// CS Name: Dissonance.Networking.BaseCommsNetwork`5/Idle<TServer,TClient,TPeer,TClientParam,TServerParam>
class CORDL_TYPE BaseCommsNetwork_5_Idle : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Status)) ::Dissonance::Networking::ConnectionStatus  Status;

/// @brief Field _net, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__net, put=__cordl_internal_set__net)) ::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam>  _net;

/// @brief Convert operator to "::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>"
constexpr operator  ::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*() noexcept;

/// @brief Method Enter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Enter() ;

/// @brief Method Exit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Exit() ;

static inline ::Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>* New_ctor(::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*  net) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Update() ;

constexpr ::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam> const& __cordl_internal_get__net() const;

constexpr ::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam>& __cordl_internal_get__net() ;

constexpr void __cordl_internal_set__net(::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*  net) ;

/// @brief Method get_Status, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Dissonance::Networking::ConnectionStatus get_Status() ;

/// @brief Convert to "::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>"
constexpr ::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>* i___Dissonance__Networking__BaseCommsNetwork_5_IState_TServer_TClient_TPeer_TClientParam_TServerParam_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseCommsNetwork_5_Idle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseCommsNetwork_5_Idle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseCommsNetwork_5_Idle(BaseCommsNetwork_5_Idle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseCommsNetwork_5_Idle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseCommsNetwork_5_Idle(BaseCommsNetwork_5_Idle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16868};

/// @brief Field _net, offset: 0x10, size: 0x8, def value: None
 ::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam>  ____net;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking
// Dependencies Dissonance.Networking.NetworkMode, System.DateTime, System.Object
namespace Dissonance::Networking {
// cpp template
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
// Is value type: false
// CS Name: Dissonance.Networking.BaseCommsNetwork`5/Session<TServer,TClient,TPeer,TClientParam,TServerParam>
class CORDL_TYPE BaseCommsNetwork_5_Session : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Status)) ::Dissonance::Networking::ConnectionStatus  Status;

/// @brief Field _clientParameter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientParameter, put=__cordl_internal_set__clientParameter)) TClientParam  _clientParameter;

/// @brief Field _lastReconnectionAttempt, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastReconnectionAttempt, put=__cordl_internal_set__lastReconnectionAttempt)) ::System::DateTime  _lastReconnectionAttempt;

/// @brief Field _mode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::Dissonance::Networking::NetworkMode  _mode;

/// @brief Field _net, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__net, put=__cordl_internal_set__net)) ::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam>  _net;

/// @brief Field _reconnectionAttemptInterval, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__reconnectionAttemptInterval, put=__cordl_internal_set__reconnectionAttemptInterval)) float_t  _reconnectionAttemptInterval;

/// @brief Field _serverParameter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__serverParameter, put=__cordl_internal_set__serverParameter)) TServerParam  _serverParameter;

/// @brief Convert operator to "::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>"
constexpr operator  ::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*() noexcept;

/// @brief Method Enter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Enter() ;

/// @brief Method Exit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Exit() ;

static inline ::Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>* New_ctor(::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*  net, ::Dissonance::Networking::NetworkMode  mode, TServerParam  serverParameter, TClientParam  clientParameter) ;

/// @brief Method ShouldAttemptReconnect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ShouldAttemptReconnect() ;

/// @brief Method StartClient, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void StartClient() ;

/// @brief Method StartServer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void StartServer() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Update() ;

constexpr TClientParam const& __cordl_internal_get__clientParameter() const;

constexpr TClientParam& __cordl_internal_get__clientParameter() ;

constexpr ::System::DateTime const& __cordl_internal_get__lastReconnectionAttempt() const;

constexpr ::System::DateTime& __cordl_internal_get__lastReconnectionAttempt() ;

constexpr ::Dissonance::Networking::NetworkMode const& __cordl_internal_get__mode() const;

constexpr ::Dissonance::Networking::NetworkMode& __cordl_internal_get__mode() ;

constexpr ::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam> const& __cordl_internal_get__net() const;

constexpr ::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam>& __cordl_internal_get__net() ;

constexpr float_t const& __cordl_internal_get__reconnectionAttemptInterval() const;

constexpr float_t& __cordl_internal_get__reconnectionAttemptInterval() ;

constexpr TServerParam const& __cordl_internal_get__serverParameter() const;

constexpr TServerParam& __cordl_internal_get__serverParameter() ;

constexpr void __cordl_internal_set__clientParameter(TClientParam  value) ;

constexpr void __cordl_internal_set__lastReconnectionAttempt(::System::DateTime  value) ;

constexpr void __cordl_internal_set__mode(::Dissonance::Networking::NetworkMode  value) ;

constexpr void __cordl_internal_set__net(::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam>  value) ;

constexpr void __cordl_internal_set__reconnectionAttemptInterval(float_t  value) ;

constexpr void __cordl_internal_set__serverParameter(TServerParam  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*  net, ::Dissonance::Networking::NetworkMode  mode, TServerParam  serverParameter, TClientParam  clientParameter) ;

/// @brief Method get_Status, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Dissonance::Networking::ConnectionStatus get_Status() ;

/// @brief Convert to "::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>"
constexpr ::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>* i___Dissonance__Networking__BaseCommsNetwork_5_IState_TServer_TClient_TPeer_TClientParam_TServerParam_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseCommsNetwork_5_Session() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseCommsNetwork_5_Session", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseCommsNetwork_5_Session(BaseCommsNetwork_5_Session && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseCommsNetwork_5_Session", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseCommsNetwork_5_Session(BaseCommsNetwork_5_Session const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16869};

/// @brief Field _clientParameter, offset: 0x10, size: 0x8, def value: None
 TClientParam  ____clientParameter;

/// @brief Field _serverParameter, offset: 0x18, size: 0x8, def value: None
 TServerParam  ____serverParameter;

/// @brief Field _mode, offset: 0x20, size: 0x4, def value: None
 ::Dissonance::Networking::NetworkMode  ____mode;

/// @brief Field _net, offset: 0x28, size: 0x8, def value: None
 ::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam>  ____net;

/// @brief Field _reconnectionAttemptInterval, offset: 0x30, size: 0x4, def value: None
 float_t  ____reconnectionAttemptInterval;

/// @brief Field _lastReconnectionAttempt, offset: 0x38, size: 0x8, def value: None
 ::System::DateTime  ____lastReconnectionAttempt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking
// Dependencies Dissonance.CodecSettings, Dissonance.Networking.NetworkMode, UnityEngine.MonoBehaviour
namespace Dissonance::Networking {
// cpp template
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
// Is value type: false
// CS Name: Dissonance.Networking.BaseCommsNetwork`5<TServer,TClient,TPeer,TClientParam,TServerParam>
class CORDL_TYPE BaseCommsNetwork_5 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using IState = ::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer, TClient, TPeer, TClientParam, TServerParam>;

using Idle = ::Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer, TClient, TPeer, TClientParam, TServerParam>;

using Session = ::Dissonance::Networking::BaseCommsNetwork_5_Session<TServer, TClient, TPeer, TClientParam, TServerParam>;

 __declspec(property(get=get_Client, put=set_Client)) TClient  Client;

 __declspec(property(get=get_CodecSettings, put=set_CodecSettings)) ::Dissonance::CodecSettings  CodecSettings;

 __declspec(property(get=get_IsInitialized, put=set_IsInitialized)) bool  IsInitialized;

/// @brief Field Log, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Log, put=__cordl_internal_set_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_Mode, put=set_Mode)) ::Dissonance::Networking::NetworkMode  Mode;

/// @brief Field ModeChanged, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ModeChanged, put=__cordl_internal_set_ModeChanged)) ::System::Action_1<::Dissonance::Networking::NetworkMode>*  ModeChanged;

 __declspec(property(get=get_PlayerChannels, put=set_PlayerChannels)) ::Dissonance::PlayerChannels*  PlayerChannels;

/// @brief Field PlayerEnteredRoom, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerEnteredRoom, put=__cordl_internal_set_PlayerEnteredRoom)) ::System::Action_1<::Dissonance::Networking::RoomEvent>*  PlayerEnteredRoom;

/// @brief Field PlayerExitedRoom, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerExitedRoom, put=__cordl_internal_set_PlayerExitedRoom)) ::System::Action_1<::Dissonance::Networking::RoomEvent>*  PlayerExitedRoom;

/// @brief Field PlayerJoined, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerJoined, put=__cordl_internal_set_PlayerJoined)) ::System::Action_2<::StringW,::Dissonance::CodecSettings>*  PlayerJoined;

/// @brief Field PlayerLeft, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerLeft, put=__cordl_internal_set_PlayerLeft)) ::System::Action_1<::StringW>*  PlayerLeft;

 __declspec(property(get=get_PlayerName, put=set_PlayerName)) ::StringW  PlayerName;

/// @brief Field PlayerStartedSpeaking, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerStartedSpeaking, put=__cordl_internal_set_PlayerStartedSpeaking)) ::System::Action_1<::StringW>*  PlayerStartedSpeaking;

/// @brief Field PlayerStoppedSpeaking, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerStoppedSpeaking, put=__cordl_internal_set_PlayerStoppedSpeaking)) ::System::Action_1<::StringW>*  PlayerStoppedSpeaking;

 __declspec(property(get=get_RoomChannels, put=set_RoomChannels)) ::Dissonance::RoomChannels*  RoomChannels;

 __declspec(property(get=get_Rooms, put=set_Rooms)) ::Dissonance::Rooms*  Rooms;

 __declspec(property(get=get_Server, put=set_Server)) TServer  Server;

 __declspec(property(get=get_ServerAdmin)) ::Dissonance::Networking::Server::Admin::IServerAdmin*  ServerAdmin;

 __declspec(property(get=get_Status)) ::Dissonance::Networking::ConnectionStatus  Status;

/// @brief Field TextPacketReceived, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_TextPacketReceived, put=__cordl_internal_set_TextPacketReceived)) ::System::Action_1<::Dissonance::Networking::TextMessage>*  TextPacketReceived;

/// @brief Field VoicePacketReceived, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoicePacketReceived, put=__cordl_internal_set_VoicePacketReceived)) ::System::Action_1<::Dissonance::Networking::VoicePacket>*  VoicePacketReceived;

/// @brief Field <Client>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Client_k__BackingField, put=__cordl_internal_set__Client_k__BackingField)) TClient  _Client_k__BackingField;

/// @brief Field <CodecSettings>k__BackingField, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get__CodecSettings_k__BackingField, put=__cordl_internal_set__CodecSettings_k__BackingField)) ::Dissonance::CodecSettings  _CodecSettings_k__BackingField;

/// @brief Field <IsInitialized>k__BackingField, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsInitialized_k__BackingField, put=__cordl_internal_set__IsInitialized_k__BackingField)) bool  _IsInitialized_k__BackingField;

/// @brief Field <PlayerChannels>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayerChannels_k__BackingField, put=__cordl_internal_set__PlayerChannels_k__BackingField)) ::Dissonance::PlayerChannels*  _PlayerChannels_k__BackingField;

/// @brief Field <PlayerName>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayerName_k__BackingField, put=__cordl_internal_set__PlayerName_k__BackingField)) ::StringW  _PlayerName_k__BackingField;

/// @brief Field <RoomChannels>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__RoomChannels_k__BackingField, put=__cordl_internal_set__RoomChannels_k__BackingField)) ::Dissonance::RoomChannels*  _RoomChannels_k__BackingField;

/// @brief Field <Rooms>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Rooms_k__BackingField, put=__cordl_internal_set__Rooms_k__BackingField)) ::Dissonance::Rooms*  _Rooms_k__BackingField;

/// @brief Field <Server>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Server_k__BackingField, put=__cordl_internal_set__Server_k__BackingField)) TServer  _Server_k__BackingField;

/// @brief Field _mode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::Dissonance::Networking::NetworkMode  _mode;

/// @brief Field _nextStates, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__nextStates, put=__cordl_internal_set__nextStates)) ::System::Collections::Generic::Queue_1<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>*  _nextStates;

/// @brief Field _state, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*  _state;

/// @brief Convert operator to "::Dissonance::Networking::ICommsNetwork"
constexpr operator  ::Dissonance::Networking::ICommsNetwork*() noexcept;

/// @brief Convert operator to "::Dissonance::Networking::ICommsNetworkState"
constexpr operator  ::Dissonance::Networking::ICommsNetworkState*() noexcept;

/// @brief Method ChangeState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ChangeState(::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*  newState) ;

/// @brief Method CreateClient, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TClient CreateClient(TClientParam  connectionParameters) ;

/// @brief Method CreateServer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TServer CreateServer(TServerParam  connectionParameters) ;

/// @brief Method Dissonance.Networking.ICommsNetwork.Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dissonance_Networking_ICommsNetwork_Initialize(::StringW  playerName, ::Dissonance::Rooms*  rooms, ::Dissonance::PlayerChannels*  playerChannels, ::Dissonance::RoomChannels*  roomChannels, ::Dissonance::CodecSettings  codecSettings) ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method LoadState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LoadState() ;

static inline ::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>* New_ctor() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnInspectorGui, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnInspectorGui() ;

/// @brief Method OnModeChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnModeChanged(::Dissonance::Networking::NetworkMode  obj) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnPlayerEnteredRoom(::Dissonance::Networking::RoomEvent  evt) ;

/// @brief Method OnPlayerExitedRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnPlayerExitedRoom(::Dissonance::Networking::RoomEvent  evt) ;

/// @brief Method OnPlayerJoined, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnPlayerJoined(::StringW  obj, ::Dissonance::CodecSettings  codecSettings) ;

/// @brief Method OnPlayerLeft, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnPlayerLeft(::StringW  obj) ;

/// @brief Method OnPlayerStartedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnPlayerStartedSpeaking(::StringW  obj) ;

/// @brief Method OnPlayerStoppedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnPlayerStoppedSpeaking(::StringW  obj) ;

/// @brief Method OnTextPacketReceived, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnTextPacketReceived(::Dissonance::Networking::TextMessage  obj) ;

/// @brief Method OnVoicePacketReceived, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnVoicePacketReceived(::Dissonance::Networking::VoicePacket  obj) ;

/// @brief Method RunAsClient, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RunAsClient(TClientParam  clientParameters) ;

/// @brief Method RunAsDedicatedServer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RunAsDedicatedServer(TServerParam  serverParameters) ;

/// @brief Method RunAsHost, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RunAsHost(TServerParam  serverParameters, TClientParam  clientParameters) ;

/// @brief Method SendText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SendText(::StringW  data, ::Dissonance::ChannelType  recipientType, ::StringW  recipientId) ;

/// @brief Method SendVoice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SendVoice(::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method StartClient, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void StartClient(TClientParam  connectParams) ;

/// @brief Method StartServer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void StartServer(TServerParam  connectParams) ;

/// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method StopClient, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void StopClient() ;

/// @brief Method StopServer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void StopServer() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Dissonance::Log* const& __cordl_internal_get_Log() const;

constexpr ::Dissonance::Log*& __cordl_internal_get_Log() ;

constexpr ::System::Action_1<::Dissonance::Networking::NetworkMode>* const& __cordl_internal_get_ModeChanged() const;

constexpr ::System::Action_1<::Dissonance::Networking::NetworkMode>*& __cordl_internal_get_ModeChanged() ;

constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>* const& __cordl_internal_get_PlayerEnteredRoom() const;

constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>*& __cordl_internal_get_PlayerEnteredRoom() ;

constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>* const& __cordl_internal_get_PlayerExitedRoom() const;

constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>*& __cordl_internal_get_PlayerExitedRoom() ;

constexpr ::System::Action_2<::StringW,::Dissonance::CodecSettings>* const& __cordl_internal_get_PlayerJoined() const;

constexpr ::System::Action_2<::StringW,::Dissonance::CodecSettings>*& __cordl_internal_get_PlayerJoined() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PlayerLeft() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PlayerLeft() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PlayerStartedSpeaking() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PlayerStartedSpeaking() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PlayerStoppedSpeaking() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PlayerStoppedSpeaking() ;

constexpr ::System::Action_1<::Dissonance::Networking::TextMessage>* const& __cordl_internal_get_TextPacketReceived() const;

constexpr ::System::Action_1<::Dissonance::Networking::TextMessage>*& __cordl_internal_get_TextPacketReceived() ;

constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>* const& __cordl_internal_get_VoicePacketReceived() const;

constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>*& __cordl_internal_get_VoicePacketReceived() ;

constexpr TClient const& __cordl_internal_get__Client_k__BackingField() const;

constexpr TClient& __cordl_internal_get__Client_k__BackingField() ;

constexpr ::Dissonance::CodecSettings const& __cordl_internal_get__CodecSettings_k__BackingField() const;

constexpr ::Dissonance::CodecSettings& __cordl_internal_get__CodecSettings_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField() ;

constexpr ::Dissonance::PlayerChannels* const& __cordl_internal_get__PlayerChannels_k__BackingField() const;

constexpr ::Dissonance::PlayerChannels*& __cordl_internal_get__PlayerChannels_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PlayerName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PlayerName_k__BackingField() ;

constexpr ::Dissonance::RoomChannels* const& __cordl_internal_get__RoomChannels_k__BackingField() const;

constexpr ::Dissonance::RoomChannels*& __cordl_internal_get__RoomChannels_k__BackingField() ;

constexpr ::Dissonance::Rooms* const& __cordl_internal_get__Rooms_k__BackingField() const;

constexpr ::Dissonance::Rooms*& __cordl_internal_get__Rooms_k__BackingField() ;

constexpr TServer const& __cordl_internal_get__Server_k__BackingField() const;

constexpr TServer& __cordl_internal_get__Server_k__BackingField() ;

constexpr ::Dissonance::Networking::NetworkMode const& __cordl_internal_get__mode() const;

constexpr ::Dissonance::Networking::NetworkMode& __cordl_internal_get__mode() ;

constexpr ::System::Collections::Generic::Queue_1<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>* const& __cordl_internal_get__nextStates() const;

constexpr ::System::Collections::Generic::Queue_1<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>*& __cordl_internal_get__nextStates() ;

constexpr ::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>* const& __cordl_internal_get__state() const;

constexpr ::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set_Log(::Dissonance::Log*  value) ;

constexpr void __cordl_internal_set_ModeChanged(::System::Action_1<::Dissonance::Networking::NetworkMode>*  value) ;

constexpr void __cordl_internal_set_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

constexpr void __cordl_internal_set_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

constexpr void __cordl_internal_set_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value) ;

constexpr void __cordl_internal_set_PlayerLeft(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_TextPacketReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value) ;

constexpr void __cordl_internal_set_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

constexpr void __cordl_internal_set__Client_k__BackingField(TClient  value) ;

constexpr void __cordl_internal_set__CodecSettings_k__BackingField(::Dissonance::CodecSettings  value) ;

constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PlayerChannels_k__BackingField(::Dissonance::PlayerChannels*  value) ;

constexpr void __cordl_internal_set__PlayerName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__RoomChannels_k__BackingField(::Dissonance::RoomChannels*  value) ;

constexpr void __cordl_internal_set__Rooms_k__BackingField(::Dissonance::Rooms*  value) ;

constexpr void __cordl_internal_set__Server_k__BackingField(TServer  value) ;

constexpr void __cordl_internal_set__mode(::Dissonance::Networking::NetworkMode  value) ;

constexpr void __cordl_internal_set__nextStates(::System::Collections::Generic::Queue_1<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>*  value) ;

constexpr void __cordl_internal_set__state(::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_ModeChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_ModeChanged(::System::Action_1<::Dissonance::Networking::NetworkMode>*  value) ;

/// @brief Method add_PlayerEnteredRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method add_PlayerExitedRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method add_PlayerJoined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value) ;

/// @brief Method add_PlayerLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_PlayerLeft(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_PlayerStartedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_PlayerStoppedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_TextPacketReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_TextPacketReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value) ;

/// @brief Method add_VoicePacketReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

/// @brief Method get_Client, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TClient get_Client() ;

/// @brief Method get_CodecSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Dissonance::CodecSettings get_CodecSettings() ;

/// @brief Method get_IsInitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsInitialized() ;

/// @brief Method get_Mode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Dissonance::Networking::NetworkMode get_Mode() ;

/// @brief Method get_PlayerChannels, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Dissonance::PlayerChannels* get_PlayerChannels() ;

/// @brief Method get_PlayerName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_PlayerName() ;

/// @brief Method get_RoomChannels, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Dissonance::RoomChannels* get_RoomChannels() ;

/// @brief Method get_Rooms, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Dissonance::Rooms* get_Rooms() ;

/// @brief Method get_Server, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TServer get_Server() ;

/// @brief Method get_ServerAdmin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Dissonance::Networking::Server::Admin::IServerAdmin* get_ServerAdmin() ;

/// @brief Method get_Status, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Dissonance::Networking::ConnectionStatus get_Status() ;

/// @brief Convert to "::Dissonance::Networking::ICommsNetwork"
constexpr ::Dissonance::Networking::ICommsNetwork* i___Dissonance__Networking__ICommsNetwork() noexcept;

/// @brief Convert to "::Dissonance::Networking::ICommsNetworkState"
constexpr ::Dissonance::Networking::ICommsNetworkState* i___Dissonance__Networking__ICommsNetworkState() noexcept;

/// @brief Method remove_ModeChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_ModeChanged(::System::Action_1<::Dissonance::Networking::NetworkMode>*  value) ;

/// @brief Method remove_PlayerEnteredRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method remove_PlayerExitedRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method remove_PlayerJoined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value) ;

/// @brief Method remove_PlayerLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_PlayerLeft(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_PlayerStartedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_PlayerStoppedSpeaking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_TextPacketReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_TextPacketReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value) ;

/// @brief Method remove_VoicePacketReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

/// @brief Method set_Client, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Client(TClient  value) ;

/// @brief Method set_CodecSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_CodecSettings(::Dissonance::CodecSettings  value) ;

/// @brief Method set_IsInitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_IsInitialized(bool  value) ;

/// @brief Method set_Mode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Mode(::Dissonance::Networking::NetworkMode  value) ;

/// @brief Method set_PlayerChannels, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_PlayerChannels(::Dissonance::PlayerChannels*  value) ;

/// @brief Method set_PlayerName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_PlayerName(::StringW  value) ;

/// @brief Method set_RoomChannels, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_RoomChannels(::Dissonance::RoomChannels*  value) ;

/// @brief Method set_Rooms, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Rooms(::Dissonance::Rooms*  value) ;

/// @brief Method set_Server, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Server(TServer  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseCommsNetwork_5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseCommsNetwork_5", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseCommsNetwork_5(BaseCommsNetwork_5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseCommsNetwork_5", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseCommsNetwork_5(BaseCommsNetwork_5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16870};

/// @brief Field _nextStates, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>*  ____nextStates;

/// @brief Field _state, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*  ____state;

/// @brief Field _mode, offset: 0x30, size: 0x4, def value: None
 ::Dissonance::Networking::NetworkMode  ____mode;

/// @brief Field <Server>k__BackingField, offset: 0x38, size: 0x8, def value: None
 TServer  ____Server_k__BackingField;

/// @brief Field <Client>k__BackingField, offset: 0x40, size: 0x8, def value: None
 TClient  ____Client_k__BackingField;

/// @brief Field Log, offset: 0x48, size: 0x8, def value: None
 ::Dissonance::Log*  ___Log;

/// @brief Field <PlayerName>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____PlayerName_k__BackingField;

/// @brief Field <Rooms>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::Dissonance::Rooms*  ____Rooms_k__BackingField;

/// @brief Field <PlayerChannels>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::Dissonance::PlayerChannels*  ____PlayerChannels_k__BackingField;

/// @brief Field <RoomChannels>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Dissonance::RoomChannels*  ____RoomChannels_k__BackingField;

/// @brief Field <CodecSettings>k__BackingField, offset: 0x70, size: 0xc, def value: None
 ::Dissonance::CodecSettings  ____CodecSettings_k__BackingField;

/// @brief Field ModeChanged, offset: 0x80, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::NetworkMode>*  ___ModeChanged;

/// @brief Field PlayerJoined, offset: 0x88, size: 0x8, def value: None
 ::System::Action_2<::StringW,::Dissonance::CodecSettings>*  ___PlayerJoined;

/// @brief Field PlayerLeft, offset: 0x90, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___PlayerLeft;

/// @brief Field VoicePacketReceived, offset: 0x98, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::VoicePacket>*  ___VoicePacketReceived;

/// @brief Field TextPacketReceived, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::TextMessage>*  ___TextPacketReceived;

/// @brief Field PlayerStartedSpeaking, offset: 0xa8, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___PlayerStartedSpeaking;

/// @brief Field PlayerStoppedSpeaking, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___PlayerStoppedSpeaking;

/// @brief Field PlayerEnteredRoom, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::RoomEvent>*  ___PlayerEnteredRoom;

/// @brief Field PlayerExitedRoom, offset: 0xc0, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::RoomEvent>*  ___PlayerExitedRoom;

/// @brief Field <IsInitialized>k__BackingField, offset: 0xc8, size: 0x1, def value: None
 bool  ____IsInitialized_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking
