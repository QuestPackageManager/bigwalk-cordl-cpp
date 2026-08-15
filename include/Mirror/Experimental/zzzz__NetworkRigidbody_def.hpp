#pragma once
// IWYU pragma private; include "Mirror/Experimental/NetworkRigidbody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NetworkRigidbody)
namespace Mirror::Experimental {
class NetworkRigidbody_ClientSyncState;
}
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Mirror::Experimental {
class NetworkRigidbody;
}
namespace Mirror::Experimental {
class NetworkRigidbody_ClientSyncState;
}
// Write type traits
MARK_REF_T(::Mirror::Experimental::NetworkRigidbody*);
MARK_REF_T(::Mirror::Experimental::NetworkRigidbody_ClientSyncState*);
DEFINE_IL2CPP_CLASS(::Mirror::Experimental::NetworkRigidbody*, "Mirror.Experimental", "NetworkRigidbody");
DEFINE_IL2CPP_CLASS(::Mirror::Experimental::NetworkRigidbody_ClientSyncState*, "Mirror.Experimental", "NetworkRigidbody/ClientSyncState");
// Dependencies System.Object, UnityEngine.Vector3
namespace Mirror::Experimental {
// Is value type: false
// CS Name: Mirror.Experimental.NetworkRigidbody/ClientSyncState
class CORDL_TYPE NetworkRigidbody_ClientSyncState : public ::System::Object {
public:
// Declarations
/// @brief Field angularDrag, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_angularDrag, put=__cordl_internal_set_angularDrag)) float_t  angularDrag;

/// @brief Field angularVelocity, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_angularVelocity, put=__cordl_internal_set_angularVelocity)) ::UnityEngine::Vector3  angularVelocity;

/// @brief Field drag, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_drag, put=__cordl_internal_set_drag)) float_t  drag;

/// @brief Field isKinematic, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isKinematic, put=__cordl_internal_set_isKinematic)) bool  isKinematic;

/// @brief Field nextSyncTime, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextSyncTime, put=__cordl_internal_set_nextSyncTime)) double_t  nextSyncTime;

/// @brief Field useGravity, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_useGravity, put=__cordl_internal_set_useGravity)) bool  useGravity;

/// @brief Field velocity, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

static inline ::Mirror::Experimental::NetworkRigidbody_ClientSyncState* New_ctor() ;

constexpr float_t const& __cordl_internal_get_angularDrag() const;

constexpr float_t& __cordl_internal_get_angularDrag() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_angularVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_angularVelocity() ;

constexpr float_t const& __cordl_internal_get_drag() const;

constexpr float_t& __cordl_internal_get_drag() ;

constexpr bool const& __cordl_internal_get_isKinematic() const;

constexpr bool& __cordl_internal_get_isKinematic() ;

constexpr double_t const& __cordl_internal_get_nextSyncTime() const;

constexpr double_t& __cordl_internal_get_nextSyncTime() ;

constexpr bool const& __cordl_internal_get_useGravity() const;

constexpr bool& __cordl_internal_get_useGravity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_angularDrag(float_t  value) ;

constexpr void __cordl_internal_set_angularVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_drag(float_t  value) ;

constexpr void __cordl_internal_set_isKinematic(bool  value) ;

constexpr void __cordl_internal_set_nextSyncTime(double_t  value) ;

constexpr void __cordl_internal_set_useGravity(bool  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRigidbody_ClientSyncState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRigidbody_ClientSyncState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRigidbody_ClientSyncState(NetworkRigidbody_ClientSyncState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRigidbody_ClientSyncState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRigidbody_ClientSyncState(NetworkRigidbody_ClientSyncState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19252};

/// @brief Field nextSyncTime, offset: 0x10, size: 0x8, def value: None
 double_t  ___nextSyncTime;

/// @brief Field velocity, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

/// @brief Field angularVelocity, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___angularVelocity;

/// @brief Field isKinematic, offset: 0x30, size: 0x1, def value: None
 bool  ___isKinematic;

/// @brief Field useGravity, offset: 0x31, size: 0x1, def value: None
 bool  ___useGravity;

/// @brief Field drag, offset: 0x34, size: 0x4, def value: None
 float_t  ___drag;

/// @brief Field angularDrag, offset: 0x38, size: 0x4, def value: None
 float_t  ___angularDrag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody_ClientSyncState, ___nextSyncTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody_ClientSyncState, ___velocity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody_ClientSyncState, ___angularVelocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody_ClientSyncState, ___isKinematic) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody_ClientSyncState, ___useGravity) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody_ClientSyncState, ___drag) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody_ClientSyncState, ___angularDrag) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Mirror::Experimental::NetworkRigidbody_ClientSyncState) == 0x40, "Size mismatch!");

} // namespace end def Mirror::Experimental
// Dependencies Mirror.NetworkBehaviour, UnityEngine.Vector3
namespace Mirror::Experimental {
// Is value type: false
// CS Name: Mirror.Experimental.NetworkRigidbody
class CORDL_TYPE NetworkRigidbody : public ::Mirror::NetworkBehaviour {
public:
// Declarations
using ClientSyncState = ::Mirror::Experimental::NetworkRigidbody_ClientSyncState;

 __declspec(property(get=get_ClientWithAuthority)) bool  ClientWithAuthority;

 __declspec(property(get=get_IgnoreSync)) bool  IgnoreSync;

 __declspec(property(get=get_NetworkangularDrag, put=set_NetworkangularDrag)) float_t  NetworkangularDrag;

 __declspec(property(get=get_NetworkangularVelocity, put=set_NetworkangularVelocity)) ::UnityEngine::Vector3  NetworkangularVelocity;

 __declspec(property(get=get_Networkdrag, put=set_Networkdrag)) float_t  Networkdrag;

 __declspec(property(get=get_NetworkisKinematic, put=set_NetworkisKinematic)) bool  NetworkisKinematic;

 __declspec(property(get=get_NetworkuseGravity, put=set_NetworkuseGravity)) bool  NetworkuseGravity;

 __declspec(property(get=get_Networkvelocity, put=set_Networkvelocity)) ::UnityEngine::Vector3  Networkvelocity;

/// @brief Field angularDrag, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_angularDrag, put=__cordl_internal_set_angularDrag)) float_t  angularDrag;

/// @brief Field angularVelocity, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get_angularVelocity, put=__cordl_internal_set_angularVelocity)) ::UnityEngine::Vector3  angularVelocity;

/// @brief Field angularVelocitySensitivity, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_angularVelocitySensitivity, put=__cordl_internal_set_angularVelocitySensitivity)) float_t  angularVelocitySensitivity;

/// @brief Field clearAngularVelocity, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_clearAngularVelocity, put=__cordl_internal_set_clearAngularVelocity)) bool  clearAngularVelocity;

/// @brief Field clearVelocity, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_clearVelocity, put=__cordl_internal_set_clearVelocity)) bool  clearVelocity;

/// @brief Field clientAuthority, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_clientAuthority, put=__cordl_internal_set_clientAuthority)) bool  clientAuthority;

/// @brief Field drag, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_drag, put=__cordl_internal_set_drag)) float_t  drag;

/// @brief Field isKinematic, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isKinematic, put=__cordl_internal_set_isKinematic)) bool  isKinematic;

/// @brief Field previousValue, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_previousValue, put=__cordl_internal_set_previousValue)) ::Mirror::Experimental::NetworkRigidbody_ClientSyncState*  previousValue;

/// @brief Field syncAngularVelocity, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncAngularVelocity, put=__cordl_internal_set_syncAngularVelocity)) bool  syncAngularVelocity;

/// @brief Field syncVelocity, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncVelocity, put=__cordl_internal_set_syncVelocity)) bool  syncVelocity;

/// @brief Field target, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody>  target;

/// @brief Field useGravity, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get_useGravity, put=__cordl_internal_set_useGravity)) bool  useGravity;

/// @brief Field velocity, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Field velocitySensitivity, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocitySensitivity, put=__cordl_internal_set_velocitySensitivity)) float_t  velocitySensitivity;

/// @brief Method CmdSendAngularDrag, addr 0x181520a20, size 0xc0, virtual false, abstract: false, final false
inline void CmdSendAngularDrag(float_t  angularDrag) ;

/// @brief Method CmdSendDrag, addr 0x181520ae0, size 0xc0, virtual false, abstract: false, final false
inline void CmdSendDrag(float_t  drag) ;

/// @brief Method CmdSendIsKinematic, addr 0x181520ba0, size 0xc0, virtual false, abstract: false, final false
inline void CmdSendIsKinematic(bool  isKinematic) ;

/// @brief Method CmdSendUseGravity, addr 0x181520c60, size 0xc0, virtual false, abstract: false, final false
inline void CmdSendUseGravity(bool  useGravity) ;

/// @brief Method CmdSendVelocity, addr 0x181520e20, size 0xe0, virtual false, abstract: false, final false
inline void CmdSendVelocity(::UnityEngine::Vector3  velocity) ;

/// @brief Method CmdSendVelocityAndAngular, addr 0x181520d20, size 0x100, virtual false, abstract: false, final false
inline void CmdSendVelocityAndAngular(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity) ;

/// @brief Method DeserializeSyncVars, addr 0x181520f00, size 0x770, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method FixedUpdate, addr 0x181521670, size 0x90, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method InvokeUserCode_CmdSendAngularDrag__Single, addr 0x181521700, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSendAngularDrag__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSendDrag__Single, addr 0x1815217e0, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSendDrag__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSendIsKinematic__Boolean, addr 0x1815218c0, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSendIsKinematic__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSendUseGravity__Boolean, addr 0x1815219a0, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSendUseGravity__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSendVelocityAndAngular__Vector3__Vector3, addr 0x181521a80, size 0x230, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSendVelocityAndAngular__Vector3__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSendVelocity__Vector3, addr 0x181521cb0, size 0x170, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSendVelocity__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Experimental::NetworkRigidbody* New_ctor() ;

/// @brief Method OnAngularDragChanged, addr 0x181521e20, size 0x60, virtual false, abstract: false, final false
inline void OnAngularDragChanged(float_t  _, float_t  newValue) ;

/// @brief Method OnAngularVelocityChanged, addr 0x181521e80, size 0x70, virtual false, abstract: false, final false
inline void OnAngularVelocityChanged(::UnityEngine::Vector3  _, ::UnityEngine::Vector3  newValue) ;

/// @brief Method OnIsKinematicChanged, addr 0x181521ef0, size 0x60, virtual false, abstract: false, final false
inline void OnIsKinematicChanged(bool  _, bool  newValue) ;

/// @brief Method OnUseGravityChanged, addr 0x181521f50, size 0x60, virtual false, abstract: false, final false
inline void OnUseGravityChanged(bool  _, bool  newValue) ;

/// @brief Method OnValidate, addr 0x18151d300, size 0x50, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method OnVelocityChanged, addr 0x181521fb0, size 0x70, virtual false, abstract: false, final false
inline void OnVelocityChanged(::UnityEngine::Vector3  _, ::UnityEngine::Vector3  newValue) ;

/// @brief Method OnuDragChanged, addr 0x181522020, size 0x60, virtual false, abstract: false, final false
inline void OnuDragChanged(float_t  _, float_t  newValue) ;

/// @brief Method SendRigidBodySettings, addr 0x181522080, size 0x480, virtual false, abstract: false, final false
inline void SendRigidBodySettings() ;

/// @brief Method SendToServer, addr 0x181522500, size 0x60, virtual false, abstract: false, final false
inline void SendToServer() ;

/// @brief Method SendVelocity, addr 0x181522560, size 0x420, virtual false, abstract: false, final false
inline void SendVelocity() ;

/// @brief Method SerializeSyncVars, addr 0x181522980, size 0x190, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method SyncToClients, addr 0x181522b10, size 0x360, virtual false, abstract: false, final false
inline void SyncToClients() ;

/// @brief Method Update, addr 0x181522e70, size 0x90, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UserCode_CmdSendAngularDrag__Single, addr 0x181522f00, size 0x50, virtual false, abstract: false, final false
inline void UserCode_CmdSendAngularDrag__Single(float_t  angularDrag) ;

/// @brief Method UserCode_CmdSendDrag__Single, addr 0x181522f50, size 0x50, virtual false, abstract: false, final false
inline void UserCode_CmdSendDrag__Single(float_t  drag) ;

/// @brief Method UserCode_CmdSendIsKinematic__Boolean, addr 0x181522fa0, size 0x50, virtual false, abstract: false, final false
inline void UserCode_CmdSendIsKinematic__Boolean(bool  isKinematic) ;

/// @brief Method UserCode_CmdSendUseGravity__Boolean, addr 0x181522ff0, size 0x50, virtual false, abstract: false, final false
inline void UserCode_CmdSendUseGravity__Boolean(bool  useGravity) ;

/// @brief Method UserCode_CmdSendVelocityAndAngular__Vector3__Vector3, addr 0x181523040, size 0x160, virtual false, abstract: false, final false
inline void UserCode_CmdSendVelocityAndAngular__Vector3__Vector3(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity) ;

/// @brief Method UserCode_CmdSendVelocity__Vector3, addr 0x1815231a0, size 0xc0, virtual false, abstract: false, final false
inline void UserCode_CmdSendVelocity__Vector3(::UnityEngine::Vector3  velocity) ;

constexpr float_t const& __cordl_internal_get_angularDrag() const;

constexpr float_t& __cordl_internal_get_angularDrag() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_angularVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_angularVelocity() ;

constexpr float_t const& __cordl_internal_get_angularVelocitySensitivity() const;

constexpr float_t& __cordl_internal_get_angularVelocitySensitivity() ;

constexpr bool const& __cordl_internal_get_clearAngularVelocity() const;

constexpr bool& __cordl_internal_get_clearAngularVelocity() ;

constexpr bool const& __cordl_internal_get_clearVelocity() const;

constexpr bool& __cordl_internal_get_clearVelocity() ;

constexpr bool const& __cordl_internal_get_clientAuthority() const;

constexpr bool& __cordl_internal_get_clientAuthority() ;

constexpr float_t const& __cordl_internal_get_drag() const;

constexpr float_t& __cordl_internal_get_drag() ;

constexpr bool const& __cordl_internal_get_isKinematic() const;

constexpr bool& __cordl_internal_get_isKinematic() ;

constexpr ::Mirror::Experimental::NetworkRigidbody_ClientSyncState* const& __cordl_internal_get_previousValue() const;

constexpr ::Mirror::Experimental::NetworkRigidbody_ClientSyncState*& __cordl_internal_get_previousValue() ;

constexpr bool const& __cordl_internal_get_syncAngularVelocity() const;

constexpr bool& __cordl_internal_get_syncAngularVelocity() ;

constexpr bool const& __cordl_internal_get_syncVelocity() const;

constexpr bool& __cordl_internal_get_syncVelocity() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_target() ;

constexpr bool const& __cordl_internal_get_useGravity() const;

constexpr bool& __cordl_internal_get_useGravity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr float_t const& __cordl_internal_get_velocitySensitivity() const;

constexpr float_t& __cordl_internal_get_velocitySensitivity() ;

constexpr void __cordl_internal_set_angularDrag(float_t  value) ;

constexpr void __cordl_internal_set_angularVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_angularVelocitySensitivity(float_t  value) ;

constexpr void __cordl_internal_set_clearAngularVelocity(bool  value) ;

constexpr void __cordl_internal_set_clearVelocity(bool  value) ;

constexpr void __cordl_internal_set_clientAuthority(bool  value) ;

constexpr void __cordl_internal_set_drag(float_t  value) ;

constexpr void __cordl_internal_set_isKinematic(bool  value) ;

constexpr void __cordl_internal_set_previousValue(::Mirror::Experimental::NetworkRigidbody_ClientSyncState*  value) ;

constexpr void __cordl_internal_set_syncAngularVelocity(bool  value) ;

constexpr void __cordl_internal_set_syncVelocity(bool  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_useGravity(bool  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_velocitySensitivity(float_t  value) ;

/// @brief Method .ctor, addr 0x181523460, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ClientWithAuthority, addr 0x1815205f0, size 0x10, virtual false, abstract: false, final false
inline bool get_ClientWithAuthority() ;

/// @brief Method get_IgnoreSync, addr 0x181520600, size 0x40, virtual false, abstract: false, final false
inline bool get_IgnoreSync() ;

/// @brief Method get_NetworkangularDrag, addr 0x1803054e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_NetworkangularDrag() ;

/// @brief Method get_NetworkangularVelocity, addr 0x18151dc40, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_NetworkangularVelocity() ;

/// @brief Method get_Networkdrag, addr 0x1815234b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Networkdrag() ;

/// @brief Method get_NetworkisKinematic, addr 0x1805fa960, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkisKinematic() ;

/// @brief Method get_NetworkuseGravity, addr 0x1815234c0, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkuseGravity() ;

/// @brief Method get_Networkvelocity, addr 0x1803e0b30, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Networkvelocity() ;

/// @brief Method set_NetworkangularDrag, addr 0x1815234d0, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkangularDrag(::ByRefConst<float_t>  value) ;

/// @brief Method set_NetworkangularVelocity, addr 0x181523550, size 0x90, virtual false, abstract: false, final false
inline void set_NetworkangularVelocity(::ByRefConst<::UnityEngine::Vector3>  value) ;

/// @brief Method set_Networkdrag, addr 0x1815235e0, size 0x80, virtual false, abstract: false, final false
inline void set_Networkdrag(::ByRefConst<float_t>  value) ;

/// @brief Method set_NetworkisKinematic, addr 0x181523660, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkisKinematic(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworkuseGravity, addr 0x1815236e0, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkuseGravity(::ByRefConst<bool>  value) ;

/// @brief Method set_Networkvelocity, addr 0x181523760, size 0x90, virtual false, abstract: false, final false
inline void set_Networkvelocity(::ByRefConst<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRigidbody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRigidbody", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRigidbody(NetworkRigidbody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRigidbody", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRigidbody(NetworkRigidbody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19253};

/// @brief Field target, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___target;

/// @brief Field clientAuthority, offset: 0x70, size: 0x1, def value: None
 bool  ___clientAuthority;

/// @brief Field syncVelocity, offset: 0x71, size: 0x1, def value: None
 bool  ___syncVelocity;

/// @brief Field clearVelocity, offset: 0x72, size: 0x1, def value: None
 bool  ___clearVelocity;

/// @brief Field velocitySensitivity, offset: 0x74, size: 0x4, def value: None
 float_t  ___velocitySensitivity;

/// @brief Field syncAngularVelocity, offset: 0x78, size: 0x1, def value: None
 bool  ___syncAngularVelocity;

/// @brief Field clearAngularVelocity, offset: 0x79, size: 0x1, def value: None
 bool  ___clearAngularVelocity;

/// @brief Field angularVelocitySensitivity, offset: 0x7c, size: 0x4, def value: None
 float_t  ___angularVelocitySensitivity;

/// @brief Field previousValue, offset: 0x80, size: 0x8, def value: None
 ::Mirror::Experimental::NetworkRigidbody_ClientSyncState*  ___previousValue;

/// @brief Field velocity, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

/// @brief Field angularVelocity, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___angularVelocity;

/// @brief Field isKinematic, offset: 0xa0, size: 0x1, def value: None
 bool  ___isKinematic;

/// @brief Field useGravity, offset: 0xa1, size: 0x1, def value: None
 bool  ___useGravity;

/// @brief Field drag, offset: 0xa4, size: 0x4, def value: None
 float_t  ___drag;

/// @brief Field angularDrag, offset: 0xa8, size: 0x4, def value: None
 float_t  ___angularDrag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody, ___target) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody, ___clientAuthority) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody, ___syncVelocity) == 0x71, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody, ___clearVelocity) == 0x72, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody, ___velocitySensitivity) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody, ___syncAngularVelocity) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody, ___clearAngularVelocity) == 0x79, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody, ___angularVelocitySensitivity) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody, ___previousValue) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody, ___velocity) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody, ___angularVelocity) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody, ___isKinematic) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody, ___useGravity) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody, ___drag) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody, ___angularDrag) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Mirror::Experimental::NetworkRigidbody) == 0xb0, "Size mismatch!");

} // namespace end def Mirror::Experimental
