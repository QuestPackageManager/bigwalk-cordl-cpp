#pragma once
// IWYU pragma private; include "Mirror/Experimental/NetworkRigidbody2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NetworkRigidbody2D)
namespace Mirror::Experimental {
class NetworkRigidbody2D_ClientSyncState;
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
class Rigidbody2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Mirror::Experimental {
class NetworkRigidbody2D;
}
namespace Mirror::Experimental {
class NetworkRigidbody2D_ClientSyncState;
}
// Write type traits
MARK_REF_T(::Mirror::Experimental::NetworkRigidbody2D*);
MARK_REF_T(::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState*);
DEFINE_IL2CPP_CLASS(::Mirror::Experimental::NetworkRigidbody2D*, "Mirror.Experimental", "NetworkRigidbody2D");
DEFINE_IL2CPP_CLASS(::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState*, "Mirror.Experimental", "NetworkRigidbody2D/ClientSyncState");
// Dependencies System.Object, UnityEngine.Vector2
namespace Mirror::Experimental {
// Is value type: false
// CS Name: Mirror.Experimental.NetworkRigidbody2D/ClientSyncState
class CORDL_TYPE NetworkRigidbody2D_ClientSyncState : public ::System::Object {
public:
// Declarations
/// @brief Field angularDrag, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_angularDrag, put=__cordl_internal_set_angularDrag)) float_t  angularDrag;

/// @brief Field angularVelocity, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_angularVelocity, put=__cordl_internal_set_angularVelocity)) float_t  angularVelocity;

/// @brief Field drag, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_drag, put=__cordl_internal_set_drag)) float_t  drag;

/// @brief Field gravityScale, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityScale, put=__cordl_internal_set_gravityScale)) float_t  gravityScale;

/// @brief Field isKinematic, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isKinematic, put=__cordl_internal_set_isKinematic)) bool  isKinematic;

/// @brief Field nextSyncTime, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextSyncTime, put=__cordl_internal_set_nextSyncTime)) float_t  nextSyncTime;

/// @brief Field velocity, offset 0x14, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector2  velocity;

static inline ::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState* New_ctor() ;

constexpr float_t const& __cordl_internal_get_angularDrag() const;

constexpr float_t& __cordl_internal_get_angularDrag() ;

constexpr float_t const& __cordl_internal_get_angularVelocity() const;

constexpr float_t& __cordl_internal_get_angularVelocity() ;

constexpr float_t const& __cordl_internal_get_drag() const;

constexpr float_t& __cordl_internal_get_drag() ;

constexpr float_t const& __cordl_internal_get_gravityScale() const;

constexpr float_t& __cordl_internal_get_gravityScale() ;

constexpr bool const& __cordl_internal_get_isKinematic() const;

constexpr bool& __cordl_internal_get_isKinematic() ;

constexpr float_t const& __cordl_internal_get_nextSyncTime() const;

constexpr float_t& __cordl_internal_get_nextSyncTime() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_angularDrag(float_t  value) ;

constexpr void __cordl_internal_set_angularVelocity(float_t  value) ;

constexpr void __cordl_internal_set_drag(float_t  value) ;

constexpr void __cordl_internal_set_gravityScale(float_t  value) ;

constexpr void __cordl_internal_set_isKinematic(bool  value) ;

constexpr void __cordl_internal_set_nextSyncTime(float_t  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRigidbody2D_ClientSyncState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRigidbody2D_ClientSyncState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRigidbody2D_ClientSyncState(NetworkRigidbody2D_ClientSyncState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRigidbody2D_ClientSyncState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRigidbody2D_ClientSyncState(NetworkRigidbody2D_ClientSyncState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19254};

/// @brief Field nextSyncTime, offset: 0x10, size: 0x4, def value: None
 float_t  ___nextSyncTime;

/// @brief Field velocity, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___velocity;

/// @brief Field angularVelocity, offset: 0x1c, size: 0x4, def value: None
 float_t  ___angularVelocity;

/// @brief Field isKinematic, offset: 0x20, size: 0x1, def value: None
 bool  ___isKinematic;

/// @brief Field gravityScale, offset: 0x24, size: 0x4, def value: None
 float_t  ___gravityScale;

/// @brief Field drag, offset: 0x28, size: 0x4, def value: None
 float_t  ___drag;

/// @brief Field angularDrag, offset: 0x2c, size: 0x4, def value: None
 float_t  ___angularDrag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState, ___nextSyncTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState, ___velocity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState, ___angularVelocity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState, ___isKinematic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState, ___gravityScale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState, ___drag) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState, ___angularDrag) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState) == 0x30, "Size mismatch!");

} // namespace end def Mirror::Experimental
// Dependencies Mirror.NetworkBehaviour, UnityEngine.Vector2
namespace Mirror::Experimental {
// Is value type: false
// CS Name: Mirror.Experimental.NetworkRigidbody2D
class CORDL_TYPE NetworkRigidbody2D : public ::Mirror::NetworkBehaviour {
public:
// Declarations
using ClientSyncState = ::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState;

 __declspec(property(get=get_ClientWithAuthority)) bool  ClientWithAuthority;

 __declspec(property(get=get_IgnoreSync)) bool  IgnoreSync;

 __declspec(property(get=get_NetworkangularDrag, put=set_NetworkangularDrag)) float_t  NetworkangularDrag;

 __declspec(property(get=get_NetworkangularVelocity, put=set_NetworkangularVelocity)) float_t  NetworkangularVelocity;

 __declspec(property(get=get_Networkdrag, put=set_Networkdrag)) float_t  Networkdrag;

 __declspec(property(get=get_NetworkgravityScale, put=set_NetworkgravityScale)) float_t  NetworkgravityScale;

 __declspec(property(get=get_NetworkisKinematic, put=set_NetworkisKinematic)) bool  NetworkisKinematic;

 __declspec(property(get=get_Networkvelocity, put=set_Networkvelocity)) ::UnityEngine::Vector2  Networkvelocity;

/// @brief Field angularDrag, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_angularDrag, put=__cordl_internal_set_angularDrag)) float_t  angularDrag;

/// @brief Field angularVelocity, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_angularVelocity, put=__cordl_internal_set_angularVelocity)) float_t  angularVelocity;

/// @brief Field angularVelocitySensitivity, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_angularVelocitySensitivity, put=__cordl_internal_set_angularVelocitySensitivity)) float_t  angularVelocitySensitivity;

/// @brief Field clearAngularVelocity, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_clearAngularVelocity, put=__cordl_internal_set_clearAngularVelocity)) bool  clearAngularVelocity;

/// @brief Field clearVelocity, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_clearVelocity, put=__cordl_internal_set_clearVelocity)) bool  clearVelocity;

/// @brief Field clientAuthority, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_clientAuthority, put=__cordl_internal_set_clientAuthority)) bool  clientAuthority;

/// @brief Field drag, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_drag, put=__cordl_internal_set_drag)) float_t  drag;

/// @brief Field gravityScale, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityScale, put=__cordl_internal_set_gravityScale)) float_t  gravityScale;

/// @brief Field isKinematic, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_isKinematic, put=__cordl_internal_set_isKinematic)) bool  isKinematic;

/// @brief Field previousValue, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_previousValue, put=__cordl_internal_set_previousValue)) ::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState*  previousValue;

/// @brief Field syncAngularVelocity, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncAngularVelocity, put=__cordl_internal_set_syncAngularVelocity)) bool  syncAngularVelocity;

/// @brief Field syncVelocity, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncVelocity, put=__cordl_internal_set_syncVelocity)) bool  syncVelocity;

/// @brief Field target, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody2D>  target;

/// @brief Field velocity, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector2  velocity;

/// @brief Field velocitySensitivity, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocitySensitivity, put=__cordl_internal_set_velocitySensitivity)) float_t  velocitySensitivity;

/// @brief Method CmdChangeGravityScale, addr 0x18151e090, size 0xc0, virtual false, abstract: false, final false
inline void CmdChangeGravityScale(float_t  gravityScale) ;

/// @brief Method CmdSendAngularDrag, addr 0x18151e150, size 0xc0, virtual false, abstract: false, final false
inline void CmdSendAngularDrag(float_t  angularDrag) ;

/// @brief Method CmdSendDrag, addr 0x18151e210, size 0xc0, virtual false, abstract: false, final false
inline void CmdSendDrag(float_t  drag) ;

/// @brief Method CmdSendIsKinematic, addr 0x18151e2d0, size 0xc0, virtual false, abstract: false, final false
inline void CmdSendIsKinematic(bool  isKinematic) ;

/// @brief Method CmdSendVelocity, addr 0x18151e470, size 0xd0, virtual false, abstract: false, final false
inline void CmdSendVelocity(::UnityEngine::Vector2  velocity) ;

/// @brief Method CmdSendVelocityAndAngular, addr 0x18151e390, size 0xe0, virtual false, abstract: false, final false
inline void CmdSendVelocityAndAngular(::UnityEngine::Vector2  velocity, float_t  angularVelocity) ;

/// @brief Method DeserializeSyncVars, addr 0x18151e540, size 0x6f0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method FixedUpdate, addr 0x18151ec30, size 0x70, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method InvokeUserCode_CmdChangeGravityScale__Single, addr 0x18151eca0, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdChangeGravityScale__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSendAngularDrag__Single, addr 0x18151ed80, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSendAngularDrag__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSendDrag__Single, addr 0x18151ee60, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSendDrag__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSendIsKinematic__Boolean, addr 0x18151ef40, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSendIsKinematic__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSendVelocityAndAngular__Vector2__Single, addr 0x18151f020, size 0x130, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSendVelocityAndAngular__Vector2__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSendVelocity__Vector2, addr 0x18151f150, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSendVelocity__Vector2(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Experimental::NetworkRigidbody2D* New_ctor() ;

/// @brief Method OnAngularDragChanged, addr 0x18151f230, size 0x60, virtual false, abstract: false, final false
inline void OnAngularDragChanged(float_t  _, float_t  newValue) ;

/// @brief Method OnAngularVelocityChanged, addr 0x18151f290, size 0x60, virtual false, abstract: false, final false
inline void OnAngularVelocityChanged(float_t  _, float_t  newValue) ;

/// @brief Method OnGravityScaleChanged, addr 0x18151f2f0, size 0x60, virtual false, abstract: false, final false
inline void OnGravityScaleChanged(float_t  _, float_t  newValue) ;

/// @brief Method OnIsKinematicChanged, addr 0x18151f350, size 0x60, virtual false, abstract: false, final false
inline void OnIsKinematicChanged(bool  _, bool  newValue) ;

/// @brief Method OnValidate, addr 0x18151f3b0, size 0x50, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method OnVelocityChanged, addr 0x18151f400, size 0x60, virtual false, abstract: false, final false
inline void OnVelocityChanged(::UnityEngine::Vector2  _, ::UnityEngine::Vector2  newValue) ;

/// @brief Method OnuDragChanged, addr 0x18151f460, size 0x60, virtual false, abstract: false, final false
inline void OnuDragChanged(float_t  _, float_t  newValue) ;

/// @brief Method SendRigidBodySettings, addr 0x18151f4c0, size 0x490, virtual false, abstract: false, final false
inline void SendRigidBodySettings() ;

/// @brief Method SendToServer, addr 0x18151f950, size 0x60, virtual false, abstract: false, final false
inline void SendToServer() ;

/// @brief Method SendVelocity, addr 0x18151f9b0, size 0x3a0, virtual false, abstract: false, final false
inline void SendVelocity() ;

/// @brief Method SerializeSyncVars, addr 0x18151fd50, size 0x150, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method SyncToClients, addr 0x18151fea0, size 0x250, virtual false, abstract: false, final false
inline void SyncToClients() ;

/// @brief Method Update, addr 0x1815200f0, size 0x90, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UserCode_CmdChangeGravityScale__Single, addr 0x181520180, size 0x50, virtual false, abstract: false, final false
inline void UserCode_CmdChangeGravityScale__Single(float_t  gravityScale) ;

/// @brief Method UserCode_CmdSendAngularDrag__Single, addr 0x1815201d0, size 0x50, virtual false, abstract: false, final false
inline void UserCode_CmdSendAngularDrag__Single(float_t  angularDrag) ;

/// @brief Method UserCode_CmdSendDrag__Single, addr 0x181520220, size 0x50, virtual false, abstract: false, final false
inline void UserCode_CmdSendDrag__Single(float_t  drag) ;

/// @brief Method UserCode_CmdSendIsKinematic__Boolean, addr 0x181520270, size 0x50, virtual false, abstract: false, final false
inline void UserCode_CmdSendIsKinematic__Boolean(bool  isKinematic) ;

/// @brief Method UserCode_CmdSendVelocityAndAngular__Vector2__Single, addr 0x1815202c0, size 0x90, virtual false, abstract: false, final false
inline void UserCode_CmdSendVelocityAndAngular__Vector2__Single(::UnityEngine::Vector2  velocity, float_t  angularVelocity) ;

/// @brief Method UserCode_CmdSendVelocity__Vector2, addr 0x181520350, size 0x50, virtual false, abstract: false, final false
inline void UserCode_CmdSendVelocity__Vector2(::UnityEngine::Vector2  velocity) ;

constexpr float_t const& __cordl_internal_get_angularDrag() const;

constexpr float_t& __cordl_internal_get_angularDrag() ;

constexpr float_t const& __cordl_internal_get_angularVelocity() const;

constexpr float_t& __cordl_internal_get_angularVelocity() ;

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

constexpr float_t const& __cordl_internal_get_gravityScale() const;

constexpr float_t& __cordl_internal_get_gravityScale() ;

constexpr bool const& __cordl_internal_get_isKinematic() const;

constexpr bool& __cordl_internal_get_isKinematic() ;

constexpr ::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState* const& __cordl_internal_get_previousValue() const;

constexpr ::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState*& __cordl_internal_get_previousValue() ;

constexpr bool const& __cordl_internal_get_syncAngularVelocity() const;

constexpr bool& __cordl_internal_get_syncAngularVelocity() ;

constexpr bool const& __cordl_internal_get_syncVelocity() const;

constexpr bool& __cordl_internal_get_syncVelocity() ;

constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody2D>& __cordl_internal_get_target() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_velocity() ;

constexpr float_t const& __cordl_internal_get_velocitySensitivity() const;

constexpr float_t& __cordl_internal_get_velocitySensitivity() ;

constexpr void __cordl_internal_set_angularDrag(float_t  value) ;

constexpr void __cordl_internal_set_angularVelocity(float_t  value) ;

constexpr void __cordl_internal_set_angularVelocitySensitivity(float_t  value) ;

constexpr void __cordl_internal_set_clearAngularVelocity(bool  value) ;

constexpr void __cordl_internal_set_clearVelocity(bool  value) ;

constexpr void __cordl_internal_set_clientAuthority(bool  value) ;

constexpr void __cordl_internal_set_drag(float_t  value) ;

constexpr void __cordl_internal_set_gravityScale(float_t  value) ;

constexpr void __cordl_internal_set_isKinematic(bool  value) ;

constexpr void __cordl_internal_set_previousValue(::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState*  value) ;

constexpr void __cordl_internal_set_syncAngularVelocity(bool  value) ;

constexpr void __cordl_internal_set_syncVelocity(bool  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody2D>  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_velocitySensitivity(float_t  value) ;

/// @brief Method .ctor, addr 0x1815205a0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ClientWithAuthority, addr 0x1815205f0, size 0x10, virtual false, abstract: false, final false
inline bool get_ClientWithAuthority() ;

/// @brief Method get_IgnoreSync, addr 0x181520600, size 0x40, virtual false, abstract: false, final false
inline bool get_IgnoreSync() ;

/// @brief Method get_NetworkangularDrag, addr 0x1804a5780, size 0x10, virtual false, abstract: false, final false
inline float_t get_NetworkangularDrag() ;

/// @brief Method get_NetworkangularVelocity, addr 0x1813ec940, size 0x10, virtual false, abstract: false, final false
inline float_t get_NetworkangularVelocity() ;

/// @brief Method get_Networkdrag, addr 0x181520640, size 0x10, virtual false, abstract: false, final false
inline float_t get_Networkdrag() ;

/// @brief Method get_NetworkgravityScale, addr 0x180487750, size 0x10, virtual false, abstract: false, final false
inline float_t get_NetworkgravityScale() ;

/// @brief Method get_NetworkisKinematic, addr 0x180430b00, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkisKinematic() ;

/// @brief Method get_Networkvelocity, addr 0x1802e5800, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Networkvelocity() ;

/// @brief Method set_NetworkangularDrag, addr 0x181520650, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkangularDrag(::ByRefConst<float_t>  value) ;

/// @brief Method set_NetworkangularVelocity, addr 0x1815206d0, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkangularVelocity(::ByRefConst<float_t>  value) ;

/// @brief Method set_Networkdrag, addr 0x181520750, size 0x80, virtual false, abstract: false, final false
inline void set_Networkdrag(::ByRefConst<float_t>  value) ;

/// @brief Method set_NetworkgravityScale, addr 0x1815207d0, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkgravityScale(::ByRefConst<float_t>  value) ;

/// @brief Method set_NetworkisKinematic, addr 0x181520850, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkisKinematic(::ByRefConst<bool>  value) ;

/// @brief Method set_Networkvelocity, addr 0x1815208d0, size 0x150, virtual false, abstract: false, final false
inline void set_Networkvelocity(::ByRefConst<::UnityEngine::Vector2>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRigidbody2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRigidbody2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRigidbody2D(NetworkRigidbody2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRigidbody2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRigidbody2D(NetworkRigidbody2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19255};

/// @brief Field target, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody2D>  ___target;

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
 ::Mirror::Experimental::NetworkRigidbody2D_ClientSyncState*  ___previousValue;

/// @brief Field velocity, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___velocity;

/// @brief Field angularVelocity, offset: 0x90, size: 0x4, def value: None
 float_t  ___angularVelocity;

/// @brief Field isKinematic, offset: 0x94, size: 0x1, def value: None
 bool  ___isKinematic;

/// @brief Field gravityScale, offset: 0x98, size: 0x4, def value: None
 float_t  ___gravityScale;

/// @brief Field drag, offset: 0x9c, size: 0x4, def value: None
 float_t  ___drag;

/// @brief Field angularDrag, offset: 0xa0, size: 0x4, def value: None
 float_t  ___angularDrag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D, ___target) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D, ___clientAuthority) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D, ___syncVelocity) == 0x71, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D, ___clearVelocity) == 0x72, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D, ___velocitySensitivity) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D, ___syncAngularVelocity) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D, ___clearAngularVelocity) == 0x79, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D, ___angularVelocitySensitivity) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D, ___previousValue) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D, ___velocity) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D, ___angularVelocity) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D, ___isKinematic) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D, ___gravityScale) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D, ___drag) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkRigidbody2D, ___angularDrag) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Mirror::Experimental::NetworkRigidbody2D) == 0xa8, "Size mismatch!");

} // namespace end def Mirror::Experimental
