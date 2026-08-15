#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsScene.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsScene)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Collider;
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
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct PhysicsScene;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PhysicsScene);
DEFINE_IL2CPP_CLASS(::UnityEngine::PhysicsScene, "UnityEngine", "PhysicsScene");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.PhysicsScene
struct CORDL_TYPE PhysicsScene {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PhysicsScene>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::PhysicsScene>*() ;

/// @brief Method BoxCast, addr 0x1822fd4f0, size 0x200, virtual false, abstract: false, final false
inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method BoxCast, addr 0x1822fd2d0, size 0x220, virtual false, abstract: false, final false
inline int32_t BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCast, addr 0x1822fd6f0, size 0x1e0, virtual false, abstract: false, final false
inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCast, addr 0x1822fd8d0, size 0x220, virtual false, abstract: false, final false
inline int32_t CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Equals, addr 0x1822fdb20, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0x1822fdaf0, size 0x30, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::PhysicsScene  other) ;

/// @brief Method GetDefaultScene, addr 0x180e8cfd0, size 0x7c30, virtual false, abstract: false, final false
static inline ::UnityEngine::PhysicsScene GetDefaultScene() ;

/// @brief Method GetHashCode, addr 0x18224c310, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Internal_BoxCast, addr 0x1822fdca0, size 0x140, virtual false, abstract: false, final false
static inline bool Internal_BoxCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_BoxCastNonAlloc, addr 0x1822fdbc0, size 0xe0, virtual false, abstract: false, final false
static inline int32_t Internal_BoxCastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_BoxCastNonAlloc_Injected, addr 0x1822fdbb0, size 0x10, virtual false, abstract: false, final false
static inline int32_t Internal_BoxCastNonAlloc_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  halfExtents, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  raycastHits, ::by_ref<::UnityEngine::Quaternion>  orientation, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_CapsuleCast, addr 0x1822fdee0, size 0x130, virtual false, abstract: false, final false
static inline bool Internal_CapsuleCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_CapsuleCastNonAlloc, addr 0x1822fddf0, size 0xf0, virtual false, abstract: false, final false
static inline int32_t Internal_CapsuleCastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_CapsuleCastNonAlloc_Injected, addr 0x1822fdde0, size 0x10, virtual false, abstract: false, final false
static inline int32_t Internal_CapsuleCastNonAlloc_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  p0, ::by_ref<::UnityEngine::Vector3>  p1, float_t  radius, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_Raycast, addr 0x1822fe110, size 0x30, virtual false, abstract: false, final false
static inline bool Internal_Raycast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastNonAlloc, addr 0x1822fe020, size 0xa0, virtual false, abstract: false, final false
static inline int32_t Internal_RaycastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastNonAlloc_Injected, addr 0x1822fe010, size 0x10, virtual false, abstract: false, final false
static inline int32_t Internal_RaycastNonAlloc_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastTest, addr 0x1822fe0d0, size 0x30, virtual false, abstract: false, final false
static inline bool Internal_RaycastTest(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastTest_Injected, addr 0x1822fe0c0, size 0x10, virtual false, abstract: false, final false
static inline bool Internal_RaycastTest_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Ray>  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_Raycast_Injected, addr 0x1822fe100, size 0x10, virtual false, abstract: false, final false
static inline bool Internal_Raycast_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Ray>  ray, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_SphereCast, addr 0x1822fe220, size 0x100, virtual false, abstract: false, final false
static inline bool Internal_SphereCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_SphereCastNonAlloc, addr 0x1822fe150, size 0xd0, virtual false, abstract: false, final false
static inline int32_t Internal_SphereCastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_SphereCastNonAlloc_Injected, addr 0x1822fe140, size 0x10, virtual false, abstract: false, final false
static inline int32_t Internal_SphereCastNonAlloc_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, float_t  radius, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method IsValid, addr 0x1822fe350, size 0x30, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method IsValid_Internal, addr 0x1822fe330, size 0x20, virtual false, abstract: false, final false
static inline bool IsValid_Internal(::UnityEngine::PhysicsScene  physicsScene) ;

/// @brief Method IsValid_Internal_Injected, addr 0x1822fe320, size 0x10, virtual false, abstract: false, final false
static inline bool IsValid_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene) ;

/// @brief Method OverlapBox, addr 0x1822fe3d0, size 0x100, virtual false, abstract: false, final false
inline int32_t OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*>  results, ::UnityEngine::Quaternion  orientation, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapBoxNonAlloc_Internal, addr 0x1822fe390, size 0x40, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*>  results, ::UnityEngine::Quaternion  orientation, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapBoxNonAlloc_Internal_Injected, addr 0x1822fe380, size 0x10, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  halfExtents, ::ArrayW<::UnityEngine::Collider*>  results, ::by_ref<::UnityEngine::Quaternion>  orientation, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsule, addr 0x1822fe520, size 0xe0, virtual false, abstract: false, final false
inline int32_t OverlapCapsule(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsuleNonAlloc_Internal, addr 0x1822fe4e0, size 0x40, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsuleNonAlloc_Internal_Injected, addr 0x1822fe4d0, size 0x10, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  point0, ::by_ref<::UnityEngine::Vector3>  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere, addr 0x1822fe640, size 0x90, virtual false, abstract: false, final false
inline int32_t OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphereNonAlloc_Internal, addr 0x1822fe610, size 0x30, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphereNonAlloc_Internal_Injected, addr 0x1822fe600, size 0x10, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_BoxCast, addr 0x1822fe6e0, size 0x60, virtual false, abstract: false, final false
static inline bool Query_BoxCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  outHit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_BoxCast_Injected, addr 0x1822fe6d0, size 0x10, virtual false, abstract: false, final false
static inline bool Query_BoxCast_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  halfExtents, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Quaternion>  orientation, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  outHit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_CapsuleCast, addr 0x1822fe750, size 0x60, virtual false, abstract: false, final false
static inline bool Query_CapsuleCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_CapsuleCast_Injected, addr 0x1822fe740, size 0x10, virtual false, abstract: false, final false
static inline bool Query_CapsuleCast_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  point1, ::by_ref<::UnityEngine::Vector3>  point2, float_t  radius, ::by_ref<::UnityEngine::Vector3>  direction, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_SphereCast, addr 0x1822fe7c0, size 0x50, virtual false, abstract: false, final false
static inline bool Query_SphereCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_SphereCast_Injected, addr 0x1822fe7b0, size 0x10, virtual false, abstract: false, final false
static inline bool Query_SphereCast_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, float_t  radius, ::by_ref<::UnityEngine::Vector3>  direction, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x1822febe0, size 0x1c0, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x1822fea50, size 0x190, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x1822fe810, size 0x240, virtual false, abstract: false, final false
inline int32_t Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Simulate, addr 0x1822feda0, size 0xc0, virtual false, abstract: false, final false
inline void Simulate(float_t  step) ;

/// @brief Method SphereCast, addr 0x1822ff020, size 0x190, virtual false, abstract: false, final false
inline bool SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCast, addr 0x1822fee60, size 0x1c0, virtual false, abstract: false, final false
inline int32_t SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method ToString, addr 0x1822ff1b0, size 0x70, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::PhysicsScene>"
constexpr ::System::IEquatable_1<::UnityEngine::PhysicsScene>* i___System__IEquatable_1___UnityEngine__PhysicsScene_() ;

/// @brief Method op_Equality, addr 0x18227b130, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::PhysicsScene  lhs, ::UnityEngine::PhysicsScene  rhs) ;

/// @brief Method op_Inequality, addr 0x18147cc40, size 0x20, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::PhysicsScene  lhs, ::UnityEngine::PhysicsScene  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsScene() ;

// Ctor Parameters [CppParam { name: "m_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_version", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PhysicsScene(int32_t  m_index, int32_t  m_version) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20207};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_index, offset: 0x0, size: 0x4, def value: None
 int32_t  m_index;

/// @brief Field m_version, offset: 0x4, size: 0x4, def value: None
 int32_t  m_version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PhysicsScene, m_index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicsScene, m_version) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::PhysicsScene) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine
