#pragma once
// IWYU pragma private; include "Enviro/EnviroFogModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(EnviroFogModule)
namespace Enviro {
struct EnviroFogModule_PointLightParams;
}
namespace Enviro {
struct EnviroFogModule_SpotLightParams;
}
namespace Enviro {
class EnviroFogSettings;
}
namespace Enviro {
class EnviroURPRenderGraph;
}
namespace Enviro {
class EnviroURPRenderPass;
}
namespace Enviro {
class EnviroVolumetricFogLight;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
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
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Enviro {
class EnviroFogModule;
}
namespace Enviro {
struct EnviroFogModule_PointLightParams;
}
namespace Enviro {
struct EnviroFogModule_SpotLightParams;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroFogModule*);
MARK_VAL_T(::Enviro::EnviroFogModule_PointLightParams);
MARK_VAL_T(::Enviro::EnviroFogModule_SpotLightParams);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroFogModule*, "Enviro", "EnviroFogModule");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroFogModule_PointLightParams, "Enviro", "EnviroFogModule/PointLightParams");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroFogModule_SpotLightParams, "Enviro", "EnviroFogModule/SpotLightParams");
// Dependencies UnityEngine.Vector3
namespace Enviro {
// Is value type: true
// CS Name: Enviro.EnviroFogModule/PointLightParams
struct CORDL_TYPE EnviroFogModule_PointLightParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EnviroFogModule_PointLightParams() ;

// Ctor Parameters [CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "float_t", modifiers: "", def_value: None }]
constexpr EnviroFogModule_PointLightParams(::UnityEngine::Vector3  pos, float_t  range, ::UnityEngine::Vector3  color, float_t  padding) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18456};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field pos, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  pos;

/// @brief Field range, offset: 0xc, size: 0x4, def value: None
 float_t  range;

/// @brief Field color, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  color;

/// @brief Field padding, offset: 0x1c, size: 0x4, def value: None
 float_t  padding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroFogModule_PointLightParams, pos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule_PointLightParams, range) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule_PointLightParams, color) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule_PointLightParams, padding) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroFogModule_PointLightParams) == 0x20, "Size mismatch!");

} // namespace end def Enviro
// Dependencies UnityEngine.Vector3
namespace Enviro {
// Is value type: true
// CS Name: Enviro.EnviroFogModule/SpotLightParams
struct CORDL_TYPE EnviroFogModule_SpotLightParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EnviroFogModule_SpotLightParams() ;

// Ctor Parameters [CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "lightDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "lightCosHalfAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "float_t", modifiers: "", def_value: None }]
constexpr EnviroFogModule_SpotLightParams(::UnityEngine::Vector3  pos, float_t  range, ::UnityEngine::Vector3  color, ::UnityEngine::Vector3  lightDirection, float_t  lightCosHalfAngle, float_t  padding) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18457};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field pos, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  pos;

/// @brief Field range, offset: 0xc, size: 0x4, def value: None
 float_t  range;

/// @brief Field color, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  color;

/// @brief Field lightDirection, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  lightDirection;

/// @brief Field lightCosHalfAngle, offset: 0x28, size: 0x4, def value: None
 float_t  lightCosHalfAngle;

/// @brief Field padding, offset: 0x2c, size: 0x4, def value: None
 float_t  padding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroFogModule_SpotLightParams, pos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule_SpotLightParams, range) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule_SpotLightParams, color) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule_SpotLightParams, lightDirection) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule_SpotLightParams, lightCosHalfAngle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule_SpotLightParams, padding) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroFogModule_SpotLightParams) == 0x30, "Size mismatch!");

} // namespace end def Enviro
// Dependencies Enviro.EnviroFogModule::PointLightParams, Enviro.EnviroFogModule::SpotLightParams, EnviroModule, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroFogModule
class CORDL_TYPE EnviroFogModule : public ::GlobalNamespace::EnviroModule {
public:
// Declarations
using PointLightParams = ::Enviro::EnviroFogModule_PointLightParams;

using SpotLightParams = ::Enviro::EnviroFogModule_SpotLightParams;

/// @brief Field Settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Settings, put=__cordl_internal_set_Settings)) ::Enviro::EnviroFogSettings*  Settings;

/// @brief Field additionalLight, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_additionalLight, put=__cordl_internal_set_additionalLight)) ::UnityW<::Enviro::EnviroVolumetricFogLight>  additionalLight;

/// @brief Field blitThroughMat, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_blitThroughMat, put=__cordl_internal_set_blitThroughMat)) ::UnityW<::UnityEngine::Material>  blitThroughMat;

/// @brief Field blurMat, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_blurMat, put=__cordl_internal_set_blurMat)) ::UnityW<::UnityEngine::Material>  blurMat;

/// @brief Field blurMat2, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_blurMat2, put=__cordl_internal_set_blurMat2)) ::UnityW<::UnityEngine::Material>  blurMat2;

/// @brief Field customFogDensityModifer, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_customFogDensityModifer, put=__cordl_internal_set_customFogDensityModifer)) float_t  customFogDensityModifer;

/// @brief Field directionaLight, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_directionaLight, put=__cordl_internal_set_directionaLight)) ::UnityW<::Enviro::EnviroVolumetricFogLight>  directionaLight;

/// @brief Field fogLights, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_fogLights, put=__cordl_internal_set_fogLights)) ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroVolumetricFogLight>>*  fogLights;

/// @brief Field fogMat, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_fogMat, put=__cordl_internal_set_fogMat)) ::UnityW<::UnityEngine::Material>  fogMat;

/// @brief Field m_PointLightParams, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PointLightParams, put=__cordl_internal_set_m_PointLightParams)) ::ArrayW<::Enviro::EnviroFogModule_PointLightParams>  m_PointLightParams;

/// @brief Field m_PointLightParamsCB, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PointLightParamsCB, put=__cordl_internal_set_m_PointLightParamsCB)) ::UnityEngine::ComputeBuffer*  m_PointLightParamsCB;

/// @brief Field m_SpotLightParams, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SpotLightParams, put=__cordl_internal_set_m_SpotLightParams)) ::ArrayW<::Enviro::EnviroFogModule_SpotLightParams>  m_SpotLightParams;

/// @brief Field m_SpotLightParamsCB, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SpotLightParamsCB, put=__cordl_internal_set_m_SpotLightParamsCB)) ::UnityEngine::ComputeBuffer*  m_SpotLightParamsCB;

/// @brief Field myLight, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_myLight, put=__cordl_internal_set_myLight)) ::UnityW<::UnityEngine::Light>  myLight;

/// @brief Field preset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityW<::Enviro::EnviroFogModule>  preset;

/// @brief Field showFogControls, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_showFogControls, put=__cordl_internal_set_showFogControls)) bool  showFogControls;

/// @brief Field showUnityFogControls, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_showUnityFogControls, put=__cordl_internal_set_showUnityFogControls)) bool  showUnityFogControls;

/// @brief Field showVolumetricsControls, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_showVolumetricsControls, put=__cordl_internal_set_showVolumetricsControls)) bool  showVolumetricsControls;

/// @brief Field volumetricsMat, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_volumetricsMat, put=__cordl_internal_set_volumetricsMat)) ::UnityW<::UnityEngine::Material>  volumetricsMat;

/// @brief Field volumetricsRenderTexture, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_volumetricsRenderTexture, put=__cordl_internal_set_volumetricsRenderTexture)) ::UnityW<::UnityEngine::RenderTexture>  volumetricsRenderTexture;

/// @brief Field volumetricsRenderTextureHandle, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_volumetricsRenderTextureHandle, put=__cordl_internal_set_volumetricsRenderTextureHandle)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  volumetricsRenderTextureHandle;

/// @brief Field volumetricsRenderTextureRT, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_volumetricsRenderTextureRT, put=__cordl_internal_set_volumetricsRenderTextureRT)) ::UnityEngine::Rendering::RTHandle*  volumetricsRenderTextureRT;

/// @brief Method AddLight, addr 0x18060ebf0, size 0x70, virtual false, abstract: false, final false
inline bool AddLight(::Enviro::EnviroVolumetricFogLight*  light) ;

/// @brief Method CleanupHeightFog, addr 0x18060ec60, size 0x120, virtual false, abstract: false, final false
inline void CleanupHeightFog() ;

/// @brief Method CleanupVolumetrics, addr 0x18060ed80, size 0xc0, virtual false, abstract: false, final false
inline void CleanupVolumetrics() ;

/// @brief Method CreateVolumetricsBuffers, addr 0x18060ee40, size 0x1e0, virtual false, abstract: false, final false
inline void CreateVolumetricsBuffers() ;

/// @brief Method Disable, addr 0x18060f020, size 0x3c0, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x18060f3e0, size 0x210, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method LoadModuleValues, addr 0x18060f5f0, size 0x70, virtual false, abstract: false, final false
inline void LoadModuleValues() ;

static inline ::Enviro::EnviroFogModule* New_ctor() ;

/// @brief Method RemoveLight, addr 0x18060f660, size 0x60, virtual false, abstract: false, final false
inline void RemoveLight(::Enviro::EnviroVolumetricFogLight*  light) ;

/// @brief Method RenderHeightFog, addr 0x18060fab0, size 0xd0, virtual false, abstract: false, final false
inline void RenderHeightFog(::UnityEngine::Camera*  cam, ::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  destination) ;

/// @brief Method RenderHeightFogURP, addr 0x18060f8b0, size 0x200, virtual false, abstract: false, final false
inline void RenderHeightFogURP(::UnityEngine::Camera*  cam, ::Enviro::EnviroURPRenderPass*  pass, ::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination) ;

/// @brief Method RenderHeightFogURP, addr 0x18060f6c0, size 0x1f0, virtual false, abstract: false, final false
inline void RenderHeightFogURP(::Enviro::EnviroURPRenderGraph*  renderer, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData*  resourceData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  src, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  target) ;

/// @brief Method RenderVolumetrics, addr 0x180611e00, size 0x930, virtual false, abstract: false, final false
inline void RenderVolumetrics(::UnityEngine::Camera*  camera, ::UnityEngine::RenderTexture*  source) ;

/// @brief Method RenderVolumetricsURP, addr 0x18060fb80, size 0x15b0, virtual false, abstract: false, final false
inline void RenderVolumetricsURP(::UnityEngine::Camera*  camera, ::Enviro::EnviroURPRenderPass*  pass, ::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source) ;

/// @brief Method RenderVolumetricsURP, addr 0x180611130, size 0xcd0, virtual false, abstract: false, final false
inline void RenderVolumetricsURP(::Enviro::EnviroURPRenderGraph*  renderer, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData*  resourceData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  src) ;

/// @brief Method SaveModuleValues, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SaveModuleValues() ;

/// @brief Method SaveModuleValues, addr 0x180612730, size 0x50, virtual false, abstract: false, final false
inline void SaveModuleValues(::Enviro::EnviroFogModule*  _cordl_module) ;

/// @brief Method SetUpPointLightBuffers, addr 0x180612780, size 0x360, virtual false, abstract: false, final false
inline void SetUpPointLightBuffers() ;

/// @brief Method SetUpSpotLightBuffers, addr 0x180612ae0, size 0x410, virtual false, abstract: false, final false
inline void SetUpSpotLightBuffers() ;

/// @brief Method UpdateFogShader, addr 0x180612ef0, size 0x450, virtual false, abstract: false, final false
inline void UpdateFogShader(::UnityEngine::Camera*  cam) ;

/// @brief Method UpdateModule, addr 0x180613340, size 0x260, virtual true, abstract: false, final false
inline void UpdateModule() ;

/// @brief Method UpdateUnityFog, addr 0x1806135a0, size 0x1b0, virtual false, abstract: false, final false
inline void UpdateUnityFog() ;

/// @brief Method UpdateVolumetricsShader, addr 0x180613750, size 0x4a0, virtual false, abstract: false, final false
inline void UpdateVolumetricsShader(::UnityEngine::Material*  mat) ;

constexpr ::Enviro::EnviroFogSettings* const& __cordl_internal_get_Settings() const;

constexpr ::Enviro::EnviroFogSettings*& __cordl_internal_get_Settings() ;

constexpr ::UnityW<::Enviro::EnviroVolumetricFogLight> const& __cordl_internal_get_additionalLight() const;

constexpr ::UnityW<::Enviro::EnviroVolumetricFogLight>& __cordl_internal_get_additionalLight() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_blitThroughMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_blitThroughMat() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_blurMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_blurMat() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_blurMat2() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_blurMat2() ;

constexpr float_t const& __cordl_internal_get_customFogDensityModifer() const;

constexpr float_t& __cordl_internal_get_customFogDensityModifer() ;

constexpr ::UnityW<::Enviro::EnviroVolumetricFogLight> const& __cordl_internal_get_directionaLight() const;

constexpr ::UnityW<::Enviro::EnviroVolumetricFogLight>& __cordl_internal_get_directionaLight() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroVolumetricFogLight>>* const& __cordl_internal_get_fogLights() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroVolumetricFogLight>>*& __cordl_internal_get_fogLights() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_fogMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_fogMat() ;

constexpr ::ArrayW<::Enviro::EnviroFogModule_PointLightParams> const& __cordl_internal_get_m_PointLightParams() const;

constexpr ::ArrayW<::Enviro::EnviroFogModule_PointLightParams>& __cordl_internal_get_m_PointLightParams() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_PointLightParamsCB() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_PointLightParamsCB() ;

constexpr ::ArrayW<::Enviro::EnviroFogModule_SpotLightParams> const& __cordl_internal_get_m_SpotLightParams() const;

constexpr ::ArrayW<::Enviro::EnviroFogModule_SpotLightParams>& __cordl_internal_get_m_SpotLightParams() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_SpotLightParamsCB() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_SpotLightParamsCB() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_myLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_myLight() ;

constexpr ::UnityW<::Enviro::EnviroFogModule> const& __cordl_internal_get_preset() const;

constexpr ::UnityW<::Enviro::EnviroFogModule>& __cordl_internal_get_preset() ;

constexpr bool const& __cordl_internal_get_showFogControls() const;

constexpr bool& __cordl_internal_get_showFogControls() ;

constexpr bool const& __cordl_internal_get_showUnityFogControls() const;

constexpr bool& __cordl_internal_get_showUnityFogControls() ;

constexpr bool const& __cordl_internal_get_showVolumetricsControls() const;

constexpr bool& __cordl_internal_get_showVolumetricsControls() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_volumetricsMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_volumetricsMat() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_volumetricsRenderTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_volumetricsRenderTexture() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_volumetricsRenderTextureHandle() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_volumetricsRenderTextureHandle() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_volumetricsRenderTextureRT() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_volumetricsRenderTextureRT() ;

constexpr void __cordl_internal_set_Settings(::Enviro::EnviroFogSettings*  value) ;

constexpr void __cordl_internal_set_additionalLight(::UnityW<::Enviro::EnviroVolumetricFogLight>  value) ;

constexpr void __cordl_internal_set_blitThroughMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_blurMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_blurMat2(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_customFogDensityModifer(float_t  value) ;

constexpr void __cordl_internal_set_directionaLight(::UnityW<::Enviro::EnviroVolumetricFogLight>  value) ;

constexpr void __cordl_internal_set_fogLights(::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroVolumetricFogLight>>*  value) ;

constexpr void __cordl_internal_set_fogMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_PointLightParams(::ArrayW<::Enviro::EnviroFogModule_PointLightParams>  value) ;

constexpr void __cordl_internal_set_m_PointLightParamsCB(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_m_SpotLightParams(::ArrayW<::Enviro::EnviroFogModule_SpotLightParams>  value) ;

constexpr void __cordl_internal_set_m_SpotLightParamsCB(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_myLight(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set_preset(::UnityW<::Enviro::EnviroFogModule>  value) ;

constexpr void __cordl_internal_set_showFogControls(bool  value) ;

constexpr void __cordl_internal_set_showUnityFogControls(bool  value) ;

constexpr void __cordl_internal_set_showVolumetricsControls(bool  value) ;

constexpr void __cordl_internal_set_volumetricsMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_volumetricsRenderTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_volumetricsRenderTextureHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_volumetricsRenderTextureRT(::UnityEngine::Rendering::RTHandle*  value) ;

/// @brief Method .ctor, addr 0x180613bf0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroFogModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroFogModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroFogModule(EnviroFogModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroFogModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroFogModule(EnviroFogModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18458};

/// @brief Field Settings, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroFogSettings*  ___Settings;

/// @brief Field preset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroFogModule>  ___preset;

/// @brief Field showFogControls, offset: 0x30, size: 0x1, def value: None
 bool  ___showFogControls;

/// @brief Field showVolumetricsControls, offset: 0x31, size: 0x1, def value: None
 bool  ___showVolumetricsControls;

/// @brief Field showUnityFogControls, offset: 0x32, size: 0x1, def value: None
 bool  ___showUnityFogControls;

/// @brief Field fogLights, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroVolumetricFogLight>>*  ___fogLights;

/// @brief Field myLight, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___myLight;

/// @brief Field customFogDensityModifer, offset: 0x48, size: 0x4, def value: None
 float_t  ___customFogDensityModifer;

/// @brief Field fogMat, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___fogMat;

/// @brief Field volumetricsMat, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___volumetricsMat;

/// @brief Field blurMat, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___blurMat;

/// @brief Field blurMat2, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___blurMat2;

/// @brief Field volumetricsRenderTexture, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___volumetricsRenderTexture;

/// @brief Field volumetricsRenderTextureHandle, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___volumetricsRenderTextureHandle;

/// @brief Field volumetricsRenderTextureRT, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___volumetricsRenderTextureRT;

/// @brief Field blitThroughMat, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___blitThroughMat;

/// @brief Field m_PointLightParams, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::Enviro::EnviroFogModule_PointLightParams>  ___m_PointLightParams;

/// @brief Field m_PointLightParamsCB, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_PointLightParamsCB;

/// @brief Field m_SpotLightParams, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::Enviro::EnviroFogModule_SpotLightParams>  ___m_SpotLightParams;

/// @brief Field m_SpotLightParamsCB, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_SpotLightParamsCB;

/// @brief Field directionaLight, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroVolumetricFogLight>  ___directionaLight;

/// @brief Field additionalLight, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroVolumetricFogLight>  ___additionalLight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroFogModule, ___Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___preset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___showFogControls) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___showVolumetricsControls) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___showUnityFogControls) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___fogLights) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___myLight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___customFogDensityModifer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___fogMat) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___volumetricsMat) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___blurMat) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___blurMat2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___volumetricsRenderTexture) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___volumetricsRenderTextureHandle) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___volumetricsRenderTextureRT) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___blitThroughMat) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___m_PointLightParams) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___m_PointLightParamsCB) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___m_SpotLightParams) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___m_SpotLightParamsCB) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___directionaLight) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogModule, ___additionalLight) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroFogModule) == 0xc8, "Size mismatch!");

} // namespace end def Enviro
