#pragma once
// IWYU pragma private; include "Enviro/EnviroURPRenderFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
CORDL_MODULE_EXPORT(EnviroURPRenderFeature)
namespace Enviro {
class EnviroURPRenderGraph;
}
namespace Enviro {
class EnviroURPRenderPass;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
// Forward declare root types
namespace Enviro {
class EnviroURPRenderFeature;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroURPRenderFeature*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroURPRenderFeature*, "Enviro", "EnviroURPRenderFeature");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroURPRenderFeature
class CORDL_TYPE EnviroURPRenderFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
// Declarations
/// @brief Field disabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_disabled, put=setStaticF_disabled)) bool  disabled;

/// @brief Field graph, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_graph, put=__cordl_internal_set_graph)) ::Enviro::EnviroURPRenderGraph*  graph;

/// @brief Field pass, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pass, put=__cordl_internal_set_pass)) ::Enviro::EnviroURPRenderPass*  pass;

/// @brief Method AddRenderPasses, addr 0x180606a10, size 0xe0, virtual true, abstract: false, final false
inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method Create, addr 0x180606af0, size 0x160, virtual true, abstract: false, final false
inline void Create() ;

static inline ::Enviro::EnviroURPRenderFeature* New_ctor() ;

constexpr ::Enviro::EnviroURPRenderGraph* const& __cordl_internal_get_graph() const;

constexpr ::Enviro::EnviroURPRenderGraph*& __cordl_internal_get_graph() ;

constexpr ::Enviro::EnviroURPRenderPass* const& __cordl_internal_get_pass() const;

constexpr ::Enviro::EnviroURPRenderPass*& __cordl_internal_get_pass() ;

constexpr void __cordl_internal_set_graph(::Enviro::EnviroURPRenderGraph*  value) ;

constexpr void __cordl_internal_set_pass(::Enviro::EnviroURPRenderPass*  value) ;

/// @brief Method .ctor, addr 0x180324470, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_disabled() ;

static inline void setStaticF_disabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroURPRenderFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroURPRenderFeature", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroURPRenderFeature(EnviroURPRenderFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroURPRenderFeature", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroURPRenderFeature(EnviroURPRenderFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18425};

/// @brief Field graph, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroURPRenderGraph*  ___graph;

/// @brief Field pass, offset: 0x28, size: 0x8, def value: None
 ::Enviro::EnviroURPRenderPass*  ___pass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroURPRenderFeature, ___graph) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderFeature, ___pass) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroURPRenderFeature) == 0x30, "Size mismatch!");

} // namespace end def Enviro
