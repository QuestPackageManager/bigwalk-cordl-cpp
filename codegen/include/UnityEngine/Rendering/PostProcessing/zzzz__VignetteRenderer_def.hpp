#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/VignetteRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_def.hpp"
CORDL_MODULE_EXPORT(VignetteRenderer)
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine::Rendering::PostProcessing {
class Vignette;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class VignetteRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::VignetteRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::VignetteRenderer*, "UnityEngine.Rendering.PostProcessing", "VignetteRenderer");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<T>
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.VignetteRenderer
class CORDL_TYPE VignetteRenderer : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<::UnityW<::UnityEngine::Rendering::PostProcessing::Vignette>> {
public:
// Declarations
static inline ::UnityEngine::Rendering::PostProcessing::VignetteRenderer* New_ctor() ;

/// @brief Method Render, addr 0x181fbeca0, size 0x220, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method .ctor, addr 0x181fb08a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VignetteRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VignetteRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VignetteRenderer(VignetteRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VignetteRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VignetteRenderer(VignetteRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18598};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::VignetteRenderer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
