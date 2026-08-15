#pragma once
// IWYU pragma private; include "Mirror/Examples/RigidbodyPhysics/AddForce.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AddForce)
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Mirror::Examples::RigidbodyPhysics {
class AddForce;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::RigidbodyPhysics::AddForce*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::RigidbodyPhysics::AddForce*, "Mirror.Examples.RigidbodyPhysics", "AddForce");
// Dependencies Mirror.NetworkBehaviour
namespace Mirror::Examples::RigidbodyPhysics {
// Is value type: false
// CS Name: Mirror.Examples.RigidbodyPhysics.AddForce
class CORDL_TYPE AddForce : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field force, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_force, put=__cordl_internal_set_force)) float_t  force;

/// @brief Field rigidbody3d, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidbody3d, put=__cordl_internal_set_rigidbody3d)) ::UnityW<::UnityEngine::Rigidbody>  rigidbody3d;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::RigidbodyPhysics::AddForce* New_ctor() ;

/// @brief Method OnStartServer, addr 0x1815532e0, size 0x30, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnValidate, addr 0x181553310, size 0x50, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Update, addr 0x181553360, size 0x90, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_force() const;

constexpr float_t& __cordl_internal_get_force() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidbody3d() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidbody3d() ;

constexpr void __cordl_internal_set_force(float_t  value) ;

constexpr void __cordl_internal_set_rigidbody3d(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x1815533f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddForce() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddForce", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AddForce(AddForce && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddForce", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddForce(AddForce const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19289};

/// @brief Field rigidbody3d, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidbody3d;

/// @brief Field force, offset: 0x70, size: 0x4, def value: None
 float_t  ___force;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::RigidbodyPhysics::AddForce, ___rigidbody3d) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::RigidbodyPhysics::AddForce, ___force) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::RigidbodyPhysics::AddForce) == 0x78, "Size mismatch!");

} // namespace end def Mirror::Examples::RigidbodyPhysics
