#pragma once
// IWYU pragma private; include "Mirror/Experimental/NetworkLerpRigidbody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NetworkLerpRigidbody)
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
class NetworkLerpRigidbody;
}
// Write type traits
MARK_REF_T(::Mirror::Experimental::NetworkLerpRigidbody*);
DEFINE_IL2CPP_CLASS(::Mirror::Experimental::NetworkLerpRigidbody*, "Mirror.Experimental", "NetworkLerpRigidbody");
// Dependencies Mirror.NetworkBehaviour, UnityEngine.Vector3
namespace Mirror::Experimental {
// Is value type: false
// CS Name: Mirror.Experimental.NetworkLerpRigidbody
class CORDL_TYPE NetworkLerpRigidbody : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_ClientWithAuthority)) bool  ClientWithAuthority;

 __declspec(property(get=get_IgnoreSync)) bool  IgnoreSync;

 __declspec(property(get=get_NetworktargetPosition, put=set_NetworktargetPosition)) ::UnityEngine::Vector3  NetworktargetPosition;

 __declspec(property(get=get_NetworktargetVelocity, put=set_NetworktargetVelocity)) ::UnityEngine::Vector3  NetworktargetVelocity;

/// @brief Field clientAuthority, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_clientAuthority, put=__cordl_internal_set_clientAuthority)) bool  clientAuthority;

/// @brief Field lerpPositionAmount, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpPositionAmount, put=__cordl_internal_set_lerpPositionAmount)) float_t  lerpPositionAmount;

/// @brief Field lerpVelocityAmount, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpVelocityAmount, put=__cordl_internal_set_lerpVelocityAmount)) float_t  lerpVelocityAmount;

/// @brief Field nextSyncTime, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextSyncTime, put=__cordl_internal_set_nextSyncTime)) double_t  nextSyncTime;

/// @brief Field target, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody>  target;

/// @brief Field targetPosition, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetPosition, put=__cordl_internal_set_targetPosition)) ::UnityEngine::Vector3  targetPosition;

/// @brief Field targetVelocity, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetVelocity, put=__cordl_internal_set_targetVelocity)) ::UnityEngine::Vector3  targetVelocity;

/// @brief Method CmdSendState, addr 0x18151cc10, size 0x100, virtual false, abstract: false, final false
inline void CmdSendState(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  position) ;

/// @brief Method DeserializeSyncVars, addr 0x18151cd10, size 0x120, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method FixedUpdate, addr 0x18151ce30, size 0x270, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method InvokeUserCode_CmdSendState__Vector3__Vector3, addr 0x18151d0a0, size 0x260, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSendState__Vector3__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Experimental::NetworkLerpRigidbody* New_ctor() ;

/// @brief Method OnValidate, addr 0x18151d300, size 0x50, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SendToServer, addr 0x18151d350, size 0x180, virtual false, abstract: false, final false
inline void SendToServer() ;

/// @brief Method SerializeSyncVars, addr 0x18151d4d0, size 0xc0, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method SyncToClients, addr 0x18151d590, size 0x170, virtual false, abstract: false, final false
inline void SyncToClients() ;

/// @brief Method Update, addr 0x18151d700, size 0x2d0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UserCode_CmdSendState__Vector3__Vector3, addr 0x18151d9d0, size 0x190, virtual false, abstract: false, final false
inline void UserCode_CmdSendState__Vector3__Vector3(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  position) ;

constexpr bool const& __cordl_internal_get_clientAuthority() const;

constexpr bool& __cordl_internal_get_clientAuthority() ;

constexpr float_t const& __cordl_internal_get_lerpPositionAmount() const;

constexpr float_t& __cordl_internal_get_lerpPositionAmount() ;

constexpr float_t const& __cordl_internal_get_lerpVelocityAmount() const;

constexpr float_t& __cordl_internal_get_lerpVelocityAmount() ;

constexpr double_t const& __cordl_internal_get_nextSyncTime() const;

constexpr double_t& __cordl_internal_get_nextSyncTime() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_target() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetVelocity() ;

constexpr void __cordl_internal_set_clientAuthority(bool  value) ;

constexpr void __cordl_internal_set_lerpPositionAmount(float_t  value) ;

constexpr void __cordl_internal_set_lerpVelocityAmount(float_t  value) ;

constexpr void __cordl_internal_set_nextSyncTime(double_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_targetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_targetVelocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x18151dbd0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ClientWithAuthority, addr 0x18151dbf0, size 0x10, virtual false, abstract: false, final false
inline bool get_ClientWithAuthority() ;

/// @brief Method get_IgnoreSync, addr 0x18151dc00, size 0x40, virtual false, abstract: false, final false
inline bool get_IgnoreSync() ;

/// @brief Method get_NetworktargetPosition, addr 0x18151dc40, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_NetworktargetPosition() ;

/// @brief Method get_NetworktargetVelocity, addr 0x1803e0b30, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_NetworktargetVelocity() ;

/// @brief Method set_NetworktargetPosition, addr 0x18151dc60, size 0xb0, virtual false, abstract: false, final false
inline void set_NetworktargetPosition(::ByRefConst<::UnityEngine::Vector3>  value) ;

/// @brief Method set_NetworktargetVelocity, addr 0x18151dd10, size 0xb0, virtual false, abstract: false, final false
inline void set_NetworktargetVelocity(::ByRefConst<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkLerpRigidbody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkLerpRigidbody", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkLerpRigidbody(NetworkLerpRigidbody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkLerpRigidbody", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkLerpRigidbody(NetworkLerpRigidbody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19251};

/// @brief Field target, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___target;

/// @brief Field lerpVelocityAmount, offset: 0x70, size: 0x4, def value: None
 float_t  ___lerpVelocityAmount;

/// @brief Field lerpPositionAmount, offset: 0x74, size: 0x4, def value: None
 float_t  ___lerpPositionAmount;

/// @brief Field clientAuthority, offset: 0x78, size: 0x1, def value: None
 bool  ___clientAuthority;

/// @brief Field nextSyncTime, offset: 0x80, size: 0x8, def value: None
 double_t  ___nextSyncTime;

/// @brief Field targetVelocity, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetVelocity;

/// @brief Field targetPosition, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Experimental::NetworkLerpRigidbody, ___target) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkLerpRigidbody, ___lerpVelocityAmount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkLerpRigidbody, ___lerpPositionAmount) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkLerpRigidbody, ___clientAuthority) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkLerpRigidbody, ___nextSyncTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkLerpRigidbody, ___targetVelocity) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Experimental::NetworkLerpRigidbody, ___targetPosition) == 0x94, "Offset mismatch!");

static_assert(sizeof(::Mirror::Experimental::NetworkLerpRigidbody) == 0xa0, "Size mismatch!");

} // namespace end def Mirror::Experimental
