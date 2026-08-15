#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceRenderSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AdaptivePerformanceRenderSettings)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class AdaptivePerformanceRenderSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::AdaptivePerformanceRenderSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::AdaptivePerformanceRenderSettings*, "UnityEngine.AdaptivePerformance", "AdaptivePerformanceRenderSettings");
// Dependencies System.Object
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.AdaptivePerformanceRenderSettings
class CORDL_TYPE AdaptivePerformanceRenderSettings : public ::System::Object {
public:
// Declarations
/// @brief Field <AntiAliasingQualityBias>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AntiAliasingQualityBias_k__BackingField, put=setStaticF__AntiAliasingQualityBias_k__BackingField)) int32_t  _AntiAliasingQualityBias_k__BackingField;

/// @brief Field <LutBias>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LutBias_k__BackingField, put=setStaticF__LutBias_k__BackingField)) float_t  _LutBias_k__BackingField;

/// @brief Field <MainLightShadowCascadesCountBias>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MainLightShadowCascadesCountBias_k__BackingField, put=setStaticF__MainLightShadowCascadesCountBias_k__BackingField)) int32_t  _MainLightShadowCascadesCountBias_k__BackingField;

/// @brief Field <ShadowQualityBias>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ShadowQualityBias_k__BackingField, put=setStaticF__ShadowQualityBias_k__BackingField)) int32_t  _ShadowQualityBias_k__BackingField;

/// @brief Field <SkipDynamicBatching>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__SkipDynamicBatching_k__BackingField, put=setStaticF__SkipDynamicBatching_k__BackingField)) bool  _SkipDynamicBatching_k__BackingField;

/// @brief Field <SkipFrontToBackSorting>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__SkipFrontToBackSorting_k__BackingField, put=setStaticF__SkipFrontToBackSorting_k__BackingField)) bool  _SkipFrontToBackSorting_k__BackingField;

/// @brief Field <SkipTransparentObjects>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__SkipTransparentObjects_k__BackingField, put=setStaticF__SkipTransparentObjects_k__BackingField)) bool  _SkipTransparentObjects_k__BackingField;

/// @brief Field s_DecalsMaxDistance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DecalsMaxDistance, put=setStaticF_s_DecalsMaxDistance)) float_t  s_DecalsMaxDistance;

/// @brief Field s_MaxShadowDistanceMultiplier, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_MaxShadowDistanceMultiplier, put=setStaticF_s_MaxShadowDistanceMultiplier)) float_t  s_MaxShadowDistanceMultiplier;

/// @brief Field s_RenderScaleMultiplier, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_RenderScaleMultiplier, put=setStaticF_s_RenderScaleMultiplier)) float_t  s_RenderScaleMultiplier;

/// @brief Field s_ShadowResolutionMultiplier, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ShadowResolutionMultiplier, put=setStaticF_s_ShadowResolutionMultiplier)) float_t  s_ShadowResolutionMultiplier;

static inline int32_t getStaticF__AntiAliasingQualityBias_k__BackingField() ;

static inline float_t getStaticF__LutBias_k__BackingField() ;

static inline int32_t getStaticF__MainLightShadowCascadesCountBias_k__BackingField() ;

static inline int32_t getStaticF__ShadowQualityBias_k__BackingField() ;

static inline bool getStaticF__SkipDynamicBatching_k__BackingField() ;

static inline bool getStaticF__SkipFrontToBackSorting_k__BackingField() ;

static inline bool getStaticF__SkipTransparentObjects_k__BackingField() ;

static inline float_t getStaticF_s_DecalsMaxDistance() ;

static inline float_t getStaticF_s_MaxShadowDistanceMultiplier() ;

static inline float_t getStaticF_s_RenderScaleMultiplier() ;

static inline float_t getStaticF_s_ShadowResolutionMultiplier() ;

/// @brief Method get_AntiAliasingQualityBias, addr 0x18221d840, size 0x20, virtual false, abstract: false, final false
static inline int32_t get_AntiAliasingQualityBias() ;

/// @brief Method get_DecalsDrawDistance, addr 0x18221d860, size 0x20, virtual false, abstract: false, final false
static inline float_t get_DecalsDrawDistance() ;

/// @brief Method get_LutBias, addr 0x18221d880, size 0x20, virtual false, abstract: false, final false
static inline float_t get_LutBias() ;

/// @brief Method get_MainLightShadowCascadesCountBias, addr 0x18221d8a0, size 0x20, virtual false, abstract: false, final false
static inline int32_t get_MainLightShadowCascadesCountBias() ;

/// @brief Method get_MainLightShadowmapResolutionMultiplier, addr 0x18221d8c0, size 0x20, virtual false, abstract: false, final false
static inline float_t get_MainLightShadowmapResolutionMultiplier() ;

/// @brief Method get_MaxShadowDistanceMultiplier, addr 0x18221d8e0, size 0x20, virtual false, abstract: false, final false
static inline float_t get_MaxShadowDistanceMultiplier() ;

/// @brief Method get_RenderScaleMultiplier, addr 0x18221d900, size 0x20, virtual false, abstract: false, final false
static inline float_t get_RenderScaleMultiplier() ;

/// @brief Method get_ShadowQualityBias, addr 0x18221d920, size 0x20, virtual false, abstract: false, final false
static inline int32_t get_ShadowQualityBias() ;

/// @brief Method get_SkipDynamicBatching, addr 0x18221d940, size 0x20, virtual false, abstract: false, final false
static inline bool get_SkipDynamicBatching() ;

/// @brief Method get_SkipFrontToBackSorting, addr 0x18221d960, size 0x20, virtual false, abstract: false, final false
static inline bool get_SkipFrontToBackSorting() ;

/// @brief Method get_SkipTransparentObjects, addr 0x18221d980, size 0x20, virtual false, abstract: false, final false
static inline bool get_SkipTransparentObjects() ;

static inline void setStaticF__AntiAliasingQualityBias_k__BackingField(int32_t  value) ;

static inline void setStaticF__LutBias_k__BackingField(float_t  value) ;

static inline void setStaticF__MainLightShadowCascadesCountBias_k__BackingField(int32_t  value) ;

static inline void setStaticF__ShadowQualityBias_k__BackingField(int32_t  value) ;

static inline void setStaticF__SkipDynamicBatching_k__BackingField(bool  value) ;

static inline void setStaticF__SkipFrontToBackSorting_k__BackingField(bool  value) ;

static inline void setStaticF__SkipTransparentObjects_k__BackingField(bool  value) ;

static inline void setStaticF_s_DecalsMaxDistance(float_t  value) ;

static inline void setStaticF_s_MaxShadowDistanceMultiplier(float_t  value) ;

static inline void setStaticF_s_RenderScaleMultiplier(float_t  value) ;

static inline void setStaticF_s_ShadowResolutionMultiplier(float_t  value) ;

/// @brief Method set_AntiAliasingQualityBias, addr 0x18221d9a0, size 0x20, virtual false, abstract: false, final false
static inline void set_AntiAliasingQualityBias(int32_t  value) ;

/// @brief Method set_DecalsDrawDistance, addr 0x18221d9c0, size 0x20, virtual false, abstract: false, final false
static inline void set_DecalsDrawDistance(float_t  value) ;

/// @brief Method set_LutBias, addr 0x18221d9e0, size 0x20, virtual false, abstract: false, final false
static inline void set_LutBias(float_t  value) ;

/// @brief Method set_MainLightShadowCascadesCountBias, addr 0x18221da00, size 0x20, virtual false, abstract: false, final false
static inline void set_MainLightShadowCascadesCountBias(int32_t  value) ;

/// @brief Method set_MainLightShadowmapResolutionMultiplier, addr 0x18221da20, size 0x30, virtual false, abstract: false, final false
static inline void set_MainLightShadowmapResolutionMultiplier(float_t  value) ;

/// @brief Method set_MaxShadowDistanceMultiplier, addr 0x18221da50, size 0x30, virtual false, abstract: false, final false
static inline void set_MaxShadowDistanceMultiplier(float_t  value) ;

/// @brief Method set_RenderScaleMultiplier, addr 0x18221da80, size 0x30, virtual false, abstract: false, final false
static inline void set_RenderScaleMultiplier(float_t  value) ;

/// @brief Method set_ShadowQualityBias, addr 0x18221dab0, size 0x20, virtual false, abstract: false, final false
static inline void set_ShadowQualityBias(int32_t  value) ;

/// @brief Method set_SkipDynamicBatching, addr 0x18221dad0, size 0x20, virtual false, abstract: false, final false
static inline void set_SkipDynamicBatching(bool  value) ;

/// @brief Method set_SkipFrontToBackSorting, addr 0x18221daf0, size 0x20, virtual false, abstract: false, final false
static inline void set_SkipFrontToBackSorting(bool  value) ;

/// @brief Method set_SkipTransparentObjects, addr 0x18221db10, size 0x20, virtual false, abstract: false, final false
static inline void set_SkipTransparentObjects(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptivePerformanceRenderSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceRenderSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptivePerformanceRenderSettings(AdaptivePerformanceRenderSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptivePerformanceRenderSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptivePerformanceRenderSettings(AdaptivePerformanceRenderSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19405};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::AdaptivePerformanceRenderSettings) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
