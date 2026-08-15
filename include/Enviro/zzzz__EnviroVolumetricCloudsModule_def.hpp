#pragma once
// IWYU pragma private; include "Enviro/EnviroVolumetricCloudsModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroVolumetricCloudsModule)
namespace Enviro {
class EnviroCloudGlobalSettings;
}
namespace Enviro {
class EnviroCloudLayerSettings;
}
namespace Enviro {
class EnviroQuality;
}
namespace Enviro {
class EnviroURPRenderGraph;
}
namespace Enviro {
class EnviroURPRenderPass;
}
namespace Enviro {
class EnviroVolumetricCloudRenderer;
}
namespace Enviro {
class EnviroVolumetricCloudsQuality;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalResourceData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2DArray;
}
// Forward declare root types
namespace Enviro {
class EnviroVolumetricCloudsModule;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroVolumetricCloudsModule*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroVolumetricCloudsModule*, "Enviro", "EnviroVolumetricCloudsModule");
// Dependencies EnviroModule, UnityEngine.Rendering.RenderGraphModule.TextureDesc, UnityEngine.Vector3
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroVolumetricCloudsModule
class CORDL_TYPE EnviroVolumetricCloudsModule : public ::GlobalNamespace::EnviroModule {
public:
// Declarations
/// @brief Field blackArray, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_blackArray, put=__cordl_internal_set_blackArray)) ::UnityW<::UnityEngine::Texture2DArray>  blackArray;

/// @brief Field cloudAnimLayer1, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_cloudAnimLayer1, put=__cordl_internal_set_cloudAnimLayer1)) ::UnityEngine::Vector3  cloudAnimLayer1;

/// @brief Field cloudAnimLayer2, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_cloudAnimLayer2, put=__cordl_internal_set_cloudAnimLayer2)) ::UnityEngine::Vector3  cloudAnimLayer2;

/// @brief Field cloudAnimNonScaledLayer1, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_cloudAnimNonScaledLayer1, put=__cordl_internal_set_cloudAnimNonScaledLayer1)) ::UnityEngine::Vector3  cloudAnimNonScaledLayer1;

/// @brief Field cloudAnimNonScaledLayer2, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get_cloudAnimNonScaledLayer2, put=__cordl_internal_set_cloudAnimNonScaledLayer2)) ::UnityEngine::Vector3  cloudAnimNonScaledLayer2;

/// @brief Field cloudsDescriptor, offset 0xb0, size 0x80 
 __declspec(property(get=__cordl_internal_get_cloudsDescriptor, put=__cordl_internal_set_cloudsDescriptor)) ::UnityEngine::Rendering::RenderGraphModule::TextureDesc  cloudsDescriptor;

/// @brief Field dirLight, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_dirLight, put=__cordl_internal_set_dirLight)) ::UnityW<::UnityEngine::Light>  dirLight;

/// @brief Field lastOffset, offset 0x98, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastOffset, put=__cordl_internal_set_lastOffset)) ::UnityEngine::Vector3  lastOffset;

/// @brief Field preset, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityW<::Enviro::EnviroVolumetricCloudsModule>  preset;

/// @brief Field settingsGlobal, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsGlobal, put=__cordl_internal_set_settingsGlobal)) ::Enviro::EnviroCloudGlobalSettings*  settingsGlobal;

/// @brief Field settingsQuality, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsQuality, put=__cordl_internal_set_settingsQuality)) ::Enviro::EnviroVolumetricCloudsQuality*  settingsQuality;

/// @brief Field settingsVolume, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsVolume, put=__cordl_internal_set_settingsVolume)) ::Enviro::EnviroCloudLayerSettings*  settingsVolume;

/// @brief Field showCoverageControls, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_showCoverageControls, put=__cordl_internal_set_showCoverageControls)) bool  showCoverageControls;

/// @brief Field showDensityControls, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_showDensityControls, put=__cordl_internal_set_showDensityControls)) bool  showDensityControls;

/// @brief Field showGlobalControls, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_showGlobalControls, put=__cordl_internal_set_showGlobalControls)) bool  showGlobalControls;

/// @brief Field showLightingControls, offset 0x43, size 0x1 
 __declspec(property(get=__cordl_internal_get_showLightingControls, put=__cordl_internal_set_showLightingControls)) bool  showLightingControls;

/// @brief Field showTextureControls, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_showTextureControls, put=__cordl_internal_set_showTextureControls)) bool  showTextureControls;

/// @brief Field showVolumeSettings, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_showVolumeSettings, put=__cordl_internal_set_showVolumeSettings)) bool  showVolumeSettings;

/// @brief Field showWindControls, offset 0x46, size 0x1 
 __declspec(property(get=__cordl_internal_get_showWindControls, put=__cordl_internal_set_showWindControls)) bool  showWindControls;

/// @brief Field weatherMap, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_weatherMap, put=__cordl_internal_set_weatherMap)) ::UnityW<::UnityEngine::RenderTexture>  weatherMap;

/// @brief Field weatherMapCS, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_weatherMapCS, put=__cordl_internal_set_weatherMapCS)) ::UnityW<::UnityEngine::ComputeShader>  weatherMapCS;

/// @brief Field weatherMapMat, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_weatherMapMat, put=__cordl_internal_set_weatherMapMat)) ::UnityW<::UnityEngine::Material>  weatherMapMat;

/// @brief Method CreateBlackArray, addr 0x18061fbe0, size 0x100, virtual false, abstract: false, final false
inline void CreateBlackArray() ;

/// @brief Method CreateRenderTexture, addr 0x18061fce0, size 0x220, virtual false, abstract: false, final false
inline bool CreateRenderTexture(::by_ref<::UnityEngine::RenderTexture*>  texture, int32_t  width, int32_t  height, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::FilterMode  filterMode, ::UnityEngine::RenderTextureDescriptor  dsc) ;

/// @brief Method CreateRenderTexture, addr 0x18061ff00, size 0x1a0, virtual false, abstract: false, final false
inline bool CreateRenderTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>  texture, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::FilterMode  filterMode, ::UnityEngine::Rendering::RenderGraphModule::TextureDesc  dsc) ;

/// @brief Method Disable, addr 0x1806200a0, size 0x60, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x180620100, size 0x10, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method IsURPCompabilityMode, addr 0x180620110, size 0x30, virtual false, abstract: false, final false
inline bool IsURPCompabilityMode() ;

/// @brief Method LoadModuleValues, addr 0x180620140, size 0xa0, virtual false, abstract: false, final false
inline void LoadModuleValues() ;

static inline ::Enviro::EnviroVolumetricCloudsModule* New_ctor() ;

/// @brief Method RenderCloudsShadows, addr 0x180620440, size 0x150, virtual false, abstract: false, final false
inline void RenderCloudsShadows(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  destination, ::Enviro::EnviroVolumetricCloudRenderer*  renderer) ;

/// @brief Method RenderCloudsShadowsURP, addr 0x1806201e0, size 0x260, virtual false, abstract: false, final false
inline void RenderCloudsShadowsURP(::Enviro::EnviroURPRenderPass*  pass, ::UnityEngine::Camera*  cam, ::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::Enviro::EnviroVolumetricCloudRenderer*  renderer) ;

/// @brief Method RenderVolumetricClouds, addr 0x180622950, size 0xb00, virtual false, abstract: false, final false
inline void RenderVolumetricClouds(::UnityEngine::Camera*  cam, ::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  destination, ::Enviro::EnviroVolumetricCloudRenderer*  renderer, ::Enviro::EnviroQuality*  quality) ;

/// @brief Method RenderVolumetricCloudsURP, addr 0x180620590, size 0x13c0, virtual false, abstract: false, final false
inline void RenderVolumetricCloudsURP(::Enviro::EnviroURPRenderGraph*  pass, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData*  resourceData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  src, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  target, ::Enviro::EnviroVolumetricCloudRenderer*  renderer, ::Enviro::EnviroQuality*  quality) ;

/// @brief Method RenderVolumetricCloudsURP, addr 0x180621950, size 0x1000, virtual false, abstract: false, final false
inline void RenderVolumetricCloudsURP(::UnityEngine::Rendering::Universal::RenderingData  renderingData, ::Enviro::EnviroURPRenderPass*  pass, ::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::Enviro::EnviroVolumetricCloudRenderer*  renderer, ::Enviro::EnviroQuality*  quality) ;

/// @brief Method RenderWeatherMap, addr 0x180623450, size 0x360, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> RenderWeatherMap() ;

/// @brief Method SaveModuleValues, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SaveModuleValues() ;

/// @brief Method SaveModuleValues, addr 0x1806237b0, size 0x80, virtual false, abstract: false, final false
inline void SaveModuleValues(::Enviro::EnviroVolumetricCloudsModule*  _cordl_module) ;

/// @brief Method SetBlendShader, addr 0x180623830, size 0x620, virtual false, abstract: false, final false
inline void SetBlendShader(::UnityEngine::Camera*  cam, ::Enviro::EnviroVolumetricCloudRenderer*  renderer) ;

/// @brief Method SetDepthBlending, addr 0x180623e50, size 0x60, virtual false, abstract: false, final false
inline void SetDepthBlending(::UnityEngine::Material*  mat) ;

/// @brief Method SetRaymarchShader, addr 0x180623eb0, size 0x1220, virtual false, abstract: false, final false
inline void SetRaymarchShader(::UnityEngine::Camera*  cam, ::Enviro::EnviroVolumetricCloudRenderer*  renderer, ::Enviro::EnviroQuality*  quality) ;

/// @brief Method SetReprojectShader, addr 0x1806250d0, size 0x5f0, virtual false, abstract: false, final false
inline void SetReprojectShader(::UnityEngine::Camera*  cam, ::Enviro::EnviroVolumetricCloudRenderer*  renderer, ::Enviro::EnviroQuality*  quality) ;

/// @brief Method SetToURP, addr 0x1806256c0, size 0x30, virtual false, abstract: false, final false
inline void SetToURP(::UnityEngine::Material*  mat) ;

/// @brief Method UpdateModule, addr 0x1806256f0, size 0x80, virtual true, abstract: false, final false
inline void UpdateModule() ;

/// @brief Method UpdateWind, addr 0x180625770, size 0x6a0, virtual false, abstract: false, final false
inline void UpdateWind() ;

constexpr ::UnityW<::UnityEngine::Texture2DArray> const& __cordl_internal_get_blackArray() const;

constexpr ::UnityW<::UnityEngine::Texture2DArray>& __cordl_internal_get_blackArray() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cloudAnimLayer1() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cloudAnimLayer1() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cloudAnimLayer2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cloudAnimLayer2() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cloudAnimNonScaledLayer1() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cloudAnimNonScaledLayer1() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cloudAnimNonScaledLayer2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cloudAnimNonScaledLayer2() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureDesc const& __cordl_internal_get_cloudsDescriptor() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureDesc& __cordl_internal_get_cloudsDescriptor() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_dirLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_dirLight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastOffset() ;

constexpr ::UnityW<::Enviro::EnviroVolumetricCloudsModule> const& __cordl_internal_get_preset() const;

constexpr ::UnityW<::Enviro::EnviroVolumetricCloudsModule>& __cordl_internal_get_preset() ;

constexpr ::Enviro::EnviroCloudGlobalSettings* const& __cordl_internal_get_settingsGlobal() const;

constexpr ::Enviro::EnviroCloudGlobalSettings*& __cordl_internal_get_settingsGlobal() ;

constexpr ::Enviro::EnviroVolumetricCloudsQuality* const& __cordl_internal_get_settingsQuality() const;

constexpr ::Enviro::EnviroVolumetricCloudsQuality*& __cordl_internal_get_settingsQuality() ;

constexpr ::Enviro::EnviroCloudLayerSettings* const& __cordl_internal_get_settingsVolume() const;

constexpr ::Enviro::EnviroCloudLayerSettings*& __cordl_internal_get_settingsVolume() ;

constexpr bool const& __cordl_internal_get_showCoverageControls() const;

constexpr bool& __cordl_internal_get_showCoverageControls() ;

constexpr bool const& __cordl_internal_get_showDensityControls() const;

constexpr bool& __cordl_internal_get_showDensityControls() ;

constexpr bool const& __cordl_internal_get_showGlobalControls() const;

constexpr bool& __cordl_internal_get_showGlobalControls() ;

constexpr bool const& __cordl_internal_get_showLightingControls() const;

constexpr bool& __cordl_internal_get_showLightingControls() ;

constexpr bool const& __cordl_internal_get_showTextureControls() const;

constexpr bool& __cordl_internal_get_showTextureControls() ;

constexpr bool const& __cordl_internal_get_showVolumeSettings() const;

constexpr bool& __cordl_internal_get_showVolumeSettings() ;

constexpr bool const& __cordl_internal_get_showWindControls() const;

constexpr bool& __cordl_internal_get_showWindControls() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_weatherMap() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_weatherMap() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_weatherMapCS() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_weatherMapCS() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_weatherMapMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_weatherMapMat() ;

constexpr void __cordl_internal_set_blackArray(::UnityW<::UnityEngine::Texture2DArray>  value) ;

constexpr void __cordl_internal_set_cloudAnimLayer1(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_cloudAnimLayer2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_cloudAnimNonScaledLayer1(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_cloudAnimNonScaledLayer2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_cloudsDescriptor(::UnityEngine::Rendering::RenderGraphModule::TextureDesc  value) ;

constexpr void __cordl_internal_set_dirLight(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set_lastOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_preset(::UnityW<::Enviro::EnviroVolumetricCloudsModule>  value) ;

constexpr void __cordl_internal_set_settingsGlobal(::Enviro::EnviroCloudGlobalSettings*  value) ;

constexpr void __cordl_internal_set_settingsQuality(::Enviro::EnviroVolumetricCloudsQuality*  value) ;

constexpr void __cordl_internal_set_settingsVolume(::Enviro::EnviroCloudLayerSettings*  value) ;

constexpr void __cordl_internal_set_showCoverageControls(bool  value) ;

constexpr void __cordl_internal_set_showDensityControls(bool  value) ;

constexpr void __cordl_internal_set_showGlobalControls(bool  value) ;

constexpr void __cordl_internal_set_showLightingControls(bool  value) ;

constexpr void __cordl_internal_set_showTextureControls(bool  value) ;

constexpr void __cordl_internal_set_showVolumeSettings(bool  value) ;

constexpr void __cordl_internal_set_showWindControls(bool  value) ;

constexpr void __cordl_internal_set_weatherMap(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_weatherMapCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_weatherMapMat(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x180625e10, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroVolumetricCloudsModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroVolumetricCloudsModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroVolumetricCloudsModule(EnviroVolumetricCloudsModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroVolumetricCloudsModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroVolumetricCloudsModule(EnviroVolumetricCloudsModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18505};

/// @brief Field settingsVolume, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroCloudLayerSettings*  ___settingsVolume;

/// @brief Field settingsGlobal, offset: 0x28, size: 0x8, def value: None
 ::Enviro::EnviroCloudGlobalSettings*  ___settingsGlobal;

/// @brief Field settingsQuality, offset: 0x30, size: 0x8, def value: None
 ::Enviro::EnviroVolumetricCloudsQuality*  ___settingsQuality;

/// @brief Field preset, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroVolumetricCloudsModule>  ___preset;

/// @brief Field showGlobalControls, offset: 0x40, size: 0x1, def value: None
 bool  ___showGlobalControls;

/// @brief Field showVolumeSettings, offset: 0x41, size: 0x1, def value: None
 bool  ___showVolumeSettings;

/// @brief Field showCoverageControls, offset: 0x42, size: 0x1, def value: None
 bool  ___showCoverageControls;

/// @brief Field showLightingControls, offset: 0x43, size: 0x1, def value: None
 bool  ___showLightingControls;

/// @brief Field showDensityControls, offset: 0x44, size: 0x1, def value: None
 bool  ___showDensityControls;

/// @brief Field showTextureControls, offset: 0x45, size: 0x1, def value: None
 bool  ___showTextureControls;

/// @brief Field showWindControls, offset: 0x46, size: 0x1, def value: None
 bool  ___showWindControls;

/// @brief Field cloudAnimLayer1, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cloudAnimLayer1;

/// @brief Field cloudAnimLayer2, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cloudAnimLayer2;

/// @brief Field cloudAnimNonScaledLayer1, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cloudAnimNonScaledLayer1;

/// @brief Field cloudAnimNonScaledLayer2, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cloudAnimNonScaledLayer2;

/// @brief Field weatherMap, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___weatherMap;

/// @brief Field weatherMapMat, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___weatherMapMat;

/// @brief Field weatherMapCS, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___weatherMapCS;

/// @brief Field dirLight, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___dirLight;

/// @brief Field lastOffset, offset: 0x98, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastOffset;

/// @brief Field blackArray, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2DArray>  ___blackArray;

/// @brief Field cloudsDescriptor, offset: 0xb0, size: 0x80, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureDesc  ___cloudsDescriptor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___settingsVolume) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___settingsGlobal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___settingsQuality) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___preset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___showGlobalControls) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___showVolumeSettings) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___showCoverageControls) == 0x42, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___showLightingControls) == 0x43, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___showDensityControls) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___showTextureControls) == 0x45, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___showWindControls) == 0x46, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___cloudAnimLayer1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___cloudAnimLayer2) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___cloudAnimNonScaledLayer1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___cloudAnimNonScaledLayer2) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___weatherMap) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___weatherMapMat) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___weatherMapCS) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___dirLight) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___lastOffset) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___blackArray) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroVolumetricCloudsModule, ___cloudsDescriptor) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroVolumetricCloudsModule) == 0x130, "Size mismatch!");

} // namespace end def Enviro
