#pragma once
// IWYU pragma private; include "UnityEngine/Physics2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Physics2D)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Collider2D;
}
namespace UnityEngine {
struct ContactFilter2D;
}
namespace UnityEngine {
struct ContactPoint2D;
}
namespace UnityEngine {
struct PhysicsScene2D;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit2D;
}
namespace UnityEngine {
class Rigidbody2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Physics2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::Physics2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Physics2D*, "UnityEngine", "Physics2D");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Physics2D
class CORDL_TYPE Physics2D : public ::System::Object {
public:
// Declarations
/// @brief Field m_LastDisabledRigidbody2D, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_LastDisabledRigidbody2D, put=setStaticF_m_LastDisabledRigidbody2D)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>*  m_LastDisabledRigidbody2D;

/// @brief Method GetColliderContactsArray, addr 0x1822f2770, size 0xe0, virtual false, abstract: false, final false
static inline int32_t GetColliderContactsArray(::UnityEngine::Collider2D*  collider, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::ContactPoint2D>  results) ;

/// @brief Method GetColliderContactsArray_Injected, addr 0x1822f2760, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetColliderContactsArray_Injected(::System::IntPtr  collider, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  results) ;

/// @brief Method GetContacts, addr 0x1822f2850, size 0xf0, virtual false, abstract: false, final false
static inline int32_t GetContacts(::UnityEngine::Collider2D*  collider, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::ContactPoint2D>  contacts) ;

/// @brief Method GetRayIntersectionAll, addr 0x1822f2a90, size 0x60, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray  ray) ;

/// @brief Method GetRayIntersectionAll, addr 0x1822f2a30, size 0x60, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray  ray, float_t  distance) ;

/// @brief Method GetRayIntersectionAll, addr 0x1822f29e0, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray  ray, float_t  distance, int32_t  layerMask) ;

/// @brief Method GetRayIntersectionAll_Internal, addr 0x1822f2950, size 0x90, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  distance, int32_t  layerMask) ;

/// @brief Method GetRayIntersectionAll_Internal_Injected, addr 0x1822f2940, size 0x10, virtual false, abstract: false, final false
static inline void GetRayIntersectionAll_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction, float_t  distance, int32_t  layerMask, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method GetRayIntersectionNonAlloc, addr 0x1822f2ce0, size 0xf0, virtual false, abstract: false, final false
static inline int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit2D>  results) ;

/// @brief Method GetRayIntersectionNonAlloc, addr 0x1822f2af0, size 0xf0, virtual false, abstract: false, final false
static inline int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit2D>  results, float_t  distance) ;

/// @brief Method GetRayIntersectionNonAlloc, addr 0x1822f2be0, size 0x100, virtual false, abstract: false, final false
static inline int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit2D>  results, float_t  distance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x1822f3380, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction) ;

/// @brief Method Raycast, addr 0x1822f31c0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance) ;

/// @brief Method Raycast, addr 0x1822f2fd0, size 0x110, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x1822f3260, size 0x120, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, int32_t  layerMask, float_t  minDepth) ;

/// @brief Method Raycast, addr 0x1822f2dd0, size 0x120, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, int32_t  layerMask, float_t  minDepth, float_t  maxDepth) ;

/// @brief Method Raycast, addr 0x1822f2ef0, size 0xe0, virtual false, abstract: false, final false
static inline int32_t Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D>  results) ;

/// @brief Method Raycast, addr 0x1822f30e0, size 0xe0, virtual false, abstract: false, final false
static inline int32_t Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D>  results, float_t  distance) ;

/// @brief Method Raycast, addr 0x1822f3200, size 0x60, virtual false, abstract: false, final false
static inline int32_t Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, ::UnityEngine::ContactFilter2D  contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*  results, float_t  distance) ;

/// @brief Method Simulate_Internal, addr 0x1822f33e0, size 0x20, virtual false, abstract: false, final false
static inline bool Simulate_Internal(::UnityEngine::PhysicsScene2D  physicsScene, float_t  deltaTime, int32_t  simulationLayers) ;

/// @brief Method Simulate_Internal_Injected, addr 0x1822f33d0, size 0x10, virtual false, abstract: false, final false
static inline bool Simulate_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, float_t  deltaTime, int32_t  simulationLayers) ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>* getStaticF_m_LastDisabledRigidbody2D() ;

/// @brief Method get_defaultPhysicsScene, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::PhysicsScene2D get_defaultPhysicsScene() ;

/// @brief Method get_queriesHitTriggers, addr 0x1822f3460, size 0x10, virtual false, abstract: false, final false
static inline bool get_queriesHitTriggers() ;

static inline void setStaticF_m_LastDisabledRigidbody2D(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Physics2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Physics2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Physics2D(Physics2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Physics2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Physics2D(Physics2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19787};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Physics2D) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
