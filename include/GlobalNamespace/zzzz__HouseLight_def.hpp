#pragma once
// IWYU pragma private; include "GlobalNamespace/HouseLight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HouseCulling/zzzz__CullingState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HouseLight)
namespace GlobalNamespace {
class LightQualityData;
}
namespace HouseCulling {
struct CullingState;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace GlobalNamespace {
class HouseLight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HouseLight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseLight*, "", "HouseLight");
// Dependencies HouseCulling.CullingState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HouseLight
class CORDL_TYPE HouseLight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _houseCullingState, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__houseCullingState, put=__cordl_internal_set__houseCullingState)) ::HouseCulling::CullingState  _houseCullingState;

/// @brief Field _isEnabledAndUnculled, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__isEnabledAndUnculled, put=__cordl_internal_set__isEnabledAndUnculled)) bool  _isEnabledAndUnculled;

/// @brief Field customQualityData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_customQualityData, put=__cordl_internal_set_customQualityData)) ::UnityW<::GlobalNamespace::LightQualityData>  customQualityData;

 __declspec(property(get=get_houseCullingState, put=set_houseCullingState)) ::HouseCulling::CullingState  houseCullingState;

/// @brief Field lightComponent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightComponent, put=__cordl_internal_set_lightComponent)) ::UnityW<::UnityEngine::Light>  lightComponent;

/// @brief Field minCoverage, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minCoverage, put=__cordl_internal_set_minCoverage)) float_t  minCoverage;

/// @brief Field skipLowerQualityCulling, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_skipLowerQualityCulling, put=__cordl_internal_set_skipLowerQualityCulling)) bool  skipLowerQualityCulling;

/// @brief Field staticLightValues, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_staticLightValues, put=__cordl_internal_set_staticLightValues)) bool  staticLightValues;

/// @brief Field staticPosition, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_staticPosition, put=__cordl_internal_set_staticPosition)) bool  staticPosition;

/// @brief Method ApplyQualityData, addr 0x1803eaae0, size 0x140, virtual false, abstract: false, final false
inline void ApplyQualityData() ;

/// @brief Method ApplyQualityData, addr 0x1803eac20, size 0x120, virtual false, abstract: false, final false
inline void ApplyQualityData(int32_t  qualityIndex, ::GlobalNamespace::LightQualityData*  defaultQualityData) ;

/// @brief Method AssignLightComponent, addr 0x1803ead40, size 0x50, virtual false, abstract: false, final false
inline void AssignLightComponent() ;

/// @brief Method GetLightEnabled, addr 0x1803ead90, size 0x20, virtual false, abstract: false, final false
inline bool GetLightEnabled() ;

static inline ::GlobalNamespace::HouseLight* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803eadb0, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803eadc0, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshLightState, addr 0x1803eae20, size 0x280, virtual false, abstract: false, final false
inline void RefreshLightState() ;

/// @brief Method SetLightEnabled, addr 0x1803eb0a0, size 0x20, virtual false, abstract: false, final false
inline void SetLightEnabled(bool  value) ;

constexpr ::HouseCulling::CullingState const& __cordl_internal_get__houseCullingState() const;

constexpr ::HouseCulling::CullingState& __cordl_internal_get__houseCullingState() ;

constexpr bool const& __cordl_internal_get__isEnabledAndUnculled() const;

constexpr bool& __cordl_internal_get__isEnabledAndUnculled() ;

constexpr ::UnityW<::GlobalNamespace::LightQualityData> const& __cordl_internal_get_customQualityData() const;

constexpr ::UnityW<::GlobalNamespace::LightQualityData>& __cordl_internal_get_customQualityData() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_lightComponent() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_lightComponent() ;

constexpr float_t const& __cordl_internal_get_minCoverage() const;

constexpr float_t& __cordl_internal_get_minCoverage() ;

constexpr bool const& __cordl_internal_get_skipLowerQualityCulling() const;

constexpr bool& __cordl_internal_get_skipLowerQualityCulling() ;

constexpr bool const& __cordl_internal_get_staticLightValues() const;

constexpr bool& __cordl_internal_get_staticLightValues() ;

constexpr bool const& __cordl_internal_get_staticPosition() const;

constexpr bool& __cordl_internal_get_staticPosition() ;

constexpr void __cordl_internal_set__houseCullingState(::HouseCulling::CullingState  value) ;

constexpr void __cordl_internal_set__isEnabledAndUnculled(bool  value) ;

constexpr void __cordl_internal_set_customQualityData(::UnityW<::GlobalNamespace::LightQualityData>  value) ;

constexpr void __cordl_internal_set_lightComponent(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set_minCoverage(float_t  value) ;

constexpr void __cordl_internal_set_skipLowerQualityCulling(bool  value) ;

constexpr void __cordl_internal_set_staticLightValues(bool  value) ;

constexpr void __cordl_internal_set_staticPosition(bool  value) ;

/// @brief Method .ctor, addr 0x1803eb0c0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_houseCullingState, addr 0x1803eb0e0, size 0x10, virtual false, abstract: false, final false
inline ::HouseCulling::CullingState get_houseCullingState() ;

/// @brief Method set_houseCullingState, addr 0x1803eb0f0, size 0x10, virtual false, abstract: false, final false
inline void set_houseCullingState(::HouseCulling::CullingState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseLight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseLight", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseLight(HouseLight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseLight", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseLight(HouseLight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4979};

/// @brief Field lightComponent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___lightComponent;

/// @brief Field staticPosition, offset: 0x28, size: 0x1, def value: None
 bool  ___staticPosition;

/// @brief Field staticLightValues, offset: 0x29, size: 0x1, def value: None
 bool  ___staticLightValues;

/// @brief Field minCoverage, offset: 0x2c, size: 0x4, def value: None
 float_t  ___minCoverage;

/// @brief Field skipLowerQualityCulling, offset: 0x30, size: 0x1, def value: None
 bool  ___skipLowerQualityCulling;

/// @brief Field customQualityData, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LightQualityData>  ___customQualityData;

/// @brief Field _houseCullingState, offset: 0x40, size: 0x4, def value: None
 ::HouseCulling::CullingState  ____houseCullingState;

/// @brief Field _isEnabledAndUnculled, offset: 0x44, size: 0x1, def value: None
 bool  ____isEnabledAndUnculled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseLight, ___lightComponent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLight, ___staticPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLight, ___staticLightValues) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLight, ___minCoverage) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLight, ___skipLowerQualityCulling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLight, ___customQualityData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLight, ____houseCullingState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLight, ____isEnabledAndUnculled) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseLight) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
