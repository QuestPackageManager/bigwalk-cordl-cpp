#pragma once
// IWYU pragma private; include "GlobalNamespace/HouseLightManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HouseLightManager)
namespace GlobalNamespace {
struct HouseLightManager_LightData;
}
namespace GlobalNamespace {
class HouseLightManager_QualityLevel;
}
namespace GlobalNamespace {
class HouseLightManager___c;
}
namespace GlobalNamespace {
class HouseLight;
}
namespace GlobalNamespace {
class LightQualityData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HouseLightManager;
}
namespace GlobalNamespace {
class HouseLightManager_QualityLevel;
}
namespace GlobalNamespace {
class HouseLightManager___c;
}
namespace GlobalNamespace {
struct HouseLightManager_LightData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HouseLightManager*);
MARK_REF_T(::GlobalNamespace::HouseLightManager_QualityLevel*);
MARK_REF_T(::GlobalNamespace::HouseLightManager___c*);
MARK_VAL_T(::GlobalNamespace::HouseLightManager_LightData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseLightManager*, "", "HouseLightManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseLightManager_QualityLevel*, "", "HouseLightManager/QualityLevel");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseLightManager___c*, "", "HouseLightManager/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseLightManager_LightData, "", "HouseLightManager/LightData");
// Dependencies Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: HouseLightManager/LightData
struct CORDL_TYPE HouseLightManager_LightData {
public:
// Declarations
/// @brief Method AdjustFieldOfView, addr 0x1803ec580, size 0x40, virtual false, abstract: false, final false
inline float_t AdjustFieldOfView(float_t  fieldOfView) ;

/// @brief Method GetMinCoverage, addr 0x1803ec5c0, size 0x40, virtual false, abstract: false, final false
inline float_t GetMinCoverage(float_t  qualityMultiplier, float_t  defaultCullingCoverage) ;

/// @brief Method GetSize, addr 0x1803ec600, size 0x70, virtual false, abstract: false, final false
inline float_t GetSize() ;

/// @brief Method GetSize, addr 0x1803ec670, size 0x50, virtual false, abstract: false, final false
static inline float_t GetSize(::UnityEngine::Light*  light) ;

/// @brief Method .ctor, addr 0x1803ec6c0, size 0x160, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::HouseLight*  houseLight) ;

// Ctor Parameters []
// @brief default ctor
constexpr HouseLightManager_LightData() ;

// Ctor Parameters [CppParam { name: "houseLight", ty: "::UnityW<::GlobalNamespace::HouseLight>", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "size", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "staticPosition", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "staticLightValues", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "skipLowerQualityCulling", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "minCoverage", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "coverage", ty: "float_t", modifiers: "", def_value: None }]
constexpr HouseLightManager_LightData(::UnityW<::GlobalNamespace::HouseLight>  houseLight, ::UnityW<::UnityEngine::Transform>  transform, float_t  size, bool  staticPosition, bool  staticLightValues, ::Unity::Mathematics::float3  position, bool  enabled, bool  skipLowerQualityCulling, float_t  minCoverage, float_t  coverage) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4980};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field houseLight, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HouseLight>  houseLight;

/// @brief Field transform, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Field size, offset: 0x10, size: 0x4, def value: None
 float_t  size;

/// @brief Field staticPosition, offset: 0x14, size: 0x1, def value: None
 bool  staticPosition;

/// @brief Field staticLightValues, offset: 0x15, size: 0x1, def value: None
 bool  staticLightValues;

/// @brief Field position, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::float3  position;

/// @brief Field enabled, offset: 0x24, size: 0x1, def value: None
 bool  enabled;

/// @brief Field skipLowerQualityCulling, offset: 0x25, size: 0x1, def value: None
 bool  skipLowerQualityCulling;

/// @brief Field minCoverage, offset: 0x28, size: 0x4, def value: None
 float_t  minCoverage;

/// @brief Field coverage, offset: 0x2c, size: 0x4, def value: None
 float_t  coverage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseLightManager_LightData, houseLight) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager_LightData, transform) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager_LightData, size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager_LightData, staticPosition) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager_LightData, staticLightValues) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager_LightData, position) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager_LightData, enabled) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager_LightData, skipLowerQualityCulling) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager_LightData, minCoverage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager_LightData, coverage) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseLightManager_LightData) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HouseLightManager/QualityLevel
class CORDL_TYPE HouseLightManager_QualityLevel : public ::System::Object {
public:
// Declarations
/// @brief Field coverageMultiplier, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_coverageMultiplier, put=__cordl_internal_set_coverageMultiplier)) float_t  coverageMultiplier;

static inline ::GlobalNamespace::HouseLightManager_QualityLevel* New_ctor() ;

constexpr float_t const& __cordl_internal_get_coverageMultiplier() const;

constexpr float_t& __cordl_internal_get_coverageMultiplier() ;

constexpr void __cordl_internal_set_coverageMultiplier(float_t  value) ;

/// @brief Method .ctor, addr 0x1803eeeb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseLightManager_QualityLevel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseLightManager_QualityLevel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseLightManager_QualityLevel(HouseLightManager_QualityLevel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseLightManager_QualityLevel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseLightManager_QualityLevel(HouseLightManager_QualityLevel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4981};

/// @brief Field coverageMultiplier, offset: 0x10, size: 0x4, def value: None
 float_t  ___coverageMultiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseLightManager_QualityLevel, ___coverageMultiplier) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseLightManager_QualityLevel) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HouseLightManager/<>c
class CORDL_TYPE HouseLightManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::HouseLightManager___c*  __9;

/// @brief Field <>9__19_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_0, put=setStaticF___9__19_0)) ::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>*  __9__19_0;

static inline ::GlobalNamespace::HouseLightManager___c* New_ctor() ;

/// @brief Method <.ctor>b__19_0, addr 0x1803f2640, size 0x20, virtual false, abstract: false, final false
inline int32_t __ctor_b__19_0(::GlobalNamespace::HouseLightManager_LightData  a, ::GlobalNamespace::HouseLightManager_LightData  b) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::HouseLightManager___c* getStaticF___9() ;

static inline ::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>* getStaticF___9__19_0() ;

static inline void setStaticF___9(::GlobalNamespace::HouseLightManager___c*  value) ;

static inline void setStaticF___9__19_0(::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseLightManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseLightManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseLightManager___c(HouseLightManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseLightManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseLightManager___c(HouseLightManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4982};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HouseLightManager___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies HouseLightManager::QualityLevel, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HouseLightManager
class CORDL_TYPE HouseLightManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LightData = ::GlobalNamespace::HouseLightManager_LightData;

using QualityLevel = ::GlobalNamespace::HouseLightManager_QualityLevel;

using __c = ::GlobalNamespace::HouseLightManager___c;

/// @brief Field _lightDatas, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__lightDatas, put=setStaticF__lightDatas)) ::System::Collections::Generic::List_1<::GlobalNamespace::HouseLightManager_LightData>*  _lightDatas;

/// @brief Field _qualityCoverageMultiplier, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__qualityCoverageMultiplier, put=__cordl_internal_set__qualityCoverageMultiplier)) float_t  _qualityCoverageMultiplier;

/// @brief Field _visibilityComparison, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__visibilityComparison, put=__cordl_internal_set__visibilityComparison)) ::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>*  _visibilityComparison;

/// @brief Field defaultCullingCoverage, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultCullingCoverage, put=__cordl_internal_set_defaultCullingCoverage)) float_t  defaultCullingCoverage;

/// @brief Field defaultLightQualityData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultLightQualityData, put=__cordl_internal_set_defaultLightQualityData)) ::UnityW<::GlobalNamespace::LightQualityData>  defaultLightQualityData;

/// @brief Field logCounts, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_logCounts, put=__cordl_internal_set_logCounts)) bool  logCounts;

/// @brief Field maxLightLimit, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLightLimit, put=__cordl_internal_set_maxLightLimit)) int32_t  maxLightLimit;

/// @brief Field qualityLevels, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_qualityLevels, put=__cordl_internal_set_qualityLevels)) ::ArrayW<::GlobalNamespace::HouseLightManager_QualityLevel*>  qualityLevels;

/// @brief Field skipCoverageCulling, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_skipCoverageCulling, put=__cordl_internal_set_skipCoverageCulling)) bool  skipCoverageCulling;

/// @brief Method AddLight, addr 0x1803e9e80, size 0x150, virtual false, abstract: false, final false
static inline void AddLight(::GlobalNamespace::HouseLight*  houseLight) ;

/// @brief Method ApplyQualityEffects, addr 0x1803e9fd0, size 0xb0, virtual false, abstract: false, final false
inline void ApplyQualityEffects(int32_t  qualityLevel) ;

/// @brief Method GetScreenCoverage, addr 0x1803ea080, size 0xb0, virtual false, abstract: false, final false
static inline float_t GetScreenCoverage(::Unity::Mathematics::float3  cameraPosition, ::Unity::Mathematics::float3  lightPosition, float_t  fieldOfView, float_t  lightSize) ;

static inline ::GlobalNamespace::HouseLightManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803ea130, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803ea220, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveLight, addr 0x1803ea310, size 0xb0, virtual false, abstract: false, final false
static inline void RemoveLight(::GlobalNamespace::HouseLight*  houseLight) ;

/// @brief Method Start, addr 0x1803ea3c0, size 0xc0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1803ea480, size 0x590, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__qualityCoverageMultiplier() const;

constexpr float_t& __cordl_internal_get__qualityCoverageMultiplier() ;

constexpr ::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>* const& __cordl_internal_get__visibilityComparison() const;

constexpr ::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>*& __cordl_internal_get__visibilityComparison() ;

constexpr float_t const& __cordl_internal_get_defaultCullingCoverage() const;

constexpr float_t& __cordl_internal_get_defaultCullingCoverage() ;

constexpr ::UnityW<::GlobalNamespace::LightQualityData> const& __cordl_internal_get_defaultLightQualityData() const;

constexpr ::UnityW<::GlobalNamespace::LightQualityData>& __cordl_internal_get_defaultLightQualityData() ;

constexpr bool const& __cordl_internal_get_logCounts() const;

constexpr bool& __cordl_internal_get_logCounts() ;

constexpr int32_t const& __cordl_internal_get_maxLightLimit() const;

constexpr int32_t& __cordl_internal_get_maxLightLimit() ;

constexpr ::ArrayW<::GlobalNamespace::HouseLightManager_QualityLevel*> const& __cordl_internal_get_qualityLevels() const;

constexpr ::ArrayW<::GlobalNamespace::HouseLightManager_QualityLevel*>& __cordl_internal_get_qualityLevels() ;

constexpr bool const& __cordl_internal_get_skipCoverageCulling() const;

constexpr bool& __cordl_internal_get_skipCoverageCulling() ;

constexpr void __cordl_internal_set__qualityCoverageMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__visibilityComparison(::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>*  value) ;

constexpr void __cordl_internal_set_defaultCullingCoverage(float_t  value) ;

constexpr void __cordl_internal_set_defaultLightQualityData(::UnityW<::GlobalNamespace::LightQualityData>  value) ;

constexpr void __cordl_internal_set_logCounts(bool  value) ;

constexpr void __cordl_internal_set_maxLightLimit(int32_t  value) ;

constexpr void __cordl_internal_set_qualityLevels(::ArrayW<::GlobalNamespace::HouseLightManager_QualityLevel*>  value) ;

constexpr void __cordl_internal_set_skipCoverageCulling(bool  value) ;

/// @brief Method .ctor, addr 0x1803eaa10, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::HouseLightManager_LightData>* getStaticF__lightDatas() ;

static inline void setStaticF__lightDatas(::System::Collections::Generic::List_1<::GlobalNamespace::HouseLightManager_LightData>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseLightManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseLightManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseLightManager(HouseLightManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseLightManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseLightManager(HouseLightManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4983};

/// @brief Field maxLightLimit, offset: 0x20, size: 0x4, def value: None
 int32_t  ___maxLightLimit;

/// @brief Field qualityLevels, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::HouseLightManager_QualityLevel*>  ___qualityLevels;

/// @brief Field defaultLightQualityData, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LightQualityData>  ___defaultLightQualityData;

/// @brief Field _qualityCoverageMultiplier, offset: 0x38, size: 0x4, def value: None
 float_t  ____qualityCoverageMultiplier;

/// @brief Field defaultCullingCoverage, offset: 0x3c, size: 0x4, def value: None
 float_t  ___defaultCullingCoverage;

/// @brief Field skipCoverageCulling, offset: 0x40, size: 0x1, def value: None
 bool  ___skipCoverageCulling;

/// @brief Field logCounts, offset: 0x41, size: 0x1, def value: None
 bool  ___logCounts;

/// @brief Field _visibilityComparison, offset: 0x48, size: 0x8, def value: None
 ::System::Comparison_1<::GlobalNamespace::HouseLightManager_LightData>*  ____visibilityComparison;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseLightManager, ___maxLightLimit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager, ___qualityLevels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager, ___defaultLightQualityData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager, ____qualityCoverageMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager, ___defaultCullingCoverage) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager, ___skipCoverageCulling) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager, ___logCounts) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseLightManager, ____visibilityComparison) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseLightManager) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
