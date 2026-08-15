#pragma once
// IWYU pragma private; include "LobbyNetworking/HouseNetworkTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HouseNetworkTransform)
namespace GlobalNamespace {
class StickyPlatform;
}
namespace LobbyNetworking {
struct HouseNetworkTransformManager_TransformJobData;
}
namespace LobbyNetworking {
struct HouseNetworkTransform_Goal;
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
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace LobbyNetworking {
class HouseNetworkTransform;
}
namespace LobbyNetworking {
struct HouseNetworkTransform_Goal;
}
// Write type traits
MARK_REF_T(::LobbyNetworking::HouseNetworkTransform*);
MARK_VAL_T(::LobbyNetworking::HouseNetworkTransform_Goal);
DEFINE_IL2CPP_CLASS(::LobbyNetworking::HouseNetworkTransform*, "LobbyNetworking", "HouseNetworkTransform");
DEFINE_IL2CPP_CLASS(::LobbyNetworking::HouseNetworkTransform_Goal, "LobbyNetworking", "HouseNetworkTransform/Goal");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace LobbyNetworking {
// Is value type: true
// CS Name: LobbyNetworking.HouseNetworkTransform/Goal
struct CORDL_TYPE HouseNetworkTransform_Goal {
public:
// Declarations
/// @brief Method .ctor, addr 0x1803c6de0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(bool  isValid, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  timeStamp) ;

// Ctor Parameters []
// @brief default ctor
constexpr HouseNetworkTransform_Goal() ;

// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "timeStamp", ty: "float_t", modifiers: "", def_value: None }]
constexpr HouseNetworkTransform_Goal(bool  isValid, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  timeStamp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5755};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field isValid, offset: 0x0, size: 0x1, def value: None
 bool  isValid;

/// @brief Field position, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

/// @brief Field timeStamp, offset: 0x20, size: 0x4, def value: None
 float_t  timeStamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform_Goal, isValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform_Goal, position) == 0x4, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform_Goal, rotation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform_Goal, timeStamp) == 0x20, "Offset mismatch!");

static_assert(sizeof(::LobbyNetworking::HouseNetworkTransform_Goal) == 0x24, "Size mismatch!");

} // namespace end def LobbyNetworking
// Dependencies LobbyNetworking.HouseNetworkTransform::Goal, Mirror.NetworkBehaviour, System.Nullable`1<T>, Unity.Mathematics.float3, UnityEngine.Quaternion, UnityEngine.Vector3
namespace LobbyNetworking {
// Is value type: false
// CS Name: LobbyNetworking.HouseNetworkTransform
class CORDL_TYPE HouseNetworkTransform : public ::Mirror::NetworkBehaviour {
public:
// Declarations
using Goal = ::LobbyNetworking::HouseNetworkTransform_Goal;

 __declspec(property(get=get_IsRestingForPlayerMovement)) bool  IsRestingForPlayerMovement;

/// @brief Field _stickyPlatform, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__stickyPlatform, put=__cordl_internal_set__stickyPlatform)) ::UnityW<::GlobalNamespace::StickyPlatform>  _stickyPlatform;

/// @brief Field _syncedAngularVelocity, offset 0xf8, size 0xc 
 __declspec(property(get=__cordl_internal_get__syncedAngularVelocity, put=__cordl_internal_set__syncedAngularVelocity)) ::Unity::Mathematics::float3  _syncedAngularVelocity;

/// @brief Field _syncedPosition, offset 0xd0, size 0xc 
 __declspec(property(get=__cordl_internal_get__syncedPosition, put=__cordl_internal_set__syncedPosition)) ::Unity::Mathematics::float3  _syncedPosition;

/// @brief Field _syncedRotation, offset 0xdc, size 0x10 
 __declspec(property(get=__cordl_internal_get__syncedRotation, put=__cordl_internal_set__syncedRotation)) ::UnityEngine::Quaternion  _syncedRotation;

/// @brief Field _syncedVelocity, offset 0xec, size 0xc 
 __declspec(property(get=__cordl_internal_get__syncedVelocity, put=__cordl_internal_set__syncedVelocity)) ::Unity::Mathematics::float3  _syncedVelocity;

/// @brief Field _target, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Rigidbody>  _target;

/// @brief Field applyInterpolatedVelocity, offset 0x9d, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyInterpolatedVelocity, put=__cordl_internal_set_applyInterpolatedVelocity)) bool  applyInterpolatedVelocity;

/// @brief Field convertPositionOnPlatformChange, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get_convertPositionOnPlatformChange, put=__cordl_internal_set_convertPositionOnPlatformChange)) bool  convertPositionOnPlatformChange;

/// @brief Field goal, offset 0xac, size 0x24 
 __declspec(property(get=__cordl_internal_get_goal, put=__cordl_internal_set_goal)) ::LobbyNetworking::HouseNetworkTransform_Goal  goal;

 __declspec(property(get=get_isOwned)) bool  isOwned;

/// @brief Field isPlayer, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPlayer, put=__cordl_internal_set_isPlayer)) bool  isPlayer;

/// @brief Field logVerbose, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field positionDampSmoothTime, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionDampSmoothTime, put=__cordl_internal_set_positionDampSmoothTime)) float_t  positionDampSmoothTime;

/// @brief Field positionDampVelocity, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get_positionDampVelocity, put=__cordl_internal_set_positionDampVelocity)) ::UnityEngine::Vector3  positionDampVelocity;

/// @brief Field preventRotationTeleport, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_preventRotationTeleport, put=__cordl_internal_set_preventRotationTeleport)) bool  preventRotationTeleport;

/// @brief Field remainingCooldownDuration, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_remainingCooldownDuration, put=__cordl_internal_set_remainingCooldownDuration)) ::System::Nullable_1<float_t>  remainingCooldownDuration;

/// @brief Field rotationDampVelocity, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotationDampVelocity, put=__cordl_internal_set_rotationDampVelocity)) ::UnityEngine::Vector3  rotationDampVelocity;

 __declspec(property(get=get_stickyPlatform, put=set_stickyPlatform)) ::UnityW<::GlobalNamespace::StickyPlatform>  stickyPlatform;

/// @brief Field syncOnSpawn, offset 0x9b, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncOnSpawn, put=__cordl_internal_set_syncOnSpawn)) bool  syncOnSpawn;

/// @brief Field syncVelocity, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncVelocity, put=__cordl_internal_set_syncVelocity)) bool  syncVelocity;

 __declspec(property(get=get_targetPosition, put=set_targetPosition)) ::UnityEngine::Vector3  targetPosition;

 __declspec(property(get=get_targetRotation, put=set_targetRotation)) ::UnityEngine::Quaternion  targetRotation;

/// @brief Field waitBeforeTelepot, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitBeforeTelepot, put=__cordl_internal_set_waitBeforeTelepot)) float_t  waitBeforeTelepot;

/// @brief Method Awake, addr 0x1803c9010, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method AwakeFixedUpdate, addr 0x1803c8fc0, size 0x50, virtual false, abstract: false, final false
inline void AwakeFixedUpdate() ;

/// @brief Method CanSleep, addr 0x1803c9040, size 0x20, virtual false, abstract: false, final false
inline bool CanSleep() ;

/// @brief Method ClientUpdate, addr 0x1803c9060, size 0x530, virtual false, abstract: false, final false
inline void ClientUpdate() ;

/// @brief Method CmdMove, addr 0x1803c9590, size 0x110, virtual false, abstract: false, final false
inline void CmdMove(::UnityEngine::Vector3  position, uint32_t  packedRotation, uint16_t  platformTicket) ;

/// @brief Method CmdVelocity, addr 0x1803c96a0, size 0x100, virtual false, abstract: false, final false
inline void CmdVelocity(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity) ;

/// @brief Method GetTrackingData, addr 0x1803c97a0, size 0x90, virtual false, abstract: false, final false
inline ::LobbyNetworking::HouseNetworkTransformManager_TransformJobData GetTrackingData() ;

/// @brief Method HasChangedVelocity, addr 0x1803c9830, size 0xa0, virtual false, abstract: false, final false
static inline bool HasChangedVelocity(::Unity::Mathematics::float3  previousVelocity, ::Unity::Mathematics::float3  previousAngularVelocity, ::Unity::Mathematics::float3  newVelocity, ::Unity::Mathematics::float3  newAngularVelocity) ;

/// @brief Method HasMoved, addr 0x1803c98d0, size 0x1b0, virtual false, abstract: false, final false
inline bool HasMoved(::Unity::Mathematics::float3  currentPosition, ::Unity::Mathematics::quaternion  currentRotation) ;

/// @brief Method InvokeUserCode_CmdMove__Vector3__UInt32__UInt16, addr 0x1803c9a80, size 0x190, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdMove__Vector3__UInt32__UInt16(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdVelocity__Vector3__Vector3, addr 0x1803c9c10, size 0x160, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdVelocity__Vector3__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcMove__Vector3__UInt32__UInt16, addr 0x1803c9d70, size 0x190, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcMove__Vector3__UInt32__UInt16(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcVelocity__Vector3__Vector3, addr 0x1803c9f00, size 0x170, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcVelocity__Vector3__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::LobbyNetworking::HouseNetworkTransform* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803ca070, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803ca080, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPlayerConnected, addr 0x1803ca0e0, size 0x60, virtual false, abstract: false, final false
inline void OnPlayerConnected(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnStartServer, addr 0x1803ca140, size 0x130, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopServer, addr 0x1803ca270, size 0x110, virtual true, abstract: false, final false
inline void OnStopServer() ;

/// @brief Method OwnerUpdate, addr 0x1803ca380, size 0x5f0, virtual false, abstract: false, final false
inline void OwnerUpdate(bool  forceFullSync) ;

/// @brief Method ProcessMove, addr 0x1803ca970, size 0x350, virtual false, abstract: false, final false
inline void ProcessMove(::UnityEngine::Vector3  position, uint32_t  packedRotation, uint16_t  platformTicket) ;

/// @brief Method RpcMove, addr 0x1803cacc0, size 0x110, virtual false, abstract: false, final false
inline void RpcMove(::UnityEngine::Vector3  position, uint32_t  packedRotation, uint16_t  platformTicket) ;

/// @brief Method RpcVelocity, addr 0x1803cadd0, size 0x100, virtual false, abstract: false, final false
inline void RpcVelocity(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity) ;

/// @brief Method Start, addr 0x1803caf10, size 0x80, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartLocalCooldown, addr 0x1803caed0, size 0x40, virtual false, abstract: false, final false
inline void StartLocalCooldown() ;

/// @brief Method SyncVelocity, addr 0x1803caf90, size 0x210, virtual false, abstract: false, final false
inline void SyncVelocity(::Unity::Mathematics::float3  newVelocity, ::Unity::Mathematics::float3  newAngularVelocity) ;

/// @brief Method UserCode_CmdMove__Vector3__UInt32__UInt16, addr 0x1803cb1a0, size 0x90, virtual false, abstract: false, final false
inline void UserCode_CmdMove__Vector3__UInt32__UInt16(::UnityEngine::Vector3  position, uint32_t  packedRotation, uint16_t  platformTicket) ;

/// @brief Method UserCode_CmdVelocity__Vector3__Vector3, addr 0x1803cb230, size 0x40, virtual false, abstract: false, final false
inline void UserCode_CmdVelocity__Vector3__Vector3(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity) ;

/// @brief Method UserCode_RpcMove__Vector3__UInt32__UInt16, addr 0x1803cb270, size 0xb0, virtual false, abstract: false, final false
inline void UserCode_RpcMove__Vector3__UInt32__UInt16(::UnityEngine::Vector3  position, uint32_t  packedRotation, uint16_t  platformTicket) ;

/// @brief Method UserCode_RpcVelocity__Vector3__Vector3, addr 0x1803cb320, size 0xc0, virtual false, abstract: false, final false
inline void UserCode_RpcVelocity__Vector3__Vector3(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity) ;

constexpr ::UnityW<::GlobalNamespace::StickyPlatform> const& __cordl_internal_get__stickyPlatform() const;

constexpr ::UnityW<::GlobalNamespace::StickyPlatform>& __cordl_internal_get__stickyPlatform() ;

constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get__syncedAngularVelocity() const;

constexpr ::Unity::Mathematics::float3& __cordl_internal_get__syncedAngularVelocity() ;

constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get__syncedPosition() const;

constexpr ::Unity::Mathematics::float3& __cordl_internal_get__syncedPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__syncedRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__syncedRotation() ;

constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get__syncedVelocity() const;

constexpr ::Unity::Mathematics::float3& __cordl_internal_get__syncedVelocity() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__target() ;

constexpr bool const& __cordl_internal_get_applyInterpolatedVelocity() const;

constexpr bool& __cordl_internal_get_applyInterpolatedVelocity() ;

constexpr bool const& __cordl_internal_get_convertPositionOnPlatformChange() const;

constexpr bool& __cordl_internal_get_convertPositionOnPlatformChange() ;

constexpr ::LobbyNetworking::HouseNetworkTransform_Goal const& __cordl_internal_get_goal() const;

constexpr ::LobbyNetworking::HouseNetworkTransform_Goal& __cordl_internal_get_goal() ;

constexpr bool const& __cordl_internal_get_isPlayer() const;

constexpr bool& __cordl_internal_get_isPlayer() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr float_t const& __cordl_internal_get_positionDampSmoothTime() const;

constexpr float_t& __cordl_internal_get_positionDampSmoothTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_positionDampVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_positionDampVelocity() ;

constexpr bool const& __cordl_internal_get_preventRotationTeleport() const;

constexpr bool& __cordl_internal_get_preventRotationTeleport() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get_remainingCooldownDuration() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get_remainingCooldownDuration() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotationDampVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotationDampVelocity() ;

constexpr bool const& __cordl_internal_get_syncOnSpawn() const;

constexpr bool& __cordl_internal_get_syncOnSpawn() ;

constexpr bool const& __cordl_internal_get_syncVelocity() const;

constexpr bool& __cordl_internal_get_syncVelocity() ;

constexpr float_t const& __cordl_internal_get_waitBeforeTelepot() const;

constexpr float_t& __cordl_internal_get_waitBeforeTelepot() ;

constexpr void __cordl_internal_set__stickyPlatform(::UnityW<::GlobalNamespace::StickyPlatform>  value) ;

constexpr void __cordl_internal_set__syncedAngularVelocity(::Unity::Mathematics::float3  value) ;

constexpr void __cordl_internal_set__syncedPosition(::Unity::Mathematics::float3  value) ;

constexpr void __cordl_internal_set__syncedRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__syncedVelocity(::Unity::Mathematics::float3  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_applyInterpolatedVelocity(bool  value) ;

constexpr void __cordl_internal_set_convertPositionOnPlatformChange(bool  value) ;

constexpr void __cordl_internal_set_goal(::LobbyNetworking::HouseNetworkTransform_Goal  value) ;

constexpr void __cordl_internal_set_isPlayer(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_positionDampSmoothTime(float_t  value) ;

constexpr void __cordl_internal_set_positionDampVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_preventRotationTeleport(bool  value) ;

constexpr void __cordl_internal_set_remainingCooldownDuration(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set_rotationDampVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_syncOnSpawn(bool  value) ;

constexpr void __cordl_internal_set_syncVelocity(bool  value) ;

constexpr void __cordl_internal_set_waitBeforeTelepot(float_t  value) ;

/// @brief Method .ctor, addr 0x1803cb530, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsRestingForPlayerMovement, addr 0x1803cb550, size 0x40, virtual false, abstract: false, final false
inline bool get_IsRestingForPlayerMovement() ;

/// @brief Method get_isOwned, addr 0x1803cb590, size 0x40, virtual false, abstract: false, final false
inline bool get_isOwned() ;

/// @brief Method get_stickyPlatform, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::StickyPlatform> get_stickyPlatform() ;

/// @brief Method get_targetPosition, addr 0x1803cb5d0, size 0x180, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_targetPosition() ;

/// @brief Method get_targetRotation, addr 0x1803cb750, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_targetRotation() ;

/// @brief Method set_stickyPlatform, addr 0x1803cb780, size 0x150, virtual false, abstract: false, final false
inline void set_stickyPlatform(::GlobalNamespace::StickyPlatform*  value) ;

/// @brief Method set_targetPosition, addr 0x1803cb8d0, size 0x140, virtual false, abstract: false, final false
inline void set_targetPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_targetRotation, addr 0x1803cba10, size 0x30, virtual false, abstract: false, final false
inline void set_targetRotation(::UnityEngine::Quaternion  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseNetworkTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseNetworkTransform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseNetworkTransform(HouseNetworkTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseNetworkTransform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseNetworkTransform(HouseNetworkTransform const& ) = delete;

/// @brief Field CooldownDuration offset 0xffffffff size 0x4
static constexpr float_t  CooldownDuration{static_cast<float_t>(0.5f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5756};

/// @brief Field rotateNewSmoothTime offset 0xffffffff size 0x4
static constexpr float_t  rotateNewSmoothTime{static_cast<float_t>(0.1f)};

/// @brief Field sensitivity offset 0xffffffff size 0x4
static constexpr float_t  sensitivity{static_cast<float_t>(0.01f)};

/// @brief Field _target, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____target;

/// @brief Field _stickyPlatform, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::StickyPlatform>  ____stickyPlatform;

/// @brief Field rotationDampVelocity, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotationDampVelocity;

/// @brief Field positionDampVelocity, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___positionDampVelocity;

/// @brief Field positionDampSmoothTime, offset: 0x90, size: 0x4, def value: None
 float_t  ___positionDampSmoothTime;

/// @brief Field waitBeforeTelepot, offset: 0x94, size: 0x4, def value: None
 float_t  ___waitBeforeTelepot;

/// @brief Field isPlayer, offset: 0x98, size: 0x1, def value: None
 bool  ___isPlayer;

/// @brief Field preventRotationTeleport, offset: 0x99, size: 0x1, def value: None
 bool  ___preventRotationTeleport;

/// @brief Field convertPositionOnPlatformChange, offset: 0x9a, size: 0x1, def value: None
 bool  ___convertPositionOnPlatformChange;

/// @brief Field syncOnSpawn, offset: 0x9b, size: 0x1, def value: None
 bool  ___syncOnSpawn;

/// @brief Field syncVelocity, offset: 0x9c, size: 0x1, def value: None
 bool  ___syncVelocity;

/// @brief Field applyInterpolatedVelocity, offset: 0x9d, size: 0x1, def value: None
 bool  ___applyInterpolatedVelocity;

/// @brief Field remainingCooldownDuration, offset: 0xa0, size: 0x8, def value: None
 ::System::Nullable_1<float_t>  ___remainingCooldownDuration;

/// @brief Field logVerbose, offset: 0xa8, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field goal, offset: 0xac, size: 0x24, def value: None
 ::LobbyNetworking::HouseNetworkTransform_Goal  ___goal;

/// @brief Field _syncedPosition, offset: 0xd0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  ____syncedPosition;

/// @brief Field _syncedRotation, offset: 0xdc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____syncedRotation;

/// @brief Field _syncedVelocity, offset: 0xec, size: 0xc, def value: None
 ::Unity::Mathematics::float3  ____syncedVelocity;

/// @brief Field _syncedAngularVelocity, offset: 0xf8, size: 0xc, def value: None
 ::Unity::Mathematics::float3  ____syncedAngularVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ____target) == 0x68, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ____stickyPlatform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ___rotationDampVelocity) == 0x78, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ___positionDampVelocity) == 0x84, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ___positionDampSmoothTime) == 0x90, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ___waitBeforeTelepot) == 0x94, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ___isPlayer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ___preventRotationTeleport) == 0x99, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ___convertPositionOnPlatformChange) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ___syncOnSpawn) == 0x9b, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ___syncVelocity) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ___applyInterpolatedVelocity) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ___remainingCooldownDuration) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ___logVerbose) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ___goal) == 0xac, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ____syncedPosition) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ____syncedRotation) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ____syncedVelocity) == 0xec, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransform, ____syncedAngularVelocity) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::LobbyNetworking::HouseNetworkTransform) == 0x108, "Size mismatch!");

} // namespace end def LobbyNetworking
