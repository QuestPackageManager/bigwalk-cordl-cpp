#pragma once
// IWYU pragma private; include "GlobalNamespace/UnlockTrailStation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnlockTrailStation)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckEffectTween;
}
namespace GlobalNamespace {
class PropHome;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class UnlockTrailStation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnlockTrailStation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnlockTrailStation*, "", "UnlockTrailStation");
// Dependencies PeckSystemReference, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnlockTrailStation
class CORDL_TYPE UnlockTrailStation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _plateInitialRotations, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__plateInitialRotations, put=__cordl_internal_set__plateInitialRotations)) ::ArrayW<::UnityEngine::Quaternion>  _plateInitialRotations;

/// @brief Field arrowTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_arrowTransform, put=__cordl_internal_set_arrowTransform)) ::UnityW<::UnityEngine::Transform>  arrowTransform;

/// @brief Field cutSystem, offset 0x38, size 0x28 
 __declspec(property(get=__cordl_internal_get_cutSystem, put=__cordl_internal_set_cutSystem)) ::GlobalNamespace::PeckSystemReference  cutSystem;

/// @brief Field cuttingHome, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cuttingHome, put=__cordl_internal_set_cuttingHome)) ::UnityW<::GlobalNamespace::PropHome>  cuttingHome;

/// @brief Field cuttingPositioner, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_cuttingPositioner, put=__cordl_internal_set_cuttingPositioner)) ::UnityW<::UnityEngine::Transform>  cuttingPositioner;

/// @brief Field gap, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_gap, put=__cordl_internal_set_gap)) float_t  gap;

/// @brief Field peckTween, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_peckTween, put=__cordl_internal_set_peckTween)) ::UnityW<::GlobalNamespace::PeckEffectTween>  peckTween;

/// @brief Field plates, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_plates, put=__cordl_internal_set_plates)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  plates;

/// @brief Field startPosition, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startPosition, put=__cordl_internal_set_startPosition)) float_t  startPosition;

/// @brief Field stationIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_stationIndex, put=__cordl_internal_set_stationIndex)) int32_t  stationIndex;

/// @brief Field targetPlate, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPlate, put=__cordl_internal_set_targetPlate)) ::UnityW<::UnityEngine::Transform>  targetPlate;

/// @brief Method Awake, addr 0x18041a170, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::UnlockTrailStation* New_ctor() ;

/// @brief Method OnBite, addr 0x18041a210, size 0xd0, virtual false, abstract: false, final false
inline void OnBite() ;

/// @brief Method OnCutPeck, addr 0x18041a2e0, size 0x90, virtual false, abstract: false, final false
inline void OnCutPeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method OnDrawGizmosSelected, addr 0x18041a370, size 0x1e0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method PlateTween, addr 0x18041a550, size 0x1f0, virtual false, abstract: false, final false
inline void PlateTween(float_t  t) ;

constexpr ::ArrayW<::UnityEngine::Quaternion> const& __cordl_internal_get__plateInitialRotations() const;

constexpr ::ArrayW<::UnityEngine::Quaternion>& __cordl_internal_get__plateInitialRotations() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_arrowTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_arrowTransform() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_cutSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_cutSystem() ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get_cuttingHome() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get_cuttingHome() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cuttingPositioner() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cuttingPositioner() ;

constexpr float_t const& __cordl_internal_get_gap() const;

constexpr float_t& __cordl_internal_get_gap() ;

constexpr ::UnityW<::GlobalNamespace::PeckEffectTween> const& __cordl_internal_get_peckTween() const;

constexpr ::UnityW<::GlobalNamespace::PeckEffectTween>& __cordl_internal_get_peckTween() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_plates() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_plates() ;

constexpr float_t const& __cordl_internal_get_startPosition() const;

constexpr float_t& __cordl_internal_get_startPosition() ;

constexpr int32_t const& __cordl_internal_get_stationIndex() const;

constexpr int32_t& __cordl_internal_get_stationIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetPlate() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetPlate() ;

constexpr void __cordl_internal_set__plateInitialRotations(::ArrayW<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set_arrowTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_cutSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_cuttingHome(::UnityW<::GlobalNamespace::PropHome>  value) ;

constexpr void __cordl_internal_set_cuttingPositioner(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gap(float_t  value) ;

constexpr void __cordl_internal_set_peckTween(::UnityW<::GlobalNamespace::PeckEffectTween>  value) ;

constexpr void __cordl_internal_set_plates(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_startPosition(float_t  value) ;

constexpr void __cordl_internal_set_stationIndex(int32_t  value) ;

constexpr void __cordl_internal_set_targetPlate(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlockTrailStation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlockTrailStation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlockTrailStation(UnlockTrailStation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlockTrailStation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlockTrailStation(UnlockTrailStation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5150};

/// @brief Field arrowTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___arrowTransform;

/// @brief Field stationIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___stationIndex;

/// @brief Field cuttingHome, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ___cuttingHome;

/// @brief Field cutSystem, offset: 0x38, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___cutSystem;

/// @brief Field cuttingPositioner, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___cuttingPositioner;

/// @brief Field gap, offset: 0x68, size: 0x4, def value: None
 float_t  ___gap;

/// @brief Field startPosition, offset: 0x6c, size: 0x4, def value: None
 float_t  ___startPosition;

/// @brief Field peckTween, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckEffectTween>  ___peckTween;

/// @brief Field plates, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___plates;

/// @brief Field targetPlate, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetPlate;

/// @brief Field _plateInitialRotations, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion>  ____plateInitialRotations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnlockTrailStation, ___arrowTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnlockTrailStation, ___stationIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnlockTrailStation, ___cuttingHome) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnlockTrailStation, ___cutSystem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnlockTrailStation, ___cuttingPositioner) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnlockTrailStation, ___gap) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnlockTrailStation, ___startPosition) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnlockTrailStation, ___peckTween) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnlockTrailStation, ___plates) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnlockTrailStation, ___targetPlate) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnlockTrailStation, ____plateInitialRotations) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnlockTrailStation) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
