#pragma once
// IWYU pragma private; include "Mirror/Examples/Tanks/Projectile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Projectile)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Mirror::Examples::Tanks {
class Projectile;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Tanks::Projectile*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Tanks::Projectile*, "Mirror.Examples.Tanks", "Projectile");
// Dependencies Mirror.NetworkBehaviour
namespace Mirror::Examples::Tanks {
// Is value type: false
// CS Name: Mirror.Examples.Tanks.Projectile
class CORDL_TYPE Projectile : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field destroyAfter, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_destroyAfter, put=__cordl_internal_set_destroyAfter)) float_t  destroyAfter;

/// @brief Field force, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_force, put=__cordl_internal_set_force)) float_t  force;

/// @brief Field rigidBody, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidBody, put=__cordl_internal_set_rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  rigidBody;

/// @brief Method DestroySelf, addr 0x181562430, size 0x60, virtual false, abstract: false, final false
inline void DestroySelf() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::Tanks::Projectile* New_ctor() ;

/// @brief Method OnStartServer, addr 0x181562490, size 0x20, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnTriggerEnter, addr 0x1815624b0, size 0x90, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  co) ;

/// @brief Method Start, addr 0x181562540, size 0x90, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_destroyAfter() const;

constexpr float_t& __cordl_internal_get_destroyAfter() ;

constexpr float_t const& __cordl_internal_get_force() const;

constexpr float_t& __cordl_internal_get_force() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidBody() ;

constexpr void __cordl_internal_set_destroyAfter(float_t  value) ;

constexpr void __cordl_internal_set_force(float_t  value) ;

constexpr void __cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x1815625d0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Projectile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Projectile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Projectile(Projectile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Projectile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Projectile(Projectile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19274};

/// @brief Field destroyAfter, offset: 0x68, size: 0x4, def value: None
 float_t  ___destroyAfter;

/// @brief Field rigidBody, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidBody;

/// @brief Field force, offset: 0x78, size: 0x4, def value: None
 float_t  ___force;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Tanks::Projectile, ___destroyAfter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Tanks::Projectile, ___rigidBody) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Tanks::Projectile, ___force) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Tanks::Projectile) == 0x80, "Size mismatch!");

} // namespace end def Mirror::Examples::Tanks
