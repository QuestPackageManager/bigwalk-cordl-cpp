#pragma once
// IWYU pragma private; include "Mirror/NetworkServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__TimeSample_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkServer)
namespace Mirror {
struct CommandMessage;
}
namespace Mirror {
struct EntityStateMessage;
}
namespace Mirror {
class InterestManagementBase;
}
namespace Mirror {
class LocalConnectionToClient;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkConnection;
}
namespace Mirror {
class NetworkIdentity;
}
namespace Mirror {
class NetworkMessageDelegate;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
struct NetworkServer_DestroyMode;
}
namespace Mirror {
template<typename T>
class NetworkServer___c__DisplayClass67_0_1;
}
namespace Mirror {
class NetworkWriterPooled;
}
namespace Mirror {
class NetworkWriter;
}
namespace Mirror {
struct ReadyMessage;
}
namespace Mirror {
struct TimeSnapshotMessage;
}
namespace Mirror {
struct TransportError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Mirror {
struct NetworkServer_DestroyMode;
}
namespace Mirror {
class NetworkServer;
}
namespace Mirror {
template<typename T>
class NetworkServer___c__DisplayClass67_0_1;
}
// Write type traits
MARK_VAL_T(::Mirror::NetworkServer_DestroyMode);
MARK_REF_T(::Mirror::NetworkServer*);
MARK_GEN_REF_T_PTR(::Mirror::NetworkServer___c__DisplayClass67_0_1);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkServer_DestroyMode, "Mirror", "NetworkServer/DestroyMode");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkServer*, "Mirror", "NetworkServer");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::NetworkServer___c__DisplayClass67_0_1, "Mirror", "NetworkServer/<>c__DisplayClass67_0`1");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.NetworkServer/DestroyMode
struct CORDL_TYPE NetworkServer_DestroyMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkServer_DestroyMode_Unwrapped
enum struct __NetworkServer_DestroyMode_Unwrapped : int32_t {
__E_Destroy = static_cast<int32_t>(0x0),
__E_Reset = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkServer_DestroyMode_Unwrapped () const noexcept {
return static_cast<__NetworkServer_DestroyMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkServer_DestroyMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetworkServer_DestroyMode(int32_t  value__) noexcept;

/// @brief Field Destroy value: I32(0)
static ::Mirror::NetworkServer_DestroyMode const Destroy;

/// @brief Field Reset value: I32(1)
static ::Mirror::NetworkServer_DestroyMode const Reset;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18339};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkServer_DestroyMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkServer_DestroyMode) == 0x4, "Size mismatch!");

} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Mirror.NetworkServer/<>c__DisplayClass67_0`1<T>
class CORDL_TYPE NetworkServer___c__DisplayClass67_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field handler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::System::Action_1<T>*  handler;

static inline ::Mirror::NetworkServer___c__DisplayClass67_0_1<T>* New_ctor() ;

/// @brief Method <ReplaceHandler>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ReplaceHandler_b__0(::Mirror::NetworkConnectionToClient*  _, T  value) ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_handler() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_handler() ;

constexpr void __cordl_internal_set_handler(::System::Action_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkServer___c__DisplayClass67_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkServer___c__DisplayClass67_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkServer___c__DisplayClass67_0_1(NetworkServer___c__DisplayClass67_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkServer___c__DisplayClass67_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkServer___c__DisplayClass67_0_1(NetworkServer___c__DisplayClass67_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18340};

/// @brief Field handler, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<T>*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
// Dependencies Mirror.TimeSample, System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkServer
class CORDL_TYPE NetworkServer : public ::System::Object {
public:
// Declarations
using DestroyMode = ::Mirror::NetworkServer_DestroyMode;

template<typename T>
using __c__DisplayClass67_0_1 = ::Mirror::NetworkServer___c__DisplayClass67_0_1<T>;

/// @brief Field OnConnectedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnConnectedEvent, put=setStaticF_OnConnectedEvent)) ::System::Action_1<::Mirror::NetworkConnectionToClient*>*  OnConnectedEvent;

/// @brief Field OnDisconnectedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDisconnectedEvent, put=setStaticF_OnDisconnectedEvent)) ::System::Action_1<::Mirror::NetworkConnectionToClient*>*  OnDisconnectedEvent;

/// @brief Field OnErrorEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnErrorEvent, put=setStaticF_OnErrorEvent)) ::System::Action_3<::Mirror::NetworkConnectionToClient*,::Mirror::TransportError,::StringW>*  OnErrorEvent;

/// @brief Field <active>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__active_k__BackingField, put=setStaticF__active_k__BackingField)) bool  _active_k__BackingField;

/// @brief Field <localConnection>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__localConnection_k__BackingField, put=setStaticF__localConnection_k__BackingField)) ::Mirror::LocalConnectionToClient*  _localConnection_k__BackingField;

/// @brief Field actualTickRate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_actualTickRate, put=setStaticF_actualTickRate)) int32_t  actualTickRate;

/// @brief Field actualTickRateCounter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_actualTickRateCounter, put=setStaticF_actualTickRateCounter)) int32_t  actualTickRateCounter;

/// @brief Field actualTickRateStart, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_actualTickRateStart, put=setStaticF_actualTickRateStart)) double_t  actualTickRateStart;

/// @brief Field aoi, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_aoi, put=setStaticF_aoi)) ::UnityW<::Mirror::InterestManagementBase>  aoi;

/// @brief Field connections, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_connections, put=setStaticF_connections)) ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>*  connections;

/// @brief Field connectionsCopy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_connectionsCopy, put=setStaticF_connectionsCopy)) ::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>*  connectionsCopy;

/// @brief Field dontListen, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_dontListen, put=setStaticF_dontListen)) bool  dontListen;

/// @brief Field earlyUpdateDuration, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_earlyUpdateDuration, put=setStaticF_earlyUpdateDuration)) ::Mirror::TimeSample  earlyUpdateDuration;

/// @brief Field fullUpdateDuration, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_fullUpdateDuration, put=setStaticF_fullUpdateDuration)) ::Mirror::TimeSample  fullUpdateDuration;

/// @brief Field handlers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_handlers, put=setStaticF_handlers)) ::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>*  handlers;

/// @brief Field initialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_initialized, put=setStaticF_initialized)) bool  initialized;

/// @brief Field isLoadingScene, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isLoadingScene, put=setStaticF_isLoadingScene)) bool  isLoadingScene;

/// @brief Field lastSendTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lastSendTime, put=setStaticF_lastSendTime)) double_t  lastSendTime;

/// @brief Field lateUpdateDuration, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_lateUpdateDuration, put=setStaticF_lateUpdateDuration)) ::Mirror::TimeSample  lateUpdateDuration;

/// @brief Field maxConnections, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxConnections, put=setStaticF_maxConnections)) int32_t  maxConnections;

/// @brief Field spawned, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_spawned, put=setStaticF_spawned)) ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>*  spawned;

/// @brief Field tickRate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_tickRate, put=setStaticF_tickRate)) int32_t  tickRate;

/// @brief Method ActivateHostScene, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void ActivateHostScene() ;

/// @brief Method AddAllReadyServerConnectionsToObservers, addr 0x18154c9e0, size 0x170, virtual false, abstract: false, final false
static inline void AddAllReadyServerConnectionsToObservers(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method AddConnection, addr 0x18154cb50, size 0x90, virtual false, abstract: false, final false
static inline bool AddConnection(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method AddPlayerForConnection, addr 0x18154ccd0, size 0x190, virtual false, abstract: false, final false
static inline bool AddPlayerForConnection(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  player) ;

/// @brief Method AddPlayerForConnection, addr 0x18154cbe0, size 0xf0, virtual false, abstract: false, final false
static inline bool AddPlayerForConnection(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  player, uint32_t  assetId) ;

/// @brief Method AddTransportHandlers, addr 0x18154ce60, size 0x320, virtual false, abstract: false, final false
static inline void AddTransportHandlers() ;

/// @brief Method Broadcast, addr 0x18154d320, size 0x1d0, virtual false, abstract: false, final false
static inline void Broadcast() ;

/// @brief Method BroadcastToConnection, addr 0x18154d180, size 0x1a0, virtual false, abstract: false, final false
static inline void BroadcastToConnection(::Mirror::NetworkConnectionToClient*  connection) ;

/// @brief Method CleanupSpawned, addr 0x18154d4f0, size 0x180, virtual false, abstract: false, final false
static inline void CleanupSpawned() ;

/// @brief Method ClearHandlers, addr 0x18154d670, size 0x50, virtual false, abstract: false, final false
static inline void ClearHandlers() ;

/// @brief Method CreateSpawnMessagePayload, addr 0x18154d6c0, size 0x100, virtual false, abstract: false, final false
static inline ::System::ArraySegment_1<uint8_t> CreateSpawnMessagePayload(bool  isOwner, ::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkWriterPooled*  ownerWriter, ::Mirror::NetworkWriterPooled*  observersWriter) ;

/// @brief Method Destroy, addr 0x18154dd00, size 0x10, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::GameObject*  obj) ;

/// @brief Method DestroyObject, addr 0x18154d880, size 0x360, virtual false, abstract: false, final false
static inline void DestroyObject(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkServer_DestroyMode  mode) ;

/// @brief Method DestroyObject, addr 0x18154d7c0, size 0xc0, virtual false, abstract: false, final false
static inline void DestroyObject(::UnityEngine::GameObject*  obj, ::Mirror::NetworkServer_DestroyMode  mode) ;

/// @brief Method DestroyPlayerForConnection, addr 0x18154dbe0, size 0x120, virtual false, abstract: false, final false
static inline void DestroyPlayerForConnection(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method DisconnectAll, addr 0x18154dd10, size 0x180, virtual false, abstract: false, final false
static inline void DisconnectAll() ;

/// @brief Method GetNetworkIdentity, addr 0x18154de90, size 0x70, virtual false, abstract: false, final false
static inline bool GetNetworkIdentity(::UnityEngine::GameObject*  go, ::by_ref<::Mirror::NetworkIdentity*>  identity) ;

/// @brief Method HasExternalConnections, addr 0x18154df00, size 0xb0, virtual false, abstract: false, final false
static inline bool HasExternalConnections() ;

/// @brief Method HideForConnection, addr 0x18154dfb0, size 0x30, virtual false, abstract: false, final false
static inline void HideForConnection(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnection*  conn) ;

/// @brief Method Initialize, addr 0x18154dfe0, size 0x2a0, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method Listen, addr 0x18154e280, size 0x1b0, virtual false, abstract: false, final false
static inline void Listen(int32_t  maxConns) ;

/// @brief Method NetworkEarlyUpdate, addr 0x18154e430, size 0x240, virtual false, abstract: false, final false
static inline void NetworkEarlyUpdate() ;

/// @brief Method NetworkLateUpdate, addr 0x18154e670, size 0x2b0, virtual false, abstract: false, final false
static inline void NetworkLateUpdate() ;

/// @brief Method OnClientReadyMessage, addr 0x18154e920, size 0x40, virtual false, abstract: false, final false
static inline void OnClientReadyMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::ReadyMessage  msg) ;

/// @brief Method OnCommandMessage, addr 0x18154e960, size 0x1f0, virtual false, abstract: false, final false
static inline void OnCommandMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::CommandMessage  msg, int32_t  channelId) ;

/// @brief Method OnConnected, addr 0x18154eb50, size 0xd0, virtual false, abstract: false, final false
static inline void OnConnected(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnEntityStateMessage, addr 0x18154ec20, size 0x2b0, virtual false, abstract: false, final false
static inline void OnEntityStateMessage(::Mirror::NetworkConnectionToClient*  connection, ::Mirror::EntityStateMessage  message) ;

/// @brief Method OnTimeSnapshotMessage, addr 0x18154eed0, size 0x1e0, virtual false, abstract: false, final false
static inline void OnTimeSnapshotMessage(::Mirror::NetworkConnectionToClient*  connection, ::Mirror::TimeSnapshotMessage  _) ;

/// @brief Method OnTransportConnected, addr 0x18154f0b0, size 0x160, virtual false, abstract: false, final false
static inline void OnTransportConnected(int32_t  connectionId) ;

/// @brief Method OnTransportData, addr 0x18154f210, size 0x450, virtual false, abstract: false, final false
static inline void OnTransportData(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  data, int32_t  channelId) ;

/// @brief Method OnTransportDisconnected, addr 0x18154f660, size 0x200, virtual false, abstract: false, final false
static inline void OnTransportDisconnected(int32_t  connectionId) ;

/// @brief Method OnTransportError, addr 0x18154f860, size 0x100, virtual false, abstract: false, final false
static inline void OnTransportError(int32_t  connectionId, ::Mirror::TransportError  error, ::StringW  reason) ;

/// @brief Method RebuildObservers, addr 0x18154fae0, size 0x220, virtual false, abstract: false, final false
static inline void RebuildObservers(::Mirror::NetworkIdentity*  identity, bool  initialize) ;

/// @brief Method RebuildObserversDefault, addr 0x18154f960, size 0x180, virtual false, abstract: false, final false
static inline void RebuildObserversDefault(::Mirror::NetworkIdentity*  identity, bool  initialize) ;

/// @brief Method RegisterHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RegisterHandler(::System::Action_2<::Mirror::NetworkConnectionToClient*,T>*  handler, bool  requireAuthentication) ;

/// @brief Method RegisterHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RegisterHandler(::System::Action_3<::Mirror::NetworkConnectionToClient*,T,int32_t>*  handler, bool  requireAuthentication) ;

/// @brief Method RegisterMessageHandlers, addr 0x18154fd00, size 0x110, virtual false, abstract: false, final false
static inline void RegisterMessageHandlers() ;

/// @brief Method RemoveConnection, addr 0x18154fe10, size 0x50, virtual false, abstract: false, final false
static inline bool RemoveConnection(int32_t  connectionId) ;

/// @brief Method RemoveLocalConnection, addr 0x18154fe60, size 0x100, virtual false, abstract: false, final false
static inline void RemoveLocalConnection() ;

/// @brief Method RemovePlayerForConnection, addr 0x18154ff60, size 0x80, virtual false, abstract: false, final false
static inline void RemovePlayerForConnection(::Mirror::NetworkConnection*  conn, bool  destroyServerObject) ;

/// @brief Method RemoveTransportHandlers, addr 0x18154ffe0, size 0x320, virtual false, abstract: false, final false
static inline void RemoveTransportHandlers() ;

/// @brief Method ReplaceHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ReplaceHandler(::System::Action_1<T>*  handler, bool  requireAuthentication) ;

/// @brief Method ReplaceHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ReplaceHandler(::System::Action_2<::Mirror::NetworkConnectionToClient*,T>*  handler, bool  requireAuthentication) ;

/// @brief Method ReplacePlayerForConnection, addr 0x181550670, size 0xf0, virtual false, abstract: false, final false
static inline bool ReplacePlayerForConnection(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  player, uint32_t  assetId, bool  keepAuthority) ;

/// @brief Method ReplacePlayerForConnection, addr 0x181550300, size 0x370, virtual false, abstract: false, final false
static inline bool ReplacePlayerForConnection(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  player, bool  keepAuthority) ;

/// @brief Method Respawn, addr 0x181550760, size 0x50, virtual false, abstract: false, final false
static inline void Respawn(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method SendChangeOwnerMessage, addr 0x1815507b0, size 0xa0, virtual false, abstract: false, final false
static inline void SendChangeOwnerMessage(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method SendSpawnMessage, addr 0x181550850, size 0x3c0, virtual false, abstract: false, final false
static inline void SendSpawnMessage(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnection*  conn) ;

/// @brief Method SendToAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SendToAll(T  message, int32_t  channelId, bool  sendToReadyOnly) ;

/// @brief Method SendToObservers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SendToObservers(::Mirror::NetworkIdentity*  identity, T  message, int32_t  channelId) ;

/// @brief Method SendToReady, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SendToReady(T  message, int32_t  channelId) ;

/// @brief Method SendToReadyObservers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SendToReadyObservers(::Mirror::NetworkIdentity*  identity, T  message, int32_t  channelId) ;

/// @brief Method SendToReadyObservers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SendToReadyObservers(::Mirror::NetworkIdentity*  identity, T  message, bool  includeOwner, int32_t  channelId) ;

/// @brief Method SerializeForConnection, addr 0x181550c10, size 0xe0, virtual false, abstract: false, final false
static inline ::Mirror::NetworkWriter* SerializeForConnection(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  connection) ;

/// @brief Method SetAllClientsNotReady, addr 0x181550cf0, size 0xe0, virtual false, abstract: false, final false
static inline void SetAllClientsNotReady() ;

/// @brief Method SetClientNotReady, addr 0x181550dd0, size 0x40, virtual false, abstract: false, final false
static inline void SetClientNotReady(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method SetClientReady, addr 0x18154e920, size 0x40, virtual false, abstract: false, final false
static inline void SetClientReady(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method SetLocalConnection, addr 0x181550e10, size 0x90, virtual false, abstract: false, final false
static inline void SetLocalConnection(::Mirror::LocalConnectionToClient*  conn) ;

/// @brief Method ShowForConnection, addr 0x181550ea0, size 0x30, virtual false, abstract: false, final false
static inline void ShowForConnection(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnection*  conn) ;

/// @brief Method Shutdown, addr 0x181550ed0, size 0x580, virtual false, abstract: false, final false
static inline void Shutdown() ;

/// @brief Method Spawn, addr 0x181551df0, size 0xf0, virtual false, abstract: false, final false
static inline void Spawn(::UnityEngine::GameObject*  obj, uint32_t  assetId, ::Mirror::NetworkConnection*  ownerConnection) ;

/// @brief Method Spawn, addr 0x181551f70, size 0x10, virtual false, abstract: false, final false
static inline void Spawn(::UnityEngine::GameObject*  obj, ::Mirror::NetworkConnection*  ownerConnection) ;

/// @brief Method Spawn, addr 0x181551ee0, size 0x90, virtual false, abstract: false, final false
static inline void Spawn(::UnityEngine::GameObject*  obj, ::UnityEngine::GameObject*  ownerPlayer) ;

/// @brief Method SpawnObject, addr 0x181551450, size 0x670, virtual false, abstract: false, final false
static inline void SpawnObject(::UnityEngine::GameObject*  obj, ::Mirror::NetworkConnection*  ownerConnection) ;

/// @brief Method SpawnObjects, addr 0x181551ac0, size 0x150, virtual false, abstract: false, final false
static inline bool SpawnObjects() ;

/// @brief Method SpawnObserversForConnection, addr 0x181551c10, size 0x1e0, virtual false, abstract: false, final false
static inline void SpawnObserversForConnection(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method UnSpawn, addr 0x181551f80, size 0x10, virtual false, abstract: false, final false
static inline void UnSpawn(::UnityEngine::GameObject*  obj) ;

/// @brief Method UnpackAndInvoke, addr 0x181551f90, size 0x150, virtual false, abstract: false, final false
static inline bool UnpackAndInvoke(::Mirror::NetworkConnectionToClient*  connection, ::Mirror::NetworkReader*  reader, int32_t  channelId) ;

/// @brief Method UnregisterHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void UnregisterHandler() ;

/// @brief Method ValidParent, addr 0x1815520e0, size 0x80, virtual false, abstract: false, final false
static inline bool ValidParent(::Mirror::NetworkIdentity*  identity) ;

static inline ::System::Action_1<::Mirror::NetworkConnectionToClient*>* getStaticF_OnConnectedEvent() ;

static inline ::System::Action_1<::Mirror::NetworkConnectionToClient*>* getStaticF_OnDisconnectedEvent() ;

static inline ::System::Action_3<::Mirror::NetworkConnectionToClient*,::Mirror::TransportError,::StringW>* getStaticF_OnErrorEvent() ;

static inline bool getStaticF__active_k__BackingField() ;

static inline ::Mirror::LocalConnectionToClient* getStaticF__localConnection_k__BackingField() ;

static inline int32_t getStaticF_actualTickRate() ;

static inline int32_t getStaticF_actualTickRateCounter() ;

static inline double_t getStaticF_actualTickRateStart() ;

static inline ::UnityW<::Mirror::InterestManagementBase> getStaticF_aoi() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>* getStaticF_connections() ;

static inline ::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>* getStaticF_connectionsCopy() ;

static inline bool getStaticF_dontListen() ;

static inline ::Mirror::TimeSample getStaticF_earlyUpdateDuration() ;

static inline ::Mirror::TimeSample getStaticF_fullUpdateDuration() ;

static inline ::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>* getStaticF_handlers() ;

static inline bool getStaticF_initialized() ;

static inline bool getStaticF_isLoadingScene() ;

static inline double_t getStaticF_lastSendTime() ;

static inline ::Mirror::TimeSample getStaticF_lateUpdateDuration() ;

static inline int32_t getStaticF_maxConnections() ;

static inline ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>* getStaticF_spawned() ;

static inline int32_t getStaticF_tickRate() ;

/// @brief Method get_active, addr 0x1803163c0, size 0x40, virtual false, abstract: false, final false
static inline bool get_active() ;

/// @brief Method get_activeHost, addr 0x1815522c0, size 0x40, virtual false, abstract: false, final false
static inline bool get_activeHost() ;

/// @brief Method get_localClientActive, addr 0x1815522c0, size 0x40, virtual false, abstract: false, final false
static inline bool get_localClientActive() ;

/// @brief Method get_localConnection, addr 0x181552300, size 0x40, virtual false, abstract: false, final false
static inline ::Mirror::LocalConnectionToClient* get_localConnection() ;

/// @brief Method get_sendInterval, addr 0x181541660, size 0x70, virtual false, abstract: false, final false
static inline float_t get_sendInterval() ;

/// @brief Method get_sendRate, addr 0x1815416d0, size 0x40, virtual false, abstract: false, final false
static inline int32_t get_sendRate() ;

/// @brief Method get_tickInterval, addr 0x18154a130, size 0x60, virtual false, abstract: false, final false
static inline float_t get_tickInterval() ;

static inline void setStaticF_OnConnectedEvent(::System::Action_1<::Mirror::NetworkConnectionToClient*>*  value) ;

static inline void setStaticF_OnDisconnectedEvent(::System::Action_1<::Mirror::NetworkConnectionToClient*>*  value) ;

static inline void setStaticF_OnErrorEvent(::System::Action_3<::Mirror::NetworkConnectionToClient*,::Mirror::TransportError,::StringW>*  value) ;

static inline void setStaticF__active_k__BackingField(bool  value) ;

static inline void setStaticF__localConnection_k__BackingField(::Mirror::LocalConnectionToClient*  value) ;

static inline void setStaticF_actualTickRate(int32_t  value) ;

static inline void setStaticF_actualTickRateCounter(int32_t  value) ;

static inline void setStaticF_actualTickRateStart(double_t  value) ;

static inline void setStaticF_aoi(::UnityW<::Mirror::InterestManagementBase>  value) ;

static inline void setStaticF_connections(::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>*  value) ;

static inline void setStaticF_connectionsCopy(::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>*  value) ;

static inline void setStaticF_dontListen(bool  value) ;

static inline void setStaticF_earlyUpdateDuration(::Mirror::TimeSample  value) ;

static inline void setStaticF_fullUpdateDuration(::Mirror::TimeSample  value) ;

static inline void setStaticF_handlers(::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>*  value) ;

static inline void setStaticF_initialized(bool  value) ;

static inline void setStaticF_isLoadingScene(bool  value) ;

static inline void setStaticF_lastSendTime(double_t  value) ;

static inline void setStaticF_lateUpdateDuration(::Mirror::TimeSample  value) ;

static inline void setStaticF_maxConnections(int32_t  value) ;

static inline void setStaticF_spawned(::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>*  value) ;

static inline void setStaticF_tickRate(int32_t  value) ;

/// @brief Method set_active, addr 0x181552340, size 0x50, virtual false, abstract: false, final false
static inline void set_active(bool  value) ;

/// @brief Method set_localConnection, addr 0x181552390, size 0x180, virtual false, abstract: false, final false
static inline void set_localConnection(::Mirror::LocalConnectionToClient*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkServer(NetworkServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkServer(NetworkServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18341};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkServer) == 0x10, "Size mismatch!");

} // namespace end def Mirror
