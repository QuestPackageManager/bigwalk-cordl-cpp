#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectChangePhysicsMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PeckEffectChangePhysicsMaterial)
namespace GlobalNamespace {
struct PeckContext;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectChangePhysicsMaterial;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectChangePhysicsMaterial*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectChangePhysicsMaterial*, "", "PeckEffectChangePhysicsMaterial");
// Dependencies PeckSystemReference, UnityEngine.MonoBehaviour, UnityEngine.PhysicsMaterial
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectChangePhysicsMaterial
class CORDL_TYPE PeckEffectChangePhysicsMaterial : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field logVerbose, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field materials, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_materials, put=__cordl_internal_set_materials)) ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  materials;

/// @brief Field peckSystemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystemReference, put=__cordl_internal_set_peckSystemReference)) ::GlobalNamespace::PeckSystemReference  peckSystemReference;

/// @brief Field target, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Collider>  target;

/// @brief Method Awake, addr 0x180449310, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectChangePhysicsMaterial* New_ctor() ;

/// @brief Method Peck, addr 0x1804493b0, size 0x80, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>> const& __cordl_internal_get_materials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>& __cordl_internal_get_materials() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystemReference() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_materials(::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  value) ;

constexpr void __cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectChangePhysicsMaterial() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectChangePhysicsMaterial", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectChangePhysicsMaterial(PeckEffectChangePhysicsMaterial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectChangePhysicsMaterial", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectChangePhysicsMaterial(PeckEffectChangePhysicsMaterial const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5379};

/// @brief Field peckSystemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystemReference;

/// @brief Field target, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___target;

/// @brief Field materials, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  ___materials;

/// @brief Field logVerbose, offset: 0x58, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectChangePhysicsMaterial, ___peckSystemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangePhysicsMaterial, ___target) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangePhysicsMaterial, ___materials) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangePhysicsMaterial, ___logVerbose) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectChangePhysicsMaterial) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
