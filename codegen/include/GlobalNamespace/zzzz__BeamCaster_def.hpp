#pragma once
// IWYU pragma private; include "GlobalNamespace/BeamCaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeamCaster)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BeamCaster;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeamCaster*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeamCaster*, "", "BeamCaster");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeamCaster
class CORDL_TYPE BeamCaster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field hit, offset 0x30, size 0x2c 
 __declspec(property(get=__cordl_internal_get_hit, put=__cordl_internal_set_hit)) ::UnityEngine::RaycastHit  hit;

/// @brief Field layerMask, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field logVerbose, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field maxDistance, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) float_t  maxDistance;

/// @brief Field placeAtHit, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_placeAtHit, put=__cordl_internal_set_placeAtHit)) ::UnityW<::UnityEngine::Transform>  placeAtHit;

static inline ::GlobalNamespace::BeamCaster* New_ctor() ;

/// @brief Method Update, addr 0x1803f78c0, size 0x280, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_hit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_hit() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr float_t const& __cordl_internal_get_maxDistance() const;

constexpr float_t& __cordl_internal_get_maxDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_placeAtHit() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_placeAtHit() ;

constexpr void __cordl_internal_set_hit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_maxDistance(float_t  value) ;

constexpr void __cordl_internal_set_placeAtHit(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeamCaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeamCaster", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeamCaster(BeamCaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeamCaster", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeamCaster(BeamCaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5024};

/// @brief Field placeAtHit, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___placeAtHit;

/// @brief Field layerMask, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// @brief Field maxDistance, offset: 0x2c, size: 0x4, def value: None
 float_t  ___maxDistance;

/// @brief Field hit, offset: 0x30, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___hit;

/// @brief Field logVerbose, offset: 0x5c, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeamCaster, ___placeAtHit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeamCaster, ___layerMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeamCaster, ___maxDistance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeamCaster, ___hit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeamCaster, ___logVerbose) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeamCaster) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
