#pragma once
// IWYU pragma private; include "MA/Flora/FloraSceneSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__FloraCullingPipeline_def.hpp"
#include "MA/Flora/zzzz__FloraDetailStreamingMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraSceneSettings)
namespace MA::Flora {
class FloraDensitySettings;
}
namespace MA::Flora {
struct FloraDetailStreamingMode;
}
namespace MA::Flora {
class FloraRenderSettings;
}
namespace MA::Flora {
struct FloraSceneSettings_Version;
}
namespace UnityEngine::Rendering {
class VolumeProfile;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace MA::Flora {
struct FloraSceneSettings_Version;
}
namespace MA::Flora {
class FloraSceneSettings;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraSceneSettings_Version);
MARK_REF_T(::MA::Flora::FloraSceneSettings*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSceneSettings_Version, "MA.Flora", "FloraSceneSettings/Version");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSceneSettings*, "MA.Flora", "FloraSceneSettings");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraSceneSettings/Version
struct CORDL_TYPE FloraSceneSettings_Version {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FloraSceneSettings_Version_Unwrapped
enum struct __FloraSceneSettings_Version_Unwrapped : int32_t {
__E_Initial = static_cast<int32_t>(0x0),
__E_AddedDetailStreamingControls = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FloraSceneSettings_Version_Unwrapped () const noexcept {
return static_cast<__FloraSceneSettings_Version_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FloraSceneSettings_Version() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FloraSceneSettings_Version(int32_t  value__) noexcept;

/// @brief Field AddedDetailStreamingControls value: I32(1)
static ::MA::Flora::FloraSceneSettings_Version const AddedDetailStreamingControls;

/// @brief Field Initial value: I32(0)
static ::MA::Flora::FloraSceneSettings_Version const Initial;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13293};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraSceneSettings_Version, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraSceneSettings_Version) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraCullingPipeline, MA.Flora.FloraDetailStreamingMode, MA.Flora.FloraSceneSettings::Version, UnityEngine.MonoBehaviour
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSceneSettings
class CORDL_TYPE FloraSceneSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Version = ::MA::Flora::FloraSceneSettings_Version;

/// @brief Field AllowAdditionalLightShadows, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowAdditionalLightShadows, put=__cordl_internal_set_AllowAdditionalLightShadows)) bool  AllowAdditionalLightShadows;

/// @brief Field AllowDensityCulling, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowDensityCulling, put=__cordl_internal_set_AllowDensityCulling)) bool  AllowDensityCulling;

/// @brief Field AllowGPUOcclusionCulling, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowGPUOcclusionCulling, put=__cordl_internal_set_AllowGPUOcclusionCulling)) bool  AllowGPUOcclusionCulling;

/// @brief Field AllowLegacyLightProbes, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowLegacyLightProbes, put=__cordl_internal_set_AllowLegacyLightProbes)) bool  AllowLegacyLightProbes;

/// @brief Field AllowPerDetailLightProbes, offset 0x2b, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowPerDetailLightProbes, put=__cordl_internal_set_AllowPerDetailLightProbes)) bool  AllowPerDetailLightProbes;

/// @brief Field AllowPerDetailMotionVectors, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowPerDetailMotionVectors, put=__cordl_internal_set_AllowPerDetailMotionVectors)) bool  AllowPerDetailMotionVectors;

/// @brief Field AllowPerObjectMotionVectors, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowPerObjectMotionVectors, put=__cordl_internal_set_AllowPerObjectMotionVectors)) bool  AllowPerObjectMotionVectors;

/// @brief Field AllowPerTreeLightProbes, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowPerTreeLightProbes, put=__cordl_internal_set_AllowPerTreeLightProbes)) bool  AllowPerTreeLightProbes;

/// @brief Field AllowPerTreeMotionVectors, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowPerTreeMotionVectors, put=__cordl_internal_set_AllowPerTreeMotionVectors)) bool  AllowPerTreeMotionVectors;

/// @brief Field AutoRegisterTerrains, offset 0x27, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoRegisterTerrains, put=__cordl_internal_set_AutoRegisterTerrains)) bool  AutoRegisterTerrains;

/// @brief Field CullingPipelineOverride, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_CullingPipelineOverride, put=__cordl_internal_set_CullingPipelineOverride)) ::MA::Flora::FloraCullingPipeline  CullingPipelineOverride;

/// @brief Field CustomDetailPatchLayerBudgetPerFrame, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_CustomDetailPatchLayerBudgetPerFrame, put=__cordl_internal_set_CustomDetailPatchLayerBudgetPerFrame)) int32_t  CustomDetailPatchLayerBudgetPerFrame;

/// @brief Field CustomDetailStructuralInstanceBudgetPerFrame, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_CustomDetailStructuralInstanceBudgetPerFrame, put=__cordl_internal_set_CustomDetailStructuralInstanceBudgetPerFrame)) int32_t  CustomDetailStructuralInstanceBudgetPerFrame;

/// @brief Field DetailLoadBudgetPerFrame, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_DetailLoadBudgetPerFrame, put=__cordl_internal_set_DetailLoadBudgetPerFrame)) int32_t  DetailLoadBudgetPerFrame;

/// @brief Field DetailStreamingMode, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DetailStreamingMode, put=__cordl_internal_set_DetailStreamingMode)) ::MA::Flora::FloraDetailStreamingMode  DetailStreamingMode;

/// @brief Field DetailStreamingResponsiveness, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_DetailStreamingResponsiveness, put=__cordl_internal_set_DetailStreamingResponsiveness)) float_t  DetailStreamingResponsiveness;

/// @brief Field DetailUnloadBudgetPerFrame, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_DetailUnloadBudgetPerFrame, put=__cordl_internal_set_DetailUnloadBudgetPerFrame)) int32_t  DetailUnloadBudgetPerFrame;

/// @brief Field DetailUnloadDelayFrames, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_DetailUnloadDelayFrames, put=__cordl_internal_set_DetailUnloadDelayFrames)) int32_t  DetailUnloadDelayFrames;

/// @brief Field DetailUnloadHysteresisSeconds, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DetailUnloadHysteresisSeconds, put=__cordl_internal_set_DetailUnloadHysteresisSeconds)) float_t  DetailUnloadHysteresisSeconds;

/// @brief Field EnableRendering, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableRendering, put=__cordl_internal_set_EnableRendering)) bool  EnableRendering;

/// @brief Field EnableTerrainFoliage, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableTerrainFoliage, put=__cordl_internal_set_EnableTerrainFoliage)) bool  EnableTerrainFoliage;

/// @brief Field MainLightOverride, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_MainLightOverride, put=__cordl_internal_set_MainLightOverride)) ::UnityW<::UnityEngine::Light>  MainLightOverride;

/// @brief Field OverrideCullingPipeline, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideCullingPipeline, put=__cordl_internal_set_OverrideCullingPipeline)) bool  OverrideCullingPipeline;

/// @brief Field OverrideTerrainDetailDistance, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideTerrainDetailDistance, put=__cordl_internal_set_OverrideTerrainDetailDistance)) bool  OverrideTerrainDetailDistance;

/// @brief Field OverrideTerrainTreeDistance, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideTerrainTreeDistance, put=__cordl_internal_set_OverrideTerrainTreeDistance)) bool  OverrideTerrainTreeDistance;

/// @brief Field TerrainDetailDistance, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_TerrainDetailDistance, put=__cordl_internal_set_TerrainDetailDistance)) float_t  TerrainDetailDistance;

/// @brief Field TerrainTreeDistance, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_TerrainTreeDistance, put=__cordl_internal_set_TerrainTreeDistance)) float_t  TerrainTreeDistance;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::MA::Flora::FloraSceneSettings>  _Instance_k__BackingField;

/// @brief Field m_NewlyCreated, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_NewlyCreated, put=__cordl_internal_set_m_NewlyCreated)) bool  m_NewlyCreated;

/// @brief Field m_Version, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) ::MA::Flora::FloraSceneSettings_Version  m_Version;

/// @brief Field m_VolumeProfile, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VolumeProfile, put=__cordl_internal_set_m_VolumeProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile>  m_VolumeProfile;

/// @brief Method DecodeResponsiveness, addr 0x1814e7750, size 0x50, virtual false, abstract: false, final false
static inline float_t DecodeResponsiveness(float_t  normalizedBudget) ;

/// @brief Method DeriveDetailStreamingControlsFromLegacy, addr 0x1814e77a0, size 0xf0, virtual false, abstract: false, final false
static inline void DeriveDetailStreamingControlsFromLegacy(int32_t  legacyLoadBudgetPerFrame, int32_t  legacyUnloadBudgetPerFrame, int32_t  legacyUnloadDelayFrames, ::by_ref<::MA::Flora::FloraDetailStreamingMode>  mode, ::by_ref<float_t>  responsiveness, ::by_ref<float_t>  hysteresisSeconds) ;

/// @brief Method GetGlobalDensitySettings, addr 0x1814e7890, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::MA::Flora::FloraDensitySettings> GetGlobalDensitySettings() ;

/// @brief Method GetGlobalRenderSettings, addr 0x1814e78a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::MA::Flora::FloraRenderSettings> GetGlobalRenderSettings() ;

/// @brief Method GetGlobalVolumeSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetGlobalVolumeSettings() ;

/// @brief Method GetOrCreate, addr 0x1814e78b0, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityW<::MA::Flora::FloraSceneSettings> GetOrCreate() ;

/// @brief Method MigrateSettingsIfNeeded, addr 0x1814e79a0, size 0x120, virtual false, abstract: false, final false
inline bool MigrateSettingsIfNeeded() ;

static inline ::MA::Flora::FloraSceneSettings* New_ctor() ;

/// @brief Method OnDisable, addr 0x1814e7ac0, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1814e7b20, size 0x220, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr bool const& __cordl_internal_get_AllowAdditionalLightShadows() const;

constexpr bool& __cordl_internal_get_AllowAdditionalLightShadows() ;

constexpr bool const& __cordl_internal_get_AllowDensityCulling() const;

constexpr bool& __cordl_internal_get_AllowDensityCulling() ;

constexpr bool const& __cordl_internal_get_AllowGPUOcclusionCulling() const;

constexpr bool& __cordl_internal_get_AllowGPUOcclusionCulling() ;

constexpr bool const& __cordl_internal_get_AllowLegacyLightProbes() const;

constexpr bool& __cordl_internal_get_AllowLegacyLightProbes() ;

constexpr bool const& __cordl_internal_get_AllowPerDetailLightProbes() const;

constexpr bool& __cordl_internal_get_AllowPerDetailLightProbes() ;

constexpr bool const& __cordl_internal_get_AllowPerDetailMotionVectors() const;

constexpr bool& __cordl_internal_get_AllowPerDetailMotionVectors() ;

constexpr bool const& __cordl_internal_get_AllowPerObjectMotionVectors() const;

constexpr bool& __cordl_internal_get_AllowPerObjectMotionVectors() ;

constexpr bool const& __cordl_internal_get_AllowPerTreeLightProbes() const;

constexpr bool& __cordl_internal_get_AllowPerTreeLightProbes() ;

constexpr bool const& __cordl_internal_get_AllowPerTreeMotionVectors() const;

constexpr bool& __cordl_internal_get_AllowPerTreeMotionVectors() ;

constexpr bool const& __cordl_internal_get_AutoRegisterTerrains() const;

constexpr bool& __cordl_internal_get_AutoRegisterTerrains() ;

constexpr ::MA::Flora::FloraCullingPipeline const& __cordl_internal_get_CullingPipelineOverride() const;

constexpr ::MA::Flora::FloraCullingPipeline& __cordl_internal_get_CullingPipelineOverride() ;

constexpr int32_t const& __cordl_internal_get_CustomDetailPatchLayerBudgetPerFrame() const;

constexpr int32_t& __cordl_internal_get_CustomDetailPatchLayerBudgetPerFrame() ;

constexpr int32_t const& __cordl_internal_get_CustomDetailStructuralInstanceBudgetPerFrame() const;

constexpr int32_t& __cordl_internal_get_CustomDetailStructuralInstanceBudgetPerFrame() ;

constexpr int32_t const& __cordl_internal_get_DetailLoadBudgetPerFrame() const;

constexpr int32_t& __cordl_internal_get_DetailLoadBudgetPerFrame() ;

constexpr ::MA::Flora::FloraDetailStreamingMode const& __cordl_internal_get_DetailStreamingMode() const;

constexpr ::MA::Flora::FloraDetailStreamingMode& __cordl_internal_get_DetailStreamingMode() ;

constexpr float_t const& __cordl_internal_get_DetailStreamingResponsiveness() const;

constexpr float_t& __cordl_internal_get_DetailStreamingResponsiveness() ;

constexpr int32_t const& __cordl_internal_get_DetailUnloadBudgetPerFrame() const;

constexpr int32_t& __cordl_internal_get_DetailUnloadBudgetPerFrame() ;

constexpr int32_t const& __cordl_internal_get_DetailUnloadDelayFrames() const;

constexpr int32_t& __cordl_internal_get_DetailUnloadDelayFrames() ;

constexpr float_t const& __cordl_internal_get_DetailUnloadHysteresisSeconds() const;

constexpr float_t& __cordl_internal_get_DetailUnloadHysteresisSeconds() ;

constexpr bool const& __cordl_internal_get_EnableRendering() const;

constexpr bool& __cordl_internal_get_EnableRendering() ;

constexpr bool const& __cordl_internal_get_EnableTerrainFoliage() const;

constexpr bool& __cordl_internal_get_EnableTerrainFoliage() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_MainLightOverride() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_MainLightOverride() ;

constexpr bool const& __cordl_internal_get_OverrideCullingPipeline() const;

constexpr bool& __cordl_internal_get_OverrideCullingPipeline() ;

constexpr bool const& __cordl_internal_get_OverrideTerrainDetailDistance() const;

constexpr bool& __cordl_internal_get_OverrideTerrainDetailDistance() ;

constexpr bool const& __cordl_internal_get_OverrideTerrainTreeDistance() const;

constexpr bool& __cordl_internal_get_OverrideTerrainTreeDistance() ;

constexpr float_t const& __cordl_internal_get_TerrainDetailDistance() const;

constexpr float_t& __cordl_internal_get_TerrainDetailDistance() ;

constexpr float_t const& __cordl_internal_get_TerrainTreeDistance() const;

constexpr float_t& __cordl_internal_get_TerrainTreeDistance() ;

constexpr bool const& __cordl_internal_get_m_NewlyCreated() const;

constexpr bool& __cordl_internal_get_m_NewlyCreated() ;

constexpr ::MA::Flora::FloraSceneSettings_Version const& __cordl_internal_get_m_Version() const;

constexpr ::MA::Flora::FloraSceneSettings_Version& __cordl_internal_get_m_Version() ;

constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& __cordl_internal_get_m_VolumeProfile() const;

constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& __cordl_internal_get_m_VolumeProfile() ;

constexpr void __cordl_internal_set_AllowAdditionalLightShadows(bool  value) ;

constexpr void __cordl_internal_set_AllowDensityCulling(bool  value) ;

constexpr void __cordl_internal_set_AllowGPUOcclusionCulling(bool  value) ;

constexpr void __cordl_internal_set_AllowLegacyLightProbes(bool  value) ;

constexpr void __cordl_internal_set_AllowPerDetailLightProbes(bool  value) ;

constexpr void __cordl_internal_set_AllowPerDetailMotionVectors(bool  value) ;

constexpr void __cordl_internal_set_AllowPerObjectMotionVectors(bool  value) ;

constexpr void __cordl_internal_set_AllowPerTreeLightProbes(bool  value) ;

constexpr void __cordl_internal_set_AllowPerTreeMotionVectors(bool  value) ;

constexpr void __cordl_internal_set_AutoRegisterTerrains(bool  value) ;

constexpr void __cordl_internal_set_CullingPipelineOverride(::MA::Flora::FloraCullingPipeline  value) ;

constexpr void __cordl_internal_set_CustomDetailPatchLayerBudgetPerFrame(int32_t  value) ;

constexpr void __cordl_internal_set_CustomDetailStructuralInstanceBudgetPerFrame(int32_t  value) ;

constexpr void __cordl_internal_set_DetailLoadBudgetPerFrame(int32_t  value) ;

constexpr void __cordl_internal_set_DetailStreamingMode(::MA::Flora::FloraDetailStreamingMode  value) ;

constexpr void __cordl_internal_set_DetailStreamingResponsiveness(float_t  value) ;

constexpr void __cordl_internal_set_DetailUnloadBudgetPerFrame(int32_t  value) ;

constexpr void __cordl_internal_set_DetailUnloadDelayFrames(int32_t  value) ;

constexpr void __cordl_internal_set_DetailUnloadHysteresisSeconds(float_t  value) ;

constexpr void __cordl_internal_set_EnableRendering(bool  value) ;

constexpr void __cordl_internal_set_EnableTerrainFoliage(bool  value) ;

constexpr void __cordl_internal_set_MainLightOverride(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set_OverrideCullingPipeline(bool  value) ;

constexpr void __cordl_internal_set_OverrideTerrainDetailDistance(bool  value) ;

constexpr void __cordl_internal_set_OverrideTerrainTreeDistance(bool  value) ;

constexpr void __cordl_internal_set_TerrainDetailDistance(float_t  value) ;

constexpr void __cordl_internal_set_TerrainTreeDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_NewlyCreated(bool  value) ;

constexpr void __cordl_internal_set_m_Version(::MA::Flora::FloraSceneSettings_Version  value) ;

constexpr void __cordl_internal_set_m_VolumeProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile>  value) ;

/// @brief Method .ctor, addr 0x1814e7d40, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::MA::Flora::FloraSceneSettings> getStaticF__Instance_k__BackingField() ;

/// @brief Method get_Instance, addr 0x1814e7da0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::MA::Flora::FloraSceneSettings> get_Instance() ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::MA::Flora::FloraSceneSettings>  value) ;

/// @brief Method set_Instance, addr 0x1814e7dc0, size 0x30, virtual false, abstract: false, final false
static inline void set_Instance(::MA::Flora::FloraSceneSettings*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSceneSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSceneSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSceneSettings(FloraSceneSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSceneSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSceneSettings(FloraSceneSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13294};

/// @brief Field EnableRendering, offset: 0x20, size: 0x1, def value: None
 bool  ___EnableRendering;

/// @brief Field AllowDensityCulling, offset: 0x21, size: 0x1, def value: None
 bool  ___AllowDensityCulling;

/// @brief Field AllowGPUOcclusionCulling, offset: 0x22, size: 0x1, def value: None
 bool  ___AllowGPUOcclusionCulling;

/// @brief Field AllowPerObjectMotionVectors, offset: 0x23, size: 0x1, def value: None
 bool  ___AllowPerObjectMotionVectors;

/// @brief Field AllowLegacyLightProbes, offset: 0x24, size: 0x1, def value: None
 bool  ___AllowLegacyLightProbes;

/// @brief Field AllowAdditionalLightShadows, offset: 0x25, size: 0x1, def value: None
 bool  ___AllowAdditionalLightShadows;

/// @brief Field EnableTerrainFoliage, offset: 0x26, size: 0x1, def value: None
 bool  ___EnableTerrainFoliage;

/// @brief Field AutoRegisterTerrains, offset: 0x27, size: 0x1, def value: None
 bool  ___AutoRegisterTerrains;

/// @brief Field AllowPerTreeMotionVectors, offset: 0x28, size: 0x1, def value: None
 bool  ___AllowPerTreeMotionVectors;

/// @brief Field AllowPerTreeLightProbes, offset: 0x29, size: 0x1, def value: None
 bool  ___AllowPerTreeLightProbes;

/// @brief Field AllowPerDetailMotionVectors, offset: 0x2a, size: 0x1, def value: None
 bool  ___AllowPerDetailMotionVectors;

/// @brief Field AllowPerDetailLightProbes, offset: 0x2b, size: 0x1, def value: None
 bool  ___AllowPerDetailLightProbes;

/// @brief Field DetailStreamingMode, offset: 0x2c, size: 0x4, def value: None
 ::MA::Flora::FloraDetailStreamingMode  ___DetailStreamingMode;

/// @brief Field DetailStreamingResponsiveness, offset: 0x30, size: 0x4, def value: None
 float_t  ___DetailStreamingResponsiveness;

/// @brief Field CustomDetailPatchLayerBudgetPerFrame, offset: 0x34, size: 0x4, def value: None
 int32_t  ___CustomDetailPatchLayerBudgetPerFrame;

/// @brief Field CustomDetailStructuralInstanceBudgetPerFrame, offset: 0x38, size: 0x4, def value: None
 int32_t  ___CustomDetailStructuralInstanceBudgetPerFrame;

/// @brief Field DetailUnloadHysteresisSeconds, offset: 0x3c, size: 0x4, def value: None
 float_t  ___DetailUnloadHysteresisSeconds;

/// @brief Field DetailUnloadDelayFrames, offset: 0x40, size: 0x4, def value: None
 int32_t  ___DetailUnloadDelayFrames;

/// @brief Field DetailUnloadBudgetPerFrame, offset: 0x44, size: 0x4, def value: None
 int32_t  ___DetailUnloadBudgetPerFrame;

/// @brief Field DetailLoadBudgetPerFrame, offset: 0x48, size: 0x4, def value: None
 int32_t  ___DetailLoadBudgetPerFrame;

/// @brief Field OverrideCullingPipeline, offset: 0x4c, size: 0x1, def value: None
 bool  ___OverrideCullingPipeline;

/// @brief Field CullingPipelineOverride, offset: 0x50, size: 0x4, def value: None
 ::MA::Flora::FloraCullingPipeline  ___CullingPipelineOverride;

/// @brief Field MainLightOverride, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___MainLightOverride;

/// @brief Field OverrideTerrainTreeDistance, offset: 0x60, size: 0x1, def value: None
 bool  ___OverrideTerrainTreeDistance;

/// @brief Field TerrainTreeDistance, offset: 0x64, size: 0x4, def value: None
 float_t  ___TerrainTreeDistance;

/// @brief Field OverrideTerrainDetailDistance, offset: 0x68, size: 0x1, def value: None
 bool  ___OverrideTerrainDetailDistance;

/// @brief Field TerrainDetailDistance, offset: 0x6c, size: 0x4, def value: None
 float_t  ___TerrainDetailDistance;

/// @brief Field m_VolumeProfile, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::VolumeProfile>  ___m_VolumeProfile;

/// @brief Field m_NewlyCreated, offset: 0x78, size: 0x1, def value: None
 bool  ___m_NewlyCreated;

/// @brief Field m_Version, offset: 0x7c, size: 0x4, def value: None
 ::MA::Flora::FloraSceneSettings_Version  ___m_Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___EnableRendering) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___AllowDensityCulling) == 0x21, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___AllowGPUOcclusionCulling) == 0x22, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___AllowPerObjectMotionVectors) == 0x23, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___AllowLegacyLightProbes) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___AllowAdditionalLightShadows) == 0x25, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___EnableTerrainFoliage) == 0x26, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___AutoRegisterTerrains) == 0x27, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___AllowPerTreeMotionVectors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___AllowPerTreeLightProbes) == 0x29, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___AllowPerDetailMotionVectors) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___AllowPerDetailLightProbes) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___DetailStreamingMode) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___DetailStreamingResponsiveness) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___CustomDetailPatchLayerBudgetPerFrame) == 0x34, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___CustomDetailStructuralInstanceBudgetPerFrame) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___DetailUnloadHysteresisSeconds) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___DetailUnloadDelayFrames) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___DetailUnloadBudgetPerFrame) == 0x44, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___DetailLoadBudgetPerFrame) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___OverrideCullingPipeline) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___CullingPipelineOverride) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___MainLightOverride) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___OverrideTerrainTreeDistance) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___TerrainTreeDistance) == 0x64, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___OverrideTerrainDetailDistance) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___TerrainDetailDistance) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___m_VolumeProfile) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___m_NewlyCreated) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraSceneSettings, ___m_Version) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraSceneSettings) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
