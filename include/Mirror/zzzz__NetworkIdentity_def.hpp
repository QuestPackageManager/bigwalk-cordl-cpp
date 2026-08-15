#pragma once
// IWYU pragma private; include "Mirror/NetworkIdentity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkIdentitySerialization_def.hpp"
#include "Mirror/zzzz__Visibility_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkIdentity)
namespace Mirror::RemoteCalls {
struct RemoteCallType;
}
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkConnection;
}
namespace Mirror {
struct NetworkIdentitySerialization;
}
namespace Mirror {
class NetworkIdentity_ClientAuthorityCallback;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Mirror {
class NetworkIdentity;
}
namespace Mirror {
class NetworkIdentity_ClientAuthorityCallback;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkIdentity*);
MARK_REF_T(::Mirror::NetworkIdentity_ClientAuthorityCallback*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkIdentity*, "Mirror", "NetworkIdentity");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkIdentity_ClientAuthorityCallback*, "Mirror", "NetworkIdentity/ClientAuthorityCallback");
// Dependencies System.MulticastDelegate
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkIdentity/ClientAuthorityCallback
class CORDL_TYPE NetworkIdentity_ClientAuthorityCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181535df0, size 0x310, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::NetworkIdentity*  identity, bool  authorityState, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::NetworkIdentity*  identity, bool  authorityState) ;

static inline ::Mirror::NetworkIdentity_ClientAuthorityCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181536100, size 0x190, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkIdentity_ClientAuthorityCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkIdentity_ClientAuthorityCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkIdentity_ClientAuthorityCallback(NetworkIdentity_ClientAuthorityCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkIdentity_ClientAuthorityCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkIdentity_ClientAuthorityCallback(NetworkIdentity_ClientAuthorityCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18317};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkIdentity_ClientAuthorityCallback) == 0x80, "Size mismatch!");

} // namespace end def Mirror
// Dependencies Mirror.NetworkBehaviour, Mirror.NetworkIdentitySerialization, Mirror.Visibility, UnityEngine.MonoBehaviour
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkIdentity
class CORDL_TYPE NetworkIdentity : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ClientAuthorityCallback = ::Mirror::NetworkIdentity_ClientAuthorityCallback;

 __declspec(property(get=get_NetworkBehaviours, put=set_NetworkBehaviours)) ::ArrayW<::UnityW<::Mirror::NetworkBehaviour>>  NetworkBehaviours;

 __declspec(property(get=get_SpawnedFromInstantiate, put=set_SpawnedFromInstantiate)) bool  SpawnedFromInstantiate;

/// @brief Field <NetworkBehaviours>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__NetworkBehaviours_k__BackingField, put=__cordl_internal_set__NetworkBehaviours_k__BackingField)) ::ArrayW<::UnityW<::Mirror::NetworkBehaviour>>  _NetworkBehaviours_k__BackingField;

/// @brief Field <SpawnedFromInstantiate>k__BackingField, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__SpawnedFromInstantiate_k__BackingField, put=__cordl_internal_set__SpawnedFromInstantiate_k__BackingField)) bool  _SpawnedFromInstantiate_k__BackingField;

/// @brief Field _assetId, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__assetId, put=__cordl_internal_set__assetId)) uint32_t  _assetId;

/// @brief Field _connectionToClient, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectionToClient, put=__cordl_internal_set__connectionToClient)) ::Mirror::NetworkConnectionToClient*  _connectionToClient;

/// @brief Field <connectionToServer>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectionToServer_k__BackingField, put=__cordl_internal_set__connectionToServer_k__BackingField)) ::Mirror::NetworkConnection*  _connectionToServer_k__BackingField;

/// @brief Field <isClient>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isClient_k__BackingField, put=__cordl_internal_set__isClient_k__BackingField)) bool  _isClient_k__BackingField;

/// @brief Field <isLocalPlayer>k__BackingField, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get__isLocalPlayer_k__BackingField, put=__cordl_internal_set__isLocalPlayer_k__BackingField)) bool  _isLocalPlayer_k__BackingField;

/// @brief Field <isOwned>k__BackingField, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOwned_k__BackingField, put=__cordl_internal_set__isOwned_k__BackingField)) bool  _isOwned_k__BackingField;

/// @brief Field <isServer>k__BackingField, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__isServer_k__BackingField, put=__cordl_internal_set__isServer_k__BackingField)) bool  _isServer_k__BackingField;

/// @brief Field <netId>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__netId_k__BackingField, put=__cordl_internal_set__netId_k__BackingField)) uint32_t  _netId_k__BackingField;

 __declspec(property(get=get_assetId, put=set_assetId)) uint32_t  assetId;

/// @brief Field clientAuthorityCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_clientAuthorityCallback, put=setStaticF_clientAuthorityCallback)) ::Mirror::NetworkIdentity_ClientAuthorityCallback*  clientAuthorityCallback;

/// @brief Field clientStarted, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get_clientStarted, put=__cordl_internal_set_clientStarted)) bool  clientStarted;

 __declspec(property(get=get_connectionToClient, put=set_connectionToClient)) ::Mirror::NetworkConnectionToClient*  connectionToClient;

 __declspec(property(get=get_connectionToServer, put=set_connectionToServer)) ::Mirror::NetworkConnection*  connectionToServer;

/// @brief Field destroyCalled, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_destroyCalled, put=__cordl_internal_set_destroyCalled)) bool  destroyCalled;

/// @brief Field hadAuthority, offset 0x83, size 0x1 
 __declspec(property(get=__cordl_internal_get_hadAuthority, put=__cordl_internal_set_hadAuthority)) bool  hadAuthority;

 __declspec(property(get=get_hasAuthority)) bool  hasAuthority;

/// @brief Field hasSpawned, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasSpawned, put=__cordl_internal_set_hasSpawned)) bool  hasSpawned;

 __declspec(property(get=get_isClient, put=set_isClient)) bool  isClient;

 __declspec(property(get=get_isClientOnly)) bool  isClientOnly;

 __declspec(property(get=get_isLocalPlayer, put=set_isLocalPlayer)) bool  isLocalPlayer;

 __declspec(property(get=get_isOwned, put=set_isOwned)) bool  isOwned;

 __declspec(property(get=get_isServer, put=set_isServer)) bool  isServer;

 __declspec(property(get=get_isServerOnly)) bool  isServerOnly;

/// @brief Field lastSerialization, offset 0x68, size 0x18 
 __declspec(property(get=__cordl_internal_get_lastSerialization, put=__cordl_internal_set_lastSerialization)) ::Mirror::NetworkIdentitySerialization  lastSerialization;

 __declspec(property(get=get_netId, put=set_netId)) uint32_t  netId;

/// @brief Field nextNetworkId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_nextNetworkId, put=setStaticF_nextNetworkId)) uint32_t  nextNetworkId;

/// @brief Field observers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_observers, put=__cordl_internal_set_observers)) ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>*  observers;

/// @brief Field previousLocalPlayer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_previousLocalPlayer, put=setStaticF_previousLocalPlayer)) ::UnityW<::Mirror::NetworkIdentity>  previousLocalPlayer;

/// @brief Field sceneId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneId, put=__cordl_internal_set_sceneId)) uint64_t  sceneId;

/// @brief Field sceneIds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sceneIds, put=setStaticF_sceneIds)) ::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>*  sceneIds;

/// @brief Field serverOnly, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_serverOnly, put=__cordl_internal_set_serverOnly)) bool  serverOnly;

/// @brief Field visible, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_visible, put=__cordl_internal_set_visible)) ::Mirror::Visibility  visible;

/// @brief Method AddObserver, addr 0x181542f40, size 0x170, virtual false, abstract: false, final false
inline void AddObserver(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method AssignClientAuthority, addr 0x1815430b0, size 0x1b0, virtual false, abstract: false, final false
inline bool AssignClientAuthority(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method Awake, addr 0x181543260, size 0x100, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearAllComponentsDirtyBits, addr 0x181543360, size 0xd0, virtual false, abstract: false, final false
inline void ClearAllComponentsDirtyBits() ;

/// @brief Method ClearDirtyComponentsDirtyBits, addr 0x181543430, size 0x90, virtual false, abstract: false, final false
inline void ClearDirtyComponentsDirtyBits() ;

/// @brief Method ClearObservers, addr 0x1815434c0, size 0xc0, virtual false, abstract: false, final false
inline void ClearObservers() ;

/// @brief Method ClientDirtyMask, addr 0x181543580, size 0x90, virtual false, abstract: false, final false
inline uint64_t ClientDirtyMask() ;

/// @brief Method DeserializeClient, addr 0x181543610, size 0xa0, virtual false, abstract: false, final false
inline void DeserializeClient(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method DeserializeServer, addr 0x1815436b0, size 0xc0, virtual false, abstract: false, final false
inline bool DeserializeServer(::Mirror::NetworkReader*  reader) ;

/// @brief Method GetNextNetworkId, addr 0x181543770, size 0x40, virtual false, abstract: false, final false
static inline uint32_t GetNextNetworkId() ;

/// @brief Method GetSceneIdentity, addr 0x1815437b0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::NetworkIdentity> GetSceneIdentity(uint64_t  id) ;

/// @brief Method GetServerSerializationAtTick, addr 0x181543810, size 0x90, virtual false, abstract: false, final false
inline ::Mirror::NetworkIdentitySerialization GetServerSerializationAtTick(int32_t  tick) ;

/// @brief Method HandleRemoteCall, addr 0x1815438a0, size 0x230, virtual false, abstract: false, final false
inline void HandleRemoteCall(uint8_t  componentIndex, uint16_t  functionHash, ::Mirror::RemoteCalls::RemoteCallType  remoteCallType, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InitializeNetworkBehaviours, addr 0x181543ad0, size 0xa0, virtual false, abstract: false, final false
inline void InitializeNetworkBehaviours() ;

/// @brief Method IsDirty, addr 0x181543b70, size 0x20, virtual false, abstract: false, final false
static inline bool IsDirty(uint64_t  mask, int32_t  index) ;

static inline ::Mirror::NetworkIdentity* New_ctor() ;

/// @brief Method NotifyAuthority, addr 0x181543b90, size 0x50, virtual false, abstract: false, final false
inline void NotifyAuthority() ;

/// @brief Method OnDestroy, addr 0x181543be0, size 0x150, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnStartAuthority, addr 0x181543d30, size 0xb0, virtual false, abstract: false, final false
inline void OnStartAuthority() ;

/// @brief Method OnStartClient, addr 0x181543de0, size 0xc0, virtual false, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartLocalPlayer, addr 0x181543ea0, size 0x130, virtual false, abstract: false, final false
inline void OnStartLocalPlayer() ;

/// @brief Method OnStartServer, addr 0x181543fd0, size 0xb0, virtual false, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopAuthority, addr 0x181544080, size 0xb0, virtual false, abstract: false, final false
inline void OnStopAuthority() ;

/// @brief Method OnStopClient, addr 0x181544130, size 0xb0, virtual false, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopLocalPlayer, addr 0x1815441e0, size 0xb0, virtual false, abstract: false, final false
inline void OnStopLocalPlayer() ;

/// @brief Method OnStopServer, addr 0x181544290, size 0xb0, virtual false, abstract: false, final false
inline void OnStopServer() ;

/// @brief Method OnValidate, addr 0x1805d4a20, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RemoveClientAuthority, addr 0x181544340, size 0x160, virtual false, abstract: false, final false
inline void RemoveClientAuthority() ;

/// @brief Method RemoveObserver, addr 0x1815444a0, size 0x30, virtual false, abstract: false, final false
inline void RemoveObserver(::Mirror::NetworkConnection*  conn) ;

/// @brief Method Reset, addr 0x1815445d0, size 0x190, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetClientStatics, addr 0x1815444d0, size 0x80, virtual false, abstract: false, final false
static inline void ResetClientStatics() ;

/// @brief Method ResetNextNetworkId, addr 0x181544550, size 0x40, virtual false, abstract: false, final false
static inline void ResetNextNetworkId() ;

/// @brief Method ResetServerStatics, addr 0x181544550, size 0x40, virtual false, abstract: false, final false
static inline void ResetServerStatics() ;

/// @brief Method ResetStatics, addr 0x181544590, size 0x40, virtual false, abstract: false, final false
static inline void ResetStatics() ;

/// @brief Method SerializeClient, addr 0x181544760, size 0x100, virtual false, abstract: false, final false
inline void SerializeClient(::Mirror::NetworkWriter*  writer) ;

/// @brief Method SerializeServer, addr 0x181544860, size 0x310, virtual false, abstract: false, final false
inline void SerializeServer(bool  initialState, ::Mirror::NetworkWriter*  ownerWriter, ::Mirror::NetworkWriter*  observersWriter) ;

/// @brief Method ServerDirtyMasks, addr 0x181544b70, size 0x100, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<uint64_t,uint64_t> ServerDirtyMasks(bool  initialState) ;

/// @brief Method SetClientOwner, addr 0x181544c70, size 0x70, virtual false, abstract: false, final false
inline void SetClientOwner(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method ValidateComponents, addr 0x181544ce0, size 0xd0, virtual false, abstract: false, final false
inline void ValidateComponents() ;

constexpr ::ArrayW<::UnityW<::Mirror::NetworkBehaviour>> const& __cordl_internal_get__NetworkBehaviours_k__BackingField() const;

constexpr ::ArrayW<::UnityW<::Mirror::NetworkBehaviour>>& __cordl_internal_get__NetworkBehaviours_k__BackingField() ;

constexpr bool const& __cordl_internal_get__SpawnedFromInstantiate_k__BackingField() const;

constexpr bool& __cordl_internal_get__SpawnedFromInstantiate_k__BackingField() ;

constexpr uint32_t const& __cordl_internal_get__assetId() const;

constexpr uint32_t& __cordl_internal_get__assetId() ;

constexpr ::Mirror::NetworkConnectionToClient* const& __cordl_internal_get__connectionToClient() const;

constexpr ::Mirror::NetworkConnectionToClient*& __cordl_internal_get__connectionToClient() ;

constexpr ::Mirror::NetworkConnection* const& __cordl_internal_get__connectionToServer_k__BackingField() const;

constexpr ::Mirror::NetworkConnection*& __cordl_internal_get__connectionToServer_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isClient_k__BackingField() const;

constexpr bool& __cordl_internal_get__isClient_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isLocalPlayer_k__BackingField() const;

constexpr bool& __cordl_internal_get__isLocalPlayer_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isOwned_k__BackingField() const;

constexpr bool& __cordl_internal_get__isOwned_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isServer_k__BackingField() const;

constexpr bool& __cordl_internal_get__isServer_k__BackingField() ;

constexpr uint32_t const& __cordl_internal_get__netId_k__BackingField() const;

constexpr uint32_t& __cordl_internal_get__netId_k__BackingField() ;

constexpr bool const& __cordl_internal_get_clientStarted() const;

constexpr bool& __cordl_internal_get_clientStarted() ;

constexpr bool const& __cordl_internal_get_destroyCalled() const;

constexpr bool& __cordl_internal_get_destroyCalled() ;

constexpr bool const& __cordl_internal_get_hadAuthority() const;

constexpr bool& __cordl_internal_get_hadAuthority() ;

constexpr bool const& __cordl_internal_get_hasSpawned() const;

constexpr bool& __cordl_internal_get_hasSpawned() ;

constexpr ::Mirror::NetworkIdentitySerialization const& __cordl_internal_get_lastSerialization() const;

constexpr ::Mirror::NetworkIdentitySerialization& __cordl_internal_get_lastSerialization() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>* const& __cordl_internal_get_observers() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>*& __cordl_internal_get_observers() ;

constexpr uint64_t const& __cordl_internal_get_sceneId() const;

constexpr uint64_t& __cordl_internal_get_sceneId() ;

constexpr bool const& __cordl_internal_get_serverOnly() const;

constexpr bool& __cordl_internal_get_serverOnly() ;

constexpr ::Mirror::Visibility const& __cordl_internal_get_visible() const;

constexpr ::Mirror::Visibility& __cordl_internal_get_visible() ;

constexpr void __cordl_internal_set__NetworkBehaviours_k__BackingField(::ArrayW<::UnityW<::Mirror::NetworkBehaviour>>  value) ;

constexpr void __cordl_internal_set__SpawnedFromInstantiate_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__assetId(uint32_t  value) ;

constexpr void __cordl_internal_set__connectionToClient(::Mirror::NetworkConnectionToClient*  value) ;

constexpr void __cordl_internal_set__connectionToServer_k__BackingField(::Mirror::NetworkConnection*  value) ;

constexpr void __cordl_internal_set__isClient_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isLocalPlayer_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isOwned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isServer_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__netId_k__BackingField(uint32_t  value) ;

constexpr void __cordl_internal_set_clientStarted(bool  value) ;

constexpr void __cordl_internal_set_destroyCalled(bool  value) ;

constexpr void __cordl_internal_set_hadAuthority(bool  value) ;

constexpr void __cordl_internal_set_hasSpawned(bool  value) ;

constexpr void __cordl_internal_set_lastSerialization(::Mirror::NetworkIdentitySerialization  value) ;

constexpr void __cordl_internal_set_observers(::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>*  value) ;

constexpr void __cordl_internal_set_sceneId(uint64_t  value) ;

constexpr void __cordl_internal_set_serverOnly(bool  value) ;

constexpr void __cordl_internal_set_visible(::Mirror::Visibility  value) ;

/// @brief Method .ctor, addr 0x181544e50, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_clientAuthorityCallback, addr 0x181544f40, size 0xb0, virtual false, abstract: false, final false
static inline void add_clientAuthorityCallback(::Mirror::NetworkIdentity_ClientAuthorityCallback*  value) ;

static inline ::Mirror::NetworkIdentity_ClientAuthorityCallback* getStaticF_clientAuthorityCallback() ;

static inline uint32_t getStaticF_nextNetworkId() ;

static inline ::UnityW<::Mirror::NetworkIdentity> getStaticF_previousLocalPlayer() ;

static inline ::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>* getStaticF_sceneIds() ;

/// @brief Method get_NetworkBehaviours, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::Mirror::NetworkBehaviour>> get_NetworkBehaviours() ;

/// @brief Method get_SpawnedFromInstantiate, addr 0x1802e56b0, size 0x10, virtual false, abstract: false, final false
inline bool get_SpawnedFromInstantiate() ;

/// @brief Method get_assetId, addr 0x1803eb0e0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_assetId() ;

/// @brief Method get_connectionToClient, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::Mirror::NetworkConnectionToClient* get_connectionToClient() ;

/// @brief Method get_connectionToServer, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Mirror::NetworkConnection* get_connectionToServer() ;

/// @brief Method get_hasAuthority, addr 0x1803a7460, size 0x10, virtual false, abstract: false, final false
inline bool get_hasAuthority() ;

/// @brief Method get_isClient, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_isClient() ;

/// @brief Method get_isClientOnly, addr 0x181544ff0, size 0x20, virtual false, abstract: false, final false
inline bool get_isClientOnly() ;

/// @brief Method get_isLocalPlayer, addr 0x1803a7450, size 0x10, virtual false, abstract: false, final false
inline bool get_isLocalPlayer() ;

/// @brief Method get_isOwned, addr 0x1803a7460, size 0x10, virtual false, abstract: false, final false
inline bool get_isOwned() ;

/// @brief Method get_isServer, addr 0x1803a7440, size 0x10, virtual false, abstract: false, final false
inline bool get_isServer() ;

/// @brief Method get_isServerOnly, addr 0x181545010, size 0x20, virtual false, abstract: false, final false
inline bool get_isServerOnly() ;

/// @brief Method get_netId, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_netId() ;

/// @brief Method remove_clientAuthorityCallback, addr 0x181545030, size 0xb0, virtual false, abstract: false, final false
static inline void remove_clientAuthorityCallback(::Mirror::NetworkIdentity_ClientAuthorityCallback*  value) ;

static inline void setStaticF_clientAuthorityCallback(::Mirror::NetworkIdentity_ClientAuthorityCallback*  value) ;

static inline void setStaticF_nextNetworkId(uint32_t  value) ;

static inline void setStaticF_previousLocalPlayer(::UnityW<::Mirror::NetworkIdentity>  value) ;

static inline void setStaticF_sceneIds(::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>*  value) ;

/// @brief Method set_NetworkBehaviours, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_NetworkBehaviours(::ArrayW<::Mirror::NetworkBehaviour*>  value) ;

/// @brief Method set_SpawnedFromInstantiate, addr 0x1805d4c80, size 0x10, virtual false, abstract: false, final false
inline void set_SpawnedFromInstantiate(bool  value) ;

/// @brief Method set_assetId, addr 0x1815450e0, size 0x70, virtual false, abstract: false, final false
inline void set_assetId(uint32_t  value) ;

/// @brief Method set_connectionToClient, addr 0x181545150, size 0x80, virtual false, abstract: false, final false
inline void set_connectionToClient(::Mirror::NetworkConnectionToClient*  value) ;

/// @brief Method set_connectionToServer, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_connectionToServer(::Mirror::NetworkConnection*  value) ;

/// @brief Method set_isClient, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void set_isClient(bool  value) ;

/// @brief Method set_isLocalPlayer, addr 0x1803a74a0, size 0x10, virtual false, abstract: false, final false
inline void set_isLocalPlayer(bool  value) ;

/// @brief Method set_isOwned, addr 0x1803a74b0, size 0x10, virtual false, abstract: false, final false
inline void set_isOwned(bool  value) ;

/// @brief Method set_isServer, addr 0x1803a7490, size 0x10, virtual false, abstract: false, final false
inline void set_isServer(bool  value) ;

/// @brief Method set_netId, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void set_netId(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkIdentity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkIdentity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkIdentity(NetworkIdentity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkIdentity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkIdentity(NetworkIdentity const& ) = delete;

/// @brief Field MaxNetworkBehaviours offset 0xffffffff size 0x4
static constexpr int32_t  MaxNetworkBehaviours{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18318};

/// @brief Field <isClient>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____isClient_k__BackingField;

/// @brief Field <isServer>k__BackingField, offset: 0x21, size: 0x1, def value: None
 bool  ____isServer_k__BackingField;

/// @brief Field <isLocalPlayer>k__BackingField, offset: 0x22, size: 0x1, def value: None
 bool  ____isLocalPlayer_k__BackingField;

/// @brief Field <isOwned>k__BackingField, offset: 0x23, size: 0x1, def value: None
 bool  ____isOwned_k__BackingField;

/// @brief Field observers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>*  ___observers;

/// @brief Field <netId>k__BackingField, offset: 0x30, size: 0x4, def value: None
 uint32_t  ____netId_k__BackingField;

/// @brief Field sceneId, offset: 0x38, size: 0x8, def value: None
 uint64_t  ___sceneId;

/// @brief Field _assetId, offset: 0x40, size: 0x4, def value: None
 uint32_t  ____assetId;

/// @brief Field serverOnly, offset: 0x44, size: 0x1, def value: None
 bool  ___serverOnly;

/// @brief Field destroyCalled, offset: 0x45, size: 0x1, def value: None
 bool  ___destroyCalled;

/// @brief Field <connectionToServer>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Mirror::NetworkConnection*  ____connectionToServer_k__BackingField;

/// @brief Field _connectionToClient, offset: 0x50, size: 0x8, def value: None
 ::Mirror::NetworkConnectionToClient*  ____connectionToClient;

/// @brief Field <NetworkBehaviours>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Mirror::NetworkBehaviour>>  ____NetworkBehaviours_k__BackingField;

/// @brief Field visible, offset: 0x60, size: 0x4, def value: None
 ::Mirror::Visibility  ___visible;

/// @brief Field lastSerialization, offset: 0x68, size: 0x18, def value: None
 ::Mirror::NetworkIdentitySerialization  ___lastSerialization;

/// @brief Field hasSpawned, offset: 0x80, size: 0x1, def value: None
 bool  ___hasSpawned;

/// @brief Field <SpawnedFromInstantiate>k__BackingField, offset: 0x81, size: 0x1, def value: None
 bool  ____SpawnedFromInstantiate_k__BackingField;

/// @brief Field clientStarted, offset: 0x82, size: 0x1, def value: None
 bool  ___clientStarted;

/// @brief Field hadAuthority, offset: 0x83, size: 0x1, def value: None
 bool  ___hadAuthority;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkIdentity, ____isClient_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ____isServer_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ____isLocalPlayer_k__BackingField) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ____isOwned_k__BackingField) == 0x23, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ___observers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ____netId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ___sceneId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ____assetId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ___serverOnly) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ___destroyCalled) == 0x45, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ____connectionToServer_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ____connectionToClient) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ____NetworkBehaviours_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ___visible) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ___lastSerialization) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ___hasSpawned) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ____SpawnedFromInstantiate_k__BackingField) == 0x81, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ___clientStarted) == 0x82, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkIdentity, ___hadAuthority) == 0x83, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkIdentity) == 0x88, "Size mismatch!");

} // namespace end def Mirror
