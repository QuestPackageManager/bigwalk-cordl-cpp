#pragma once
// IWYU pragma private; include "GlobalNamespace/ProximityGauge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ProximityGauge)
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
class ProximityGauge;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ProximityGauge*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProximityGauge*, "", "ProximityGauge");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProximityGauge
class CORDL_TYPE ProximityGauge : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field chargeLightSystem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargeLightSystem, put=__cordl_internal_set_chargeLightSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  chargeLightSystem;

/// @brief Field logVerbose, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field maxDistance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) float_t  maxDistance;

/// @brief Field minDistance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistance, put=__cordl_internal_set_minDistance)) float_t  minDistance;

/// @brief Field needles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_needles, put=__cordl_internal_set_needles)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  needles;

/// @brief Field partners, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_partners, put=__cordl_internal_set_partners)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  partners;

static inline ::GlobalNamespace::ProximityGauge* New_ctor() ;

/// @brief Method Update, addr 0x1804121f0, size 0x280, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_chargeLightSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_chargeLightSystem() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr float_t const& __cordl_internal_get_maxDistance() const;

constexpr float_t& __cordl_internal_get_maxDistance() ;

constexpr float_t const& __cordl_internal_get_minDistance() const;

constexpr float_t& __cordl_internal_get_minDistance() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_needles() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_needles() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_partners() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_partners() ;

constexpr void __cordl_internal_set_chargeLightSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_maxDistance(float_t  value) ;

constexpr void __cordl_internal_set_minDistance(float_t  value) ;

constexpr void __cordl_internal_set_needles(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_partners(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProximityGauge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProximityGauge", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProximityGauge(ProximityGauge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProximityGauge", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProximityGauge(ProximityGauge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5112};

/// @brief Field chargeLightSystem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___chargeLightSystem;

/// @brief Field needles, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___needles;

/// @brief Field partners, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___partners;

/// @brief Field maxDistance, offset: 0x38, size: 0x4, def value: None
 float_t  ___maxDistance;

/// @brief Field minDistance, offset: 0x3c, size: 0x4, def value: None
 float_t  ___minDistance;

/// @brief Field logVerbose, offset: 0x40, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProximityGauge, ___chargeLightSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityGauge, ___needles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityGauge, ___partners) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityGauge, ___maxDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityGauge, ___minDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityGauge, ___logVerbose) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProximityGauge) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
