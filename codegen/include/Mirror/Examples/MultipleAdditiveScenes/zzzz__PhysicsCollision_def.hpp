#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleAdditiveScenes/PhysicsCollision.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhysicsCollision)
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Mirror::Examples::MultipleAdditiveScenes {
class PhysicsCollision;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision*, "Mirror.Examples.MultipleAdditiveScenes", "PhysicsCollision");
// Dependencies Mirror.NetworkBehaviour
namespace Mirror::Examples::MultipleAdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.MultipleAdditiveScenes.PhysicsCollision
class CORDL_TYPE PhysicsCollision : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field force, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_force, put=__cordl_internal_set_force)) float_t  force;

/// @brief Field rigidbody3D, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidbody3D, put=__cordl_internal_set_rigidbody3D)) ::UnityW<::UnityEngine::Rigidbody>  rigidbody3D;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision* New_ctor() ;

/// @brief Method OnCollisionStay, addr 0x18155e5f0, size 0x1e0, virtual false, abstract: false, final false
inline void OnCollisionStay(::UnityEngine::Collision*  other) ;

/// @brief Method OnValidate, addr 0x18155e7d0, size 0x50, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Start, addr 0x18155e820, size 0x40, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_force() const;

constexpr float_t& __cordl_internal_get_force() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidbody3D() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidbody3D() ;

constexpr void __cordl_internal_set_force(float_t  value) ;

constexpr void __cordl_internal_set_rigidbody3D(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x18155e860, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhysicsCollision() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhysicsCollision", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhysicsCollision(PhysicsCollision && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsCollision", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhysicsCollision(PhysicsCollision const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19319};

/// @brief Field force, offset: 0x68, size: 0x4, def value: None
 float_t  ___force;

/// @brief Field rigidbody3D, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidbody3D;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision, ___force) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision, ___rigidbody3D) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleAdditiveScenes::PhysicsCollision) == 0x78, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleAdditiveScenes
