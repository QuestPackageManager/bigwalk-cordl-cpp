#pragma once
// IWYU pragma private; include "UnityEngine/RaycastHit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastHit)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct RaycastHit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RaycastHit);
DEFINE_IL2CPP_CLASS(::UnityEngine::RaycastHit, "UnityEngine", "RaycastHit");
// Dependencies UnityEngine.EntityId, UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RaycastHit
struct CORDL_TYPE RaycastHit {
public:
// Declarations
 __declspec(property(get=get_collider)) ::UnityW<::UnityEngine::Collider>  collider;

 __declspec(property(get=get_colliderEntityId)) ::UnityEngine::EntityId  colliderEntityId;

 __declspec(property(get=get_distance)) float_t  distance;

 __declspec(property(get=get_normal)) ::UnityEngine::Vector3  normal;

 __declspec(property(get=get_point)) ::UnityEngine::Vector3  point;

 __declspec(property(get=get_rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  rigidbody;

 __declspec(property(get=get_transform)) ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Method get_collider, addr 0x182302c50, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> get_collider() ;

/// @brief Method get_colliderEntityId, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::EntityId get_colliderEntityId() ;

/// @brief Method get_distance, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_distance() ;

/// @brief Method get_normal, addr 0x1802d5350, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_normal() ;

/// @brief Method get_point, addr 0x1802d5330, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_point() ;

/// @brief Method get_rigidbody, addr 0x182302cc0, size 0x110, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> get_rigidbody() ;

/// @brief Method get_transform, addr 0x182302dd0, size 0x130, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_transform() ;

// Ctor Parameters []
// @brief default ctor
constexpr RaycastHit() ;

// Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_FaceID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UV", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Collider", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }]
constexpr RaycastHit(::UnityEngine::Vector3  m_Point, ::UnityEngine::Vector3  m_Normal, uint32_t  m_FaceID, float_t  m_Distance, ::UnityEngine::Vector2  m_UV, ::UnityEngine::EntityId  m_Collider) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20211};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field m_Point, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Point;

/// @brief Field m_Normal, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Normal;

/// @brief Field m_FaceID, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_FaceID;

/// @brief Field m_Distance, offset: 0x1c, size: 0x4, def value: None
 float_t  m_Distance;

/// @brief Field m_UV, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_UV;

/// @brief Field m_Collider, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::EntityId  m_Collider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RaycastHit, m_Point) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_Normal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_FaceID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_Distance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_UV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_Collider) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::RaycastHit) == 0x2c, "Size mismatch!");

} // namespace end def UnityEngine
