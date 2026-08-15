#pragma once
// IWYU pragma private; include "GlobalNamespace/SkyboxToCubemapRenderFeatureRenderGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
CORDL_MODULE_EXPORT(SkyboxToCubemapRenderFeatureRenderGraph)
namespace GlobalNamespace {
class DrawSkyboxCustomPass;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class SkyboxToCubemapRenderFeatureRenderGraph;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph*, "", "SkyboxToCubemapRenderFeatureRenderGraph");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: SkyboxToCubemapRenderFeatureRenderGraph
class CORDL_TYPE SkyboxToCubemapRenderFeatureRenderGraph : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
// Declarations
/// @brief Field colorTarget, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorTarget, put=__cordl_internal_set_colorTarget)) ::UnityW<::UnityEngine::RenderTexture>  colorTarget;

/// @brief Field colorTargetHandle, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorTargetHandle, put=__cordl_internal_set_colorTargetHandle)) ::UnityEngine::Rendering::RTHandle*  colorTargetHandle;

/// @brief Field depthTarget, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_depthTarget, put=__cordl_internal_set_depthTarget)) ::UnityW<::UnityEngine::RenderTexture>  depthTarget;

/// @brief Field mirrorMaterial, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_mirrorMaterial, put=__cordl_internal_set_mirrorMaterial)) ::UnityW<::UnityEngine::Material>  mirrorMaterial;

/// @brief Field shader, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_shader, put=__cordl_internal_set_shader)) ::UnityW<::UnityEngine::Shader>  shader;

/// @brief Field skyboxPass, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_skyboxPass, put=__cordl_internal_set_skyboxPass)) ::GlobalNamespace::DrawSkyboxCustomPass*  skyboxPass;

/// @brief Method AddRenderPasses, addr 0x180329520, size 0x30, virtual true, abstract: false, final false
inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method Create, addr 0x180329550, size 0x230, virtual true, abstract: false, final false
inline void Create() ;

/// @brief Method Dispose, addr 0x180329780, size 0x40, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph* New_ctor() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_colorTarget() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_colorTarget() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_colorTargetHandle() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_colorTargetHandle() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_depthTarget() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_depthTarget() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_mirrorMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_mirrorMaterial() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_shader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_shader() ;

constexpr ::GlobalNamespace::DrawSkyboxCustomPass* const& __cordl_internal_get_skyboxPass() const;

constexpr ::GlobalNamespace::DrawSkyboxCustomPass*& __cordl_internal_get_skyboxPass() ;

constexpr void __cordl_internal_set_colorTarget(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_colorTargetHandle(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_depthTarget(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_mirrorMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_shader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_skyboxPass(::GlobalNamespace::DrawSkyboxCustomPass*  value) ;

/// @brief Method .ctor, addr 0x180324470, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkyboxToCubemapRenderFeatureRenderGraph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkyboxToCubemapRenderFeatureRenderGraph", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SkyboxToCubemapRenderFeatureRenderGraph(SkyboxToCubemapRenderFeatureRenderGraph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkyboxToCubemapRenderFeatureRenderGraph", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkyboxToCubemapRenderFeatureRenderGraph(SkyboxToCubemapRenderFeatureRenderGraph const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4774};

/// @brief Field colorTarget, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___colorTarget;

/// @brief Field shader, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___shader;

/// @brief Field depthTarget, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___depthTarget;

/// @brief Field colorTargetHandle, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___colorTargetHandle;

/// @brief Field skyboxPass, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::DrawSkyboxCustomPass*  ___skyboxPass;

/// @brief Field mirrorMaterial, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___mirrorMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph, ___colorTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph, ___shader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph, ___depthTarget) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph, ___colorTargetHandle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph, ___skyboxPass) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph, ___mirrorMaterial) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SkyboxToCubemapRenderFeatureRenderGraph) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
