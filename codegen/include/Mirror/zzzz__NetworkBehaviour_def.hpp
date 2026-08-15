#pragma once
// IWYU pragma private; include "Mirror/NetworkBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__SyncDirection_def.hpp"
#include "Mirror/zzzz__SyncMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkBehaviour)
namespace Mirror {
struct NetworkBehaviourSyncVar;
}
namespace Mirror {
class NetworkBehaviour___c__DisplayClass49_0;
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
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace Mirror {
class SyncObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkBehaviour___c__DisplayClass49_0;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkBehaviour*);
MARK_REF_T(::Mirror::NetworkBehaviour___c__DisplayClass49_0*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkBehaviour*, "Mirror", "NetworkBehaviour");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkBehaviour___c__DisplayClass49_0*, "Mirror", "NetworkBehaviour/<>c__DisplayClass49_0");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkBehaviour/<>c__DisplayClass49_0
class CORDL_TYPE NetworkBehaviour___c__DisplayClass49_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::NetworkBehaviour>  __4__this;

/// @brief Field nthBit, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_nthBit, put=__cordl_internal_set_nthBit)) uint64_t  nthBit;

static inline ::Mirror::NetworkBehaviour___c__DisplayClass49_0* New_ctor() ;

/// @brief Method <InitSyncObject>b__0, addr 0x181552600, size 0x20, virtual false, abstract: false, final false
inline void _InitSyncObject_b__0() ;

/// @brief Method <InitSyncObject>b__1, addr 0x181552620, size 0x160, virtual false, abstract: false, final false
inline bool _InitSyncObject_b__1() ;

/// @brief Method <InitSyncObject>b__2, addr 0x181552780, size 0x90, virtual false, abstract: false, final false
inline bool _InitSyncObject_b__2() ;

constexpr ::UnityW<::Mirror::NetworkBehaviour> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::NetworkBehaviour>& __cordl_internal_get___4__this() ;

constexpr uint64_t const& __cordl_internal_get_nthBit() const;

constexpr uint64_t& __cordl_internal_get_nthBit() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::NetworkBehaviour>  value) ;

constexpr void __cordl_internal_set_nthBit(uint64_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviour___c__DisplayClass49_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviour___c__DisplayClass49_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkBehaviour___c__DisplayClass49_0(NetworkBehaviour___c__DisplayClass49_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviour___c__DisplayClass49_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkBehaviour___c__DisplayClass49_0(NetworkBehaviour___c__DisplayClass49_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18299};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkBehaviour>  _____4__this;

/// @brief Field nthBit, offset: 0x18, size: 0x8, def value: None
 uint64_t  ___nthBit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkBehaviour___c__DisplayClass49_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkBehaviour___c__DisplayClass49_0, ___nthBit) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkBehaviour___c__DisplayClass49_0) == 0x20, "Size mismatch!");

} // namespace end def Mirror
// Dependencies Mirror.SyncDirection, Mirror.SyncMode, UnityEngine.MonoBehaviour
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkBehaviour
class CORDL_TYPE NetworkBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass49_0 = ::Mirror::NetworkBehaviour___c__DisplayClass49_0;

 __declspec(property(get=get_ComponentIndex, put=set_ComponentIndex)) uint8_t  ComponentIndex;

/// @brief Field <ComponentIndex>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__ComponentIndex_k__BackingField, put=__cordl_internal_set__ComponentIndex_k__BackingField)) uint8_t  _ComponentIndex_k__BackingField;

/// @brief Field <netIdentity>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__netIdentity_k__BackingField, put=__cordl_internal_set__netIdentity_k__BackingField)) ::UnityW<::Mirror::NetworkIdentity>  _netIdentity_k__BackingField;

/// @brief Field <syncVarDirtyBits>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__syncVarDirtyBits_k__BackingField, put=__cordl_internal_set__syncVarDirtyBits_k__BackingField)) uint64_t  _syncVarDirtyBits_k__BackingField;

 __declspec(property(get=get_authority)) bool  authority;

 __declspec(property(get=get_connectionToClient)) ::Mirror::NetworkConnectionToClient*  connectionToClient;

 __declspec(property(get=get_connectionToServer)) ::Mirror::NetworkConnection*  connectionToServer;

 __declspec(property(get=get_hasAuthority)) bool  hasAuthority;

 __declspec(property(get=get_isClient)) bool  isClient;

 __declspec(property(get=get_isClientOnly)) bool  isClientOnly;

 __declspec(property(get=get_isLocalPlayer)) bool  isLocalPlayer;

 __declspec(property(get=get_isOwned)) bool  isOwned;

 __declspec(property(get=get_isServer)) bool  isServer;

 __declspec(property(get=get_isServerOnly)) bool  isServerOnly;

/// @brief Field lastSyncTime, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSyncTime, put=__cordl_internal_set_lastSyncTime)) double_t  lastSyncTime;

 __declspec(property(get=get_netId)) uint32_t  netId;

 __declspec(property(get=get_netIdentity, put=set_netIdentity)) ::UnityW<::Mirror::NetworkIdentity>  netIdentity;

/// @brief Field syncDirection, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_syncDirection, put=__cordl_internal_set_syncDirection)) ::Mirror::SyncDirection  syncDirection;

/// @brief Field syncInterval, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_syncInterval, put=__cordl_internal_set_syncInterval)) float_t  syncInterval;

/// @brief Field syncMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_syncMode, put=__cordl_internal_set_syncMode)) ::Mirror::SyncMode  syncMode;

/// @brief Field syncObjectDirtyBits, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_syncObjectDirtyBits, put=__cordl_internal_set_syncObjectDirtyBits)) uint64_t  syncObjectDirtyBits;

/// @brief Field syncObjects, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_syncObjects, put=__cordl_internal_set_syncObjects)) ::System::Collections::Generic::List_1<::Mirror::SyncObject*>*  syncObjects;

 __declspec(property(get=get_syncVarDirtyBits, put=set_syncVarDirtyBits)) uint64_t  syncVarDirtyBits;

/// @brief Field syncVarHookGuard, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_syncVarHookGuard, put=__cordl_internal_set_syncVarHookGuard)) uint64_t  syncVarHookGuard;

/// @brief Method ClearAllDirtyBits, addr 0x1815378c0, size 0x90, virtual false, abstract: false, final false
inline void ClearAllDirtyBits() ;

/// @brief Method Deserialize, addr 0x181537ad0, size 0x3d0, virtual false, abstract: false, final false
inline bool Deserialize(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method DeserializeObjectsAll, addr 0x181537950, size 0x90, virtual false, abstract: false, final false
inline void DeserializeObjectsAll(::Mirror::NetworkReader*  reader) ;

/// @brief Method DeserializeObjectsDelta, addr 0x1815379e0, size 0xd0, virtual false, abstract: false, final false
inline void DeserializeObjectsDelta(::Mirror::NetworkReader*  reader) ;

/// @brief Method DeserializeSyncObjects, addr 0x181537ab0, size 0x20, virtual false, abstract: false, final false
inline void DeserializeSyncObjects(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method DeserializeSyncVars, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method ErrorCorrection, addr 0x181537ea0, size 0x10, virtual false, abstract: false, final false
static inline int32_t ErrorCorrection(int32_t  size, uint8_t  safety) ;

/// @brief Method GeneratedSyncVarDeserialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GeneratedSyncVarDeserialize(::by_ref<T>  field, ::System::Action_2<T,T>*  OnChanged, T  value) ;

/// @brief Method GeneratedSyncVarDeserialize_GameObject, addr 0x181537eb0, size 0x160, virtual false, abstract: false, final false
inline void GeneratedSyncVarDeserialize_GameObject(::by_ref<::UnityEngine::GameObject*>  field, ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::GameObject>>*  OnChanged, ::Mirror::NetworkReader*  reader, ::by_ref<uint32_t>  netIdField) ;

/// @brief Method GeneratedSyncVarDeserialize_NetworkBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GeneratedSyncVarDeserialize_NetworkBehaviour(::by_ref<T>  field, ::System::Action_2<T,T>*  OnChanged, ::Mirror::NetworkReader*  reader, ::by_ref<::Mirror::NetworkBehaviourSyncVar>  netIdField) ;

/// @brief Method GeneratedSyncVarDeserialize_NetworkIdentity, addr 0x181538010, size 0x110, virtual false, abstract: false, final false
inline void GeneratedSyncVarDeserialize_NetworkIdentity(::by_ref<::Mirror::NetworkIdentity*>  field, ::System::Action_2<::UnityW<::Mirror::NetworkIdentity>,::UnityW<::Mirror::NetworkIdentity>>*  OnChanged, ::Mirror::NetworkReader*  reader, ::by_ref<uint32_t>  netIdField) ;

/// @brief Method GeneratedSyncVarSetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GeneratedSyncVarSetter(T  value, ::by_ref<T>  field, uint64_t  dirtyBit, ::System::Action_2<T,T>*  OnChanged) ;

/// @brief Method GeneratedSyncVarSetter_GameObject, addr 0x181538120, size 0x1c0, virtual false, abstract: false, final false
inline void GeneratedSyncVarSetter_GameObject(::UnityEngine::GameObject*  value, ::by_ref<::UnityEngine::GameObject*>  field, uint64_t  dirtyBit, ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::GameObject>>*  OnChanged, ::by_ref<uint32_t>  netIdField) ;

/// @brief Method GeneratedSyncVarSetter_NetworkBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GeneratedSyncVarSetter_NetworkBehaviour(T  value, ::by_ref<T>  field, uint64_t  dirtyBit, ::System::Action_2<T,T>*  OnChanged, ::by_ref<::Mirror::NetworkBehaviourSyncVar>  netIdField) ;

/// @brief Method GeneratedSyncVarSetter_NetworkIdentity, addr 0x1815382e0, size 0x160, virtual false, abstract: false, final false
inline void GeneratedSyncVarSetter_NetworkIdentity(::Mirror::NetworkIdentity*  value, ::by_ref<::Mirror::NetworkIdentity*>  field, uint64_t  dirtyBit, ::System::Action_2<::UnityW<::Mirror::NetworkIdentity>,::UnityW<::Mirror::NetworkIdentity>>*  OnChanged, ::by_ref<uint32_t>  netIdField) ;

/// @brief Method GetSyncVarGameObject, addr 0x181538440, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetSyncVarGameObject(uint32_t  netId, ::by_ref<::UnityEngine::GameObject*>  gameObjectField) ;

/// @brief Method GetSyncVarHookGuard, addr 0x181538530, size 0x10, virtual false, abstract: false, final false
inline bool GetSyncVarHookGuard(uint64_t  dirtyBit) ;

/// @brief Method GetSyncVarNetworkBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetSyncVarNetworkBehaviour(::Mirror::NetworkBehaviourSyncVar  syncNetBehaviour, ::by_ref<T>  behaviourField) ;

/// @brief Method GetSyncVarNetworkIdentity, addr 0x181538540, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::Mirror::NetworkIdentity> GetSyncVarNetworkIdentity(uint32_t  netId, ::by_ref<::Mirror::NetworkIdentity*>  identityField) ;

/// @brief Method HasSyncObjects, addr 0x1815385d0, size 0x20, virtual false, abstract: false, final false
inline bool HasSyncObjects() ;

/// @brief Method InitSyncObject, addr 0x1815385f0, size 0x190, virtual false, abstract: false, final false
inline void InitSyncObject(::Mirror::SyncObject*  syncObject) ;

/// @brief Method IsDirty, addr 0x181534030, size 0x40, virtual false, abstract: false, final false
inline bool IsDirty() ;

static inline ::Mirror::NetworkBehaviour* New_ctor() ;

/// @brief Method OnDeserialize, addr 0x181538780, size 0x60, virtual true, abstract: false, final false
inline void OnDeserialize(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method OnSerialize, addr 0x1815387e0, size 0x60, virtual true, abstract: false, final false
inline void OnSerialize(::Mirror::NetworkWriter*  writer, bool  initialState) ;

/// @brief Method OnStartAuthority, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStartAuthority() ;

/// @brief Method OnStartClient, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartLocalPlayer, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStartLocalPlayer() ;

/// @brief Method OnStartServer, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopAuthority, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStopAuthority() ;

/// @brief Method OnStopClient, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopLocalPlayer, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStopLocalPlayer() ;

/// @brief Method OnStopServer, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStopServer() ;

/// @brief Method OnValidate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ResetSyncObjects, addr 0x181538840, size 0x90, virtual false, abstract: false, final false
inline void ResetSyncObjects() ;

/// @brief Method SendCommandInternal, addr 0x1815388d0, size 0x460, virtual false, abstract: false, final false
inline void SendCommandInternal(::StringW  functionFullName, int32_t  functionHashCode, ::Mirror::NetworkWriter*  writer, int32_t  channelId, bool  requiresAuthority) ;

/// @brief Method SendRPCInternal, addr 0x181538d30, size 0x390, virtual false, abstract: false, final false
inline void SendRPCInternal(::StringW  functionFullName, int32_t  functionHashCode, ::Mirror::NetworkWriter*  writer, int32_t  channelId, bool  includeOwner) ;

/// @brief Method SendTargetRPCInternal, addr 0x1815390c0, size 0x420, virtual false, abstract: false, final false
inline void SendTargetRPCInternal(::Mirror::NetworkConnection*  conn, ::StringW  functionFullName, int32_t  functionHashCode, ::Mirror::NetworkWriter*  writer, int32_t  channelId) ;

/// @brief Method Serialize, addr 0x181539650, size 0x190, virtual false, abstract: false, final false
inline void Serialize(::Mirror::NetworkWriter*  writer, bool  initialState) ;

/// @brief Method SerializeObjectsAll, addr 0x1815394e0, size 0x90, virtual false, abstract: false, final false
inline void SerializeObjectsAll(::Mirror::NetworkWriter*  writer) ;

/// @brief Method SerializeObjectsDelta, addr 0x181539570, size 0xc0, virtual false, abstract: false, final false
inline void SerializeObjectsDelta(::Mirror::NetworkWriter*  writer) ;

/// @brief Method SerializeSyncObjects, addr 0x181539630, size 0x20, virtual false, abstract: false, final false
inline void SerializeSyncObjects(::Mirror::NetworkWriter*  writer, bool  initialState) ;

/// @brief Method SerializeSyncVars, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  initialState) ;

/// @brief Method SetDirty, addr 0x1815397e0, size 0x10, virtual false, abstract: false, final false
inline void SetDirty() ;

/// @brief Method SetSyncObjectDirtyBit, addr 0x1815397f0, size 0x10, virtual false, abstract: false, final false
inline void SetSyncObjectDirtyBit(uint64_t  dirtyBit) ;

/// @brief Method SetSyncVar, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetSyncVar(T  value, ::by_ref<T>  fieldValue, uint64_t  dirtyBit) ;

/// @brief Method SetSyncVarDirtyBit, addr 0x181539800, size 0x10, virtual false, abstract: false, final false
inline void SetSyncVarDirtyBit(uint64_t  dirtyBit) ;

/// @brief Method SetSyncVarGameObject, addr 0x181539810, size 0xc0, virtual false, abstract: false, final false
inline void SetSyncVarGameObject(::UnityEngine::GameObject*  newGameObject, ::by_ref<::UnityEngine::GameObject*>  gameObjectField, uint64_t  dirtyBit, ::by_ref<uint32_t>  netIdField) ;

/// @brief Method SetSyncVarHookGuard, addr 0x1815398d0, size 0x20, virtual false, abstract: false, final false
inline void SetSyncVarHookGuard(uint64_t  dirtyBit, bool  value) ;

/// @brief Method SetSyncVarNetworkBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetSyncVarNetworkBehaviour(T  newBehaviour, ::by_ref<T>  behaviourField, uint64_t  dirtyBit, ::by_ref<::Mirror::NetworkBehaviourSyncVar>  syncField) ;

/// @brief Method SetSyncVarNetworkIdentity, addr 0x1815398f0, size 0xb0, virtual false, abstract: false, final false
inline void SetSyncVarNetworkIdentity(::Mirror::NetworkIdentity*  newIdentity, ::by_ref<::Mirror::NetworkIdentity*>  identityField, uint64_t  dirtyBit, ::by_ref<uint32_t>  netIdField) ;

/// @brief Method SyncVarEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool SyncVarEqual(T  value, ::by_ref<T>  fieldValue) ;

/// @brief Method SyncVarGameObjectEqual, addr 0x1815399a0, size 0x90, virtual false, abstract: false, final false
static inline bool SyncVarGameObjectEqual(::UnityEngine::GameObject*  newGameObject, uint32_t  netIdField) ;

/// @brief Method SyncVarNetworkBehaviourEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool SyncVarNetworkBehaviourEqual(T  newBehaviour, ::Mirror::NetworkBehaviourSyncVar  syncField) ;

/// @brief Method SyncVarNetworkIdentityEqual, addr 0x181539a30, size 0x70, virtual false, abstract: false, final false
static inline bool SyncVarNetworkIdentityEqual(::Mirror::NetworkIdentity*  newIdentity, uint32_t  netIdField) ;

constexpr uint8_t const& __cordl_internal_get__ComponentIndex_k__BackingField() const;

constexpr uint8_t& __cordl_internal_get__ComponentIndex_k__BackingField() ;

constexpr ::UnityW<::Mirror::NetworkIdentity> const& __cordl_internal_get__netIdentity_k__BackingField() const;

constexpr ::UnityW<::Mirror::NetworkIdentity>& __cordl_internal_get__netIdentity_k__BackingField() ;

constexpr uint64_t const& __cordl_internal_get__syncVarDirtyBits_k__BackingField() const;

constexpr uint64_t& __cordl_internal_get__syncVarDirtyBits_k__BackingField() ;

constexpr double_t const& __cordl_internal_get_lastSyncTime() const;

constexpr double_t& __cordl_internal_get_lastSyncTime() ;

constexpr ::Mirror::SyncDirection const& __cordl_internal_get_syncDirection() const;

constexpr ::Mirror::SyncDirection& __cordl_internal_get_syncDirection() ;

constexpr float_t const& __cordl_internal_get_syncInterval() const;

constexpr float_t& __cordl_internal_get_syncInterval() ;

constexpr ::Mirror::SyncMode const& __cordl_internal_get_syncMode() const;

constexpr ::Mirror::SyncMode& __cordl_internal_get_syncMode() ;

constexpr uint64_t const& __cordl_internal_get_syncObjectDirtyBits() const;

constexpr uint64_t& __cordl_internal_get_syncObjectDirtyBits() ;

constexpr ::System::Collections::Generic::List_1<::Mirror::SyncObject*>* const& __cordl_internal_get_syncObjects() const;

constexpr ::System::Collections::Generic::List_1<::Mirror::SyncObject*>*& __cordl_internal_get_syncObjects() ;

constexpr uint64_t const& __cordl_internal_get_syncVarHookGuard() const;

constexpr uint64_t& __cordl_internal_get_syncVarHookGuard() ;

constexpr void __cordl_internal_set__ComponentIndex_k__BackingField(uint8_t  value) ;

constexpr void __cordl_internal_set__netIdentity_k__BackingField(::UnityW<::Mirror::NetworkIdentity>  value) ;

constexpr void __cordl_internal_set__syncVarDirtyBits_k__BackingField(uint64_t  value) ;

constexpr void __cordl_internal_set_lastSyncTime(double_t  value) ;

constexpr void __cordl_internal_set_syncDirection(::Mirror::SyncDirection  value) ;

constexpr void __cordl_internal_set_syncInterval(float_t  value) ;

constexpr void __cordl_internal_set_syncMode(::Mirror::SyncMode  value) ;

constexpr void __cordl_internal_set_syncObjectDirtyBits(uint64_t  value) ;

constexpr void __cordl_internal_set_syncObjects(::System::Collections::Generic::List_1<::Mirror::SyncObject*>*  value) ;

constexpr void __cordl_internal_set_syncVarHookGuard(uint64_t  value) ;

/// @brief Method .ctor, addr 0x181539aa0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ComponentIndex, addr 0x1802fdd10, size 0x10, virtual false, abstract: false, final false
inline uint8_t get_ComponentIndex() ;

/// @brief Method get_authority, addr 0x181539af0, size 0x40, virtual false, abstract: false, final false
inline bool get_authority() ;

/// @brief Method get_connectionToClient, addr 0x181539b30, size 0x20, virtual false, abstract: false, final false
inline ::Mirror::NetworkConnectionToClient* get_connectionToClient() ;

/// @brief Method get_connectionToServer, addr 0x181539b50, size 0x20, virtual false, abstract: false, final false
inline ::Mirror::NetworkConnection* get_connectionToServer() ;

/// @brief Method get_hasAuthority, addr 0x181539b70, size 0x20, virtual false, abstract: false, final false
inline bool get_hasAuthority() ;

/// @brief Method get_isClient, addr 0x181539bc0, size 0x20, virtual false, abstract: false, final false
inline bool get_isClient() ;

/// @brief Method get_isClientOnly, addr 0x181539b90, size 0x30, virtual false, abstract: false, final false
inline bool get_isClientOnly() ;

/// @brief Method get_isLocalPlayer, addr 0x181539be0, size 0x20, virtual false, abstract: false, final false
inline bool get_isLocalPlayer() ;

/// @brief Method get_isOwned, addr 0x181539b70, size 0x20, virtual false, abstract: false, final false
inline bool get_isOwned() ;

/// @brief Method get_isServer, addr 0x181539c30, size 0x20, virtual false, abstract: false, final false
inline bool get_isServer() ;

/// @brief Method get_isServerOnly, addr 0x181539c00, size 0x30, virtual false, abstract: false, final false
inline bool get_isServerOnly() ;

/// @brief Method get_netId, addr 0x1802e30c0, size 0x20, virtual false, abstract: false, final false
inline uint32_t get_netId() ;

/// @brief Method get_netIdentity, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Mirror::NetworkIdentity> get_netIdentity() ;

/// @brief Method get_syncVarDirtyBits, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_syncVarDirtyBits() ;

/// @brief Method set_ComponentIndex, addr 0x180503b70, size 0x10, virtual false, abstract: false, final false
inline void set_ComponentIndex(uint8_t  value) ;

/// @brief Method set_netIdentity, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_netIdentity(::Mirror::NetworkIdentity*  value) ;

/// @brief Method set_syncVarDirtyBits, addr 0x180316040, size 0x10, virtual false, abstract: false, final false
inline void set_syncVarDirtyBits(uint64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkBehaviour(NetworkBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkBehaviour(NetworkBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18300};

/// @brief Field syncDirection, offset: 0x20, size: 0x4, def value: None
 ::Mirror::SyncDirection  ___syncDirection;

/// @brief Field syncMode, offset: 0x24, size: 0x4, def value: None
 ::Mirror::SyncMode  ___syncMode;

/// @brief Field syncInterval, offset: 0x28, size: 0x4, def value: None
 float_t  ___syncInterval;

/// @brief Field lastSyncTime, offset: 0x30, size: 0x8, def value: None
 double_t  ___lastSyncTime;

/// @brief Field syncObjects, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Mirror::SyncObject*>*  ___syncObjects;

/// @brief Field <netIdentity>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkIdentity>  ____netIdentity_k__BackingField;

/// @brief Field <ComponentIndex>k__BackingField, offset: 0x48, size: 0x1, def value: None
 uint8_t  ____ComponentIndex_k__BackingField;

/// @brief Field <syncVarDirtyBits>k__BackingField, offset: 0x50, size: 0x8, def value: None
 uint64_t  ____syncVarDirtyBits_k__BackingField;

/// @brief Field syncObjectDirtyBits, offset: 0x58, size: 0x8, def value: None
 uint64_t  ___syncObjectDirtyBits;

/// @brief Field syncVarHookGuard, offset: 0x60, size: 0x8, def value: None
 uint64_t  ___syncVarHookGuard;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkBehaviour, ___syncDirection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkBehaviour, ___syncMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkBehaviour, ___syncInterval) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkBehaviour, ___lastSyncTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkBehaviour, ___syncObjects) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkBehaviour, ____netIdentity_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkBehaviour, ____ComponentIndex_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkBehaviour, ____syncVarDirtyBits_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkBehaviour, ___syncObjectDirtyBits) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkBehaviour, ___syncVarHookGuard) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkBehaviour) == 0x68, "Size mismatch!");

} // namespace end def Mirror
