#pragma once
// IWYU pragma private; include "GlobalNamespace/TelescopeRotator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TelescopeRotator)
namespace GlobalNamespace {
class PeckEffectTelescope;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TelescopeRotator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TelescopeRotator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TelescopeRotator*, "", "TelescopeRotator");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TelescopeRotator
class CORDL_TYPE TelescopeRotator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field peckEffect, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_peckEffect, put=__cordl_internal_set_peckEffect)) ::UnityW<::GlobalNamespace::PeckEffectTelescope>  peckEffect;

/// @brief Field scopeTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_scopeTransform, put=__cordl_internal_set_scopeTransform)) ::UnityW<::UnityEngine::Transform>  scopeTransform;

/// @brief Field swivlerTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_swivlerTransform, put=__cordl_internal_set_swivlerTransform)) ::UnityW<::UnityEngine::Transform>  swivlerTransform;

/// @brief Field target, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

static inline ::GlobalNamespace::TelescopeRotator* New_ctor() ;

/// @brief Method Rotate, addr 0x1803f1c10, size 0x380, virtual false, abstract: false, final false
inline void Rotate() ;

constexpr ::UnityW<::GlobalNamespace::PeckEffectTelescope> const& __cordl_internal_get_peckEffect() const;

constexpr ::UnityW<::GlobalNamespace::PeckEffectTelescope>& __cordl_internal_get_peckEffect() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_scopeTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_scopeTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_swivlerTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_swivlerTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_peckEffect(::UnityW<::GlobalNamespace::PeckEffectTelescope>  value) ;

constexpr void __cordl_internal_set_scopeTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_swivlerTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TelescopeRotator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TelescopeRotator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TelescopeRotator(TelescopeRotator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TelescopeRotator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TelescopeRotator(TelescopeRotator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4922};

/// @brief Field swivlerTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___swivlerTransform;

/// @brief Field scopeTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___scopeTransform;

/// @brief Field target, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field peckEffect, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckEffectTelescope>  ___peckEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TelescopeRotator, ___swivlerTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TelescopeRotator, ___scopeTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TelescopeRotator, ___target) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TelescopeRotator, ___peckEffect) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TelescopeRotator) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
