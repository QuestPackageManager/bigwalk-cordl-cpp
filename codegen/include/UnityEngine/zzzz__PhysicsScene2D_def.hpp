#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsScene2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsScene2D)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct BlittableListWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct ContactFilter2D;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct PhysicsScene2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PhysicsScene2D);
DEFINE_IL2CPP_CLASS(::UnityEngine::PhysicsScene2D, "UnityEngine", "PhysicsScene2D");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.PhysicsScene2D
struct CORDL_TYPE PhysicsScene2D {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PhysicsScene2D>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::PhysicsScene2D>*() ;

/// @brief Method Equals, addr 0x1822f7060, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::PhysicsScene2D  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetRayIntersection, addr 0x1822f71a0, size 0x120, virtual false, abstract: false, final false
inline int32_t GetRayIntersection(::UnityEngine::Ray  ray, float_t  distance, ::ArrayW<::UnityEngine::RaycastHit2D>  results, int32_t  layerMask) ;

/// @brief Method GetRayIntersectionArray_Internal, addr 0x1822f70e0, size 0xc0, virtual false, abstract: false, final false
static inline int32_t GetRayIntersectionArray_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  distance, int32_t  layerMask, ::ArrayW<::UnityEngine::RaycastHit2D>  results) ;

/// @brief Method GetRayIntersectionArray_Internal_Injected, addr 0x1822f70d0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetRayIntersectionArray_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction, float_t  distance, int32_t  layerMask, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  results) ;

/// @brief Method IsValid, addr 0x1822f72f0, size 0x30, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method IsValid_Internal, addr 0x1822f72d0, size 0x20, virtual false, abstract: false, final false
static inline bool IsValid_Internal(::UnityEngine::PhysicsScene2D  physicsScene) ;

/// @brief Method IsValid_Internal_Injected, addr 0x1822f72c0, size 0x10, virtual false, abstract: false, final false
static inline bool IsValid_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene) ;

/// @brief Method Raycast, addr 0x1822f7950, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter) ;

/// @brief Method Raycast, addr 0x1822f77e0, size 0x170, virtual false, abstract: false, final false
inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x1822f75e0, size 0x150, virtual false, abstract: false, final false
inline int32_t Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D>  results) ;

/// @brief Method Raycast, addr 0x1822f7730, size 0xb0, virtual false, abstract: false, final false
inline int32_t Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*  results) ;

/// @brief Method RaycastArray_Internal, addr 0x1822f7330, size 0xd0, virtual false, abstract: false, final false
static inline int32_t RaycastArray_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D>  results) ;

/// @brief Method RaycastArray_Internal_Injected, addr 0x1822f7320, size 0x10, virtual false, abstract: false, final false
static inline int32_t RaycastArray_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  origin, ::by_ref<::UnityEngine::Vector2>  direction, float_t  distance, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  results) ;

/// @brief Method RaycastList_Internal, addr 0x1822f7410, size 0x160, virtual false, abstract: false, final false
static inline int32_t RaycastList_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*  results) ;

/// @brief Method RaycastList_Internal_Injected, addr 0x1822f7400, size 0x10, virtual false, abstract: false, final false
static inline int32_t RaycastList_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  origin, ::by_ref<::UnityEngine::Vector2>  direction, float_t  distance, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  results) ;

/// @brief Method Raycast_Internal, addr 0x1822f7580, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D Raycast_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter) ;

/// @brief Method Raycast_Internal_Injected, addr 0x1822f7570, size 0x10, virtual false, abstract: false, final false
static inline void Raycast_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  origin, ::by_ref<::UnityEngine::Vector2>  direction, float_t  distance, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::RaycastHit2D>  ret) ;

/// @brief Method Simulate, addr 0x1822f7a50, size 0x70, virtual false, abstract: false, final false
inline bool Simulate(float_t  deltaTime) ;

/// @brief Method Simulate, addr 0x1822f7ac0, size 0x80, virtual false, abstract: false, final false
inline bool Simulate(float_t  deltaTime, int32_t  simulationLayers) ;

/// @brief Method ToString, addr 0x1822f7b40, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::PhysicsScene2D>"
constexpr ::System::IEquatable_1<::UnityEngine::PhysicsScene2D>* i___System__IEquatable_1___UnityEngine__PhysicsScene2D_() ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::PhysicsScene2D  lhs, ::UnityEngine::PhysicsScene2D  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsScene2D() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PhysicsScene2D(int32_t  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19785};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PhysicsScene2D, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::PhysicsScene2D) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
