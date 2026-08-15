#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/LensDistortionRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_def.hpp"
CORDL_MODULE_EXPORT(LensDistortionRenderer)
namespace UnityEngine::Rendering::PostProcessing {
class LensDistortion;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class LensDistortionRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::LensDistortionRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::LensDistortionRenderer*, "UnityEngine.Rendering.PostProcessing", "LensDistortionRenderer");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<T>
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.LensDistortionRenderer
class CORDL_TYPE LensDistortionRenderer : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<::UnityW<::UnityEngine::Rendering::PostProcessing::LensDistortion>> {
public:
// Declarations
static inline ::UnityEngine::Rendering::PostProcessing::LensDistortionRenderer* New_ctor() ;

/// @brief Method Render, addr 0x181fb7530, size 0x1f0, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method .ctor, addr 0x181fb08a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LensDistortionRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LensDistortionRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LensDistortionRenderer(LensDistortionRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LensDistortionRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LensDistortionRenderer(LensDistortionRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18573};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::LensDistortionRenderer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
