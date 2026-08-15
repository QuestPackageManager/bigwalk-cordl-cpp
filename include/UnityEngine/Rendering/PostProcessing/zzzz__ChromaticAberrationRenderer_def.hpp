#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ChromaticAberrationRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_def.hpp"
CORDL_MODULE_EXPORT(ChromaticAberrationRenderer)
namespace UnityEngine::Rendering::PostProcessing {
class ChromaticAberration;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class ChromaticAberrationRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer*, "UnityEngine.Rendering.PostProcessing", "ChromaticAberrationRenderer");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<T>
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.ChromaticAberrationRenderer
class CORDL_TYPE ChromaticAberrationRenderer : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<::UnityW<::UnityEngine::Rendering::PostProcessing::ChromaticAberration>> {
public:
// Declarations
/// @brief Field m_InternalSpectralLut, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InternalSpectralLut, put=__cordl_internal_set_m_InternalSpectralLut)) ::UnityW<::UnityEngine::Texture2D>  m_InternalSpectralLut;

static inline ::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer* New_ctor() ;

/// @brief Method Release, addr 0x181fb2480, size 0x30, virtual true, abstract: false, final false
inline void Release() ;

/// @brief Method Render, addr 0x181fb24b0, size 0x1e0, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_InternalSpectralLut() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_InternalSpectralLut() ;

constexpr void __cordl_internal_set_m_InternalSpectralLut(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x181fb08a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChromaticAberrationRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChromaticAberrationRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChromaticAberrationRenderer(ChromaticAberrationRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChromaticAberrationRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChromaticAberrationRenderer(ChromaticAberrationRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18554};

/// @brief Field m_InternalSpectralLut, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___m_InternalSpectralLut;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer, ___m_InternalSpectralLut) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ChromaticAberrationRenderer) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
