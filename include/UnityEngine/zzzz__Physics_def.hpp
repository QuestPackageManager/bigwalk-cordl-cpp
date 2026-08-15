#pragma once
// IWYU pragma private; include "UnityEngine/Physics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Physics)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct ContactPairHeader;
}
namespace UnityEngine {
struct ContactPair;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
class Physics_ContactEventDelegate;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct SimulationMode;
}
namespace UnityEngine {
struct SimulationOption;
}
namespace UnityEngine {
struct SimulationStage;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Physics;
}
namespace UnityEngine {
class Physics_ContactEventDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Physics*);
MARK_REF_T(::UnityEngine::Physics_ContactEventDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Physics*, "UnityEngine", "Physics");
DEFINE_IL2CPP_CLASS(::UnityEngine::Physics_ContactEventDelegate*, "UnityEngine", "Physics/ContactEventDelegate");
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Physics/ContactEventDelegate
class CORDL_TYPE Physics_ContactEventDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1810f7760, size 0x940, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::PhysicsScene  scene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>  headerArray) ;

static inline ::UnityEngine::Physics_ContactEventDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1812cbb60, size 0x340, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Physics_ContactEventDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Physics_ContactEventDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Physics_ContactEventDelegate(Physics_ContactEventDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Physics_ContactEventDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Physics_ContactEventDelegate(Physics_ContactEventDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20188};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Physics_ContactEventDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Physics
class CORDL_TYPE Physics : public ::System::Object {
public:
// Declarations
using ContactEventDelegate = ::UnityEngine::Physics_ContactEventDelegate;

/// @brief Field ContactEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ContactEvent, put=setStaticF_ContactEvent)) ::UnityEngine::Physics_ContactEventDelegate*  ContactEvent;

/// @brief Field ContactModifyEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ContactModifyEvent, put=setStaticF_ContactModifyEvent)) ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  ContactModifyEvent;

/// @brief Field ContactModifyEventCCD, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ContactModifyEventCCD, put=setStaticF_ContactModifyEventCCD)) ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  ContactModifyEventCCD;

/// @brief Field GenericContactModifyEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GenericContactModifyEvent, put=setStaticF_GenericContactModifyEvent)) ::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>*  GenericContactModifyEvent;

/// @brief Field s_ReusableCollision, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ReusableCollision, put=setStaticF_s_ReusableCollision)) ::UnityEngine::Collision*  s_ReusableCollision;

/// @brief Method BoxCast, addr 0x1822ff360, size 0x140, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method BoxCastNonAlloc, addr 0x1822ff220, size 0x140, virtual false, abstract: false, final false
static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCast, addr 0x1822ff630, size 0x130, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCastNonAlloc, addr 0x1822ff4a0, size 0x190, virtual false, abstract: false, final false
static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method ClosestPoint, addr 0x1822ff760, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3  point, ::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method ComputePenetration, addr 0x1822ff810, size 0x150, virtual false, abstract: false, final false
static inline bool ComputePenetration(::UnityEngine::Collider*  colliderA, ::UnityEngine::Vector3  positionA, ::UnityEngine::Quaternion  rotationA, ::UnityEngine::Collider*  colliderB, ::UnityEngine::Vector3  positionB, ::UnityEngine::Quaternion  rotationB, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<float_t>  distance) ;

/// @brief Method GetBodyByInstanceID, addr 0x1822ff970, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetBodyByInstanceID(::UnityEngine::EntityId  entityId) ;

/// @brief Method GetBodyByInstanceID_Injected, addr 0x1822ff960, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetBodyByInstanceID_Injected(::by_ref<::UnityEngine::EntityId>  entityId) ;

/// @brief Method GetColliderByInstanceID, addr 0x1822ff9b0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Collider> GetColliderByInstanceID(::UnityEngine::EntityId  entityId) ;

/// @brief Method GetColliderByInstanceID_Injected, addr 0x1822ff9a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetColliderByInstanceID_Injected(::by_ref<::UnityEngine::EntityId>  entityId) ;

/// @brief Method GetCollisionToReport, addr 0x1822ff9e0, size 0x1b0, virtual false, abstract: false, final false
static inline ::UnityEngine::Collision* GetCollisionToReport(::by_ref<::UnityEngine::ContactPairHeader>  header, ::by_ref<::UnityEngine::ContactPair>  pair, bool  flipped) ;

/// @brief Method Internal_RaycastAll, addr 0x1822ffba0, size 0x90, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> Internal_RaycastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastAll_Injected, addr 0x1822ffb90, size 0x10, virtual false, abstract: false, final false
static inline void Internal_RaycastAll_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Ray>  ray, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method OnSceneContact, addr 0x1822ffcc0, size 0x130, virtual false, abstract: false, final false
static inline void OnSceneContact(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count) ;

/// @brief Method OnSceneContactModify, addr 0x1822ffc30, size 0x90, virtual false, abstract: false, final false
static inline void OnSceneContactModify(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count, bool  isCCD) ;

/// @brief Method OverlapBoxNonAlloc, addr 0x1822ffdf0, size 0x90, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*>  results, ::UnityEngine::Quaternion  orientation, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsuleNonAlloc, addr 0x1822ffe80, size 0x80, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere, addr 0x1822fffa0, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask) ;

/// @brief Method OverlapSphere, addr 0x1822ffff0, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphereNonAlloc, addr 0x1822fff00, size 0x60, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere_Internal, addr 0x1822fff70, size 0x30, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere_Internal_Injected, addr 0x1822fff60, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method PhysXOnSceneContactModify, addr 0x182300040, size 0xb0, virtual false, abstract: false, final false
static inline void PhysXOnSceneContactModify(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count, bool  isCCD) ;

/// @brief Method Query_ClosestPoint, addr 0x182300100, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Query_ClosestPoint(::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  point) ;

/// @brief Method Query_ClosestPoint_Injected, addr 0x1823000f0, size 0x10, virtual false, abstract: false, final false
static inline void Query_ClosestPoint_Injected(::System::IntPtr  collider, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method Query_ComputePenetration, addr 0x1823001a0, size 0xf0, virtual false, abstract: false, final false
static inline bool Query_ComputePenetration(::UnityEngine::Collider*  colliderA, ::UnityEngine::Vector3  positionA, ::UnityEngine::Quaternion  rotationA, ::UnityEngine::Collider*  colliderB, ::UnityEngine::Vector3  positionB, ::UnityEngine::Quaternion  rotationB, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<float_t>  distance) ;

/// @brief Method Query_ComputePenetration_Injected, addr 0x182300190, size 0x10, virtual false, abstract: false, final false
static inline bool Query_ComputePenetration_Injected(::System::IntPtr  colliderA, ::by_ref<::UnityEngine::Vector3>  positionA, ::by_ref<::UnityEngine::Quaternion>  rotationA, ::System::IntPtr  colliderB, ::by_ref<::UnityEngine::Vector3>  positionB, ::by_ref<::UnityEngine::Quaternion>  rotationB, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<float_t>  distance) ;

/// @brief Method Raycast, addr 0x1823017c0, size 0x130, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction) ;

/// @brief Method Raycast, addr 0x182300c30, size 0x150, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method Raycast, addr 0x1823009b0, size 0x150, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x182301000, size 0x150, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x182301670, size 0x150, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x182301b90, size 0x130, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x182300b00, size 0x130, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x182300ed0, size 0x130, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x182301cc0, size 0x130, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray) ;

/// @brief Method Raycast, addr 0x1823018f0, size 0x140, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method Raycast, addr 0x1823013d0, size 0x160, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x182300d80, size 0x150, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x182301a30, size 0x160, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x182301290, size 0x140, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x182301150, size 0x140, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x182301530, size 0x140, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastAll, addr 0x182300540, size 0x60, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction) ;

/// @brief Method RaycastAll, addr 0x1823004f0, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// @brief Method RaycastAll, addr 0x182300330, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastAll, addr 0x182300380, size 0x120, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastAll, addr 0x1823005a0, size 0x60, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray  ray) ;

/// @brief Method RaycastAll, addr 0x182300290, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance) ;

/// @brief Method RaycastAll, addr 0x1823002e0, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastAll, addr 0x1823004a0, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastNonAlloc, addr 0x182300930, size 0x80, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results) ;

/// @brief Method RaycastNonAlloc, addr 0x182300760, size 0x70, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance) ;

/// @brief Method RaycastNonAlloc, addr 0x1823007d0, size 0x70, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastNonAlloc, addr 0x1823008b0, size 0x80, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastNonAlloc, addr 0x182300670, size 0x80, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit>  results) ;

/// @brief Method RaycastNonAlloc, addr 0x182300600, size 0x70, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance) ;

/// @brief Method RaycastNonAlloc, addr 0x1823006f0, size 0x70, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastNonAlloc, addr 0x182300840, size 0x70, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method ReportContacts, addr 0x182301df0, size 0x360, virtual false, abstract: false, final false
static inline void ReportContacts(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>  array) ;

/// @brief Method SendOnCollisionEnter, addr 0x182302160, size 0x20, virtual false, abstract: false, final false
static inline void SendOnCollisionEnter(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionEnter_Injected, addr 0x182302150, size 0x10, virtual false, abstract: false, final false
static inline void SendOnCollisionEnter_Injected(::System::IntPtr  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionExit, addr 0x182302190, size 0x20, virtual false, abstract: false, final false
static inline void SendOnCollisionExit(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionExit_Injected, addr 0x182302180, size 0x10, virtual false, abstract: false, final false
static inline void SendOnCollisionExit_Injected(::System::IntPtr  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionStay, addr 0x1823021c0, size 0x20, virtual false, abstract: false, final false
static inline void SendOnCollisionStay(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionStay_Injected, addr 0x1823021b0, size 0x10, virtual false, abstract: false, final false
static inline void SendOnCollisionStay_Injected(::System::IntPtr  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method Simulate_Internal, addr 0x1823021f0, size 0x20, virtual false, abstract: false, final false
static inline void Simulate_Internal(::UnityEngine::PhysicsScene  physicsScene, float_t  step, ::UnityEngine::SimulationStage  stages, ::UnityEngine::SimulationOption  options) ;

/// @brief Method Simulate_Internal_Injected, addr 0x1823021e0, size 0x10, virtual false, abstract: false, final false
static inline void Simulate_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, float_t  step, ::UnityEngine::SimulationStage  stages, ::UnityEngine::SimulationOption  options) ;

/// @brief Method SphereCast, addr 0x182302480, size 0x110, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCast, addr 0x182302360, size 0x120, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCastNonAlloc, addr 0x182302210, size 0x150, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method add_ContactModifyEvent, addr 0x182302690, size 0xd0, virtual false, abstract: false, final false
static inline void add_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

static inline ::UnityEngine::Physics_ContactEventDelegate* getStaticF_ContactEvent() ;

static inline ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEvent() ;

static inline ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEventCCD() ;

static inline ::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>* getStaticF_GenericContactModifyEvent() ;

static inline ::UnityEngine::Collision* getStaticF_s_ReusableCollision() ;

/// @brief Method get_defaultPhysicsScene, addr 0x180e8cfd0, size 0x7c30, virtual false, abstract: false, final false
static inline ::UnityEngine::PhysicsScene get_defaultPhysicsScene() ;

/// @brief Method get_gravity, addr 0x182302770, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_gravity() ;

/// @brief Method get_gravity_Injected, addr 0x182302760, size 0x10, virtual false, abstract: false, final false
static inline void get_gravity_Injected(::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_invokeCollisionCallbacks, addr 0x182302790, size 0x10, virtual false, abstract: false, final false
static inline bool get_invokeCollisionCallbacks() ;

/// @brief Method get_reuseCollisionCallbacks, addr 0x1823027a0, size 0x10, virtual false, abstract: false, final false
static inline bool get_reuseCollisionCallbacks() ;

/// @brief Method get_simulationMode, addr 0x1823027b0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::SimulationMode get_simulationMode() ;

/// @brief Method remove_ContactModifyEvent, addr 0x1823027c0, size 0xd0, virtual false, abstract: false, final false
static inline void remove_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

static inline void setStaticF_ContactEvent(::UnityEngine::Physics_ContactEventDelegate*  value) ;

static inline void setStaticF_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

static inline void setStaticF_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

static inline void setStaticF_GenericContactModifyEvent(::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>*  value) ;

static inline void setStaticF_s_ReusableCollision(::UnityEngine::Collision*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Physics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Physics(Physics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Physics(Physics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20189};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Physics) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
