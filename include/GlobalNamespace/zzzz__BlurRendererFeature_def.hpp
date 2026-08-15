#pragma once
// IWYU pragma private; include "GlobalNamespace/BlurRendererFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
CORDL_MODULE_EXPORT(BlurRendererFeature)
namespace GlobalNamespace {
class BlurRenderPass;
}
namespace GlobalNamespace {
class BlurSettings;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class BlurRendererFeature;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BlurRendererFeature*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BlurRendererFeature*, "", "BlurRendererFeature");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: BlurRendererFeature
class CORDL_TYPE BlurRendererFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
// Declarations
/// @brief Field blurRenderPass, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_blurRenderPass, put=__cordl_internal_set_blurRenderPass)) ::GlobalNamespace::BlurRenderPass*  blurRenderPass;

/// @brief Field material, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::GlobalNamespace::BlurSettings*  settings;

/// @brief Field shader, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_shader, put=__cordl_internal_set_shader)) ::UnityW<::UnityEngine::Shader>  shader;

/// @brief Method AddRenderPasses, addr 0x1803241f0, size 0x170, virtual true, abstract: false, final false
inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method Create, addr 0x180324360, size 0xe0, virtual true, abstract: false, final false
inline void Create() ;

/// @brief Method Dispose, addr 0x180324440, size 0x30, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::BlurRendererFeature* New_ctor() ;

constexpr ::GlobalNamespace::BlurRenderPass* const& __cordl_internal_get_blurRenderPass() const;

constexpr ::GlobalNamespace::BlurRenderPass*& __cordl_internal_get_blurRenderPass() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr ::GlobalNamespace::BlurSettings* const& __cordl_internal_get_settings() const;

constexpr ::GlobalNamespace::BlurSettings*& __cordl_internal_get_settings() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_shader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_shader() ;

constexpr void __cordl_internal_set_blurRenderPass(::GlobalNamespace::BlurRenderPass*  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_settings(::GlobalNamespace::BlurSettings*  value) ;

constexpr void __cordl_internal_set_shader(::UnityW<::UnityEngine::Shader>  value) ;

/// @brief Method .ctor, addr 0x180324470, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BlurRendererFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BlurRendererFeature", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BlurRendererFeature(BlurRendererFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlurRendererFeature", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlurRendererFeature(BlurRendererFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4765};

/// @brief Field settings, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::BlurSettings*  ___settings;

/// @brief Field shader, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___shader;

/// @brief Field material, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field blurRenderPass, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::BlurRenderPass*  ___blurRenderPass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlurRendererFeature, ___settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurRendererFeature, ___shader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurRendererFeature, ___material) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurRendererFeature, ___blurRenderPass) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BlurRendererFeature) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
